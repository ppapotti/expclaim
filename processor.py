

import lpmln2lpmlnneg_lexer
import lpmln2asp_lexer
import asp_domain_2_asp_lexer
import os
import marginal_mcsat
import learn_mcsat
import learn_simplelpmln_compEvid
import learn_simplelpmln_incompEvid
import exactProbInfer

arg_list = {
    'infer_type':0,
    'mode': 1,
    'is_soft':False,
    'mf':1000,
    'clingo_options':"",
    'file_name':"",
    'lpmlnNEG':"lpmlnneg.lpmln",
    'lpmln2asp':"lpmln2asp.pl",
    'aspDomain2asp':"aspDomain2asp.pl",
    'evidence':"",
    'queryList':[],
    'xorMode':0,
    'isCompleteEvid':False,
    'learning-literation': 50,
    'mcasp-sample':-1
}

def arg_processor(arglist):
    global arg_list
    arg_list['file_name'] =arglist[0]
    arglist = arglist[1:]
    for item in arglist:
        if "--mf=" in item:
            arg_list['mf'] = int(item[item.find("=")+1:])
        elif "--tr-hr=" in item:
            boolV = bool(item[item.find("=")+1:])
            if boolV:
                arg_list['mode'] = 0
            else:
                arg_list['mode'] = 1
        elif "--work-type=" in item:
            type = str(item[item.find("=")+1:])
            if type=="map":
                arg_list['infer_type'] = 0
            elif type == "query":
                arg_list['infer_type'] = 1
            elif type == 'approximate':
                arg_list['infer_type'] = 2
            elif type == "learn":
                arg_list['infer_type'] = 3
            elif type == "learns":
                arg_list['infer_type'] = 4
            elif type == "learnsc":
                arg_list['infer_type'] = 5
        elif "-c q=" in item:
            queryStr = str(item[item.find("=")+1:])
            arg_list['queryList'] = queryStr.split("__LP__")
            arg_list['clingo_options'] += item + " "
        elif item == "--h":
            print("print help exit program")
        elif "--evidence" in item:
            evi = str(item[item.find("=")+1:])
            arg_list['evidence'] = evi
            arg_list['clingo_options'] += evi + " "
        elif "--xormode" in item:
            arg_list['xorMode'] = int(item[item.find("=")+1:])
        elif "--learning-literation" in item:
            arg_list['learning-literation'] = int(item[item.find("=")+1:])
        elif "--mcasp-sample" in item:
            arg_list['mcasp-sample'] = int(item[item.find("=")+1:])
        else:
            arg_list['clingo_options'] += item + " "

    if arg_list['mode'] ==1:
        arg_list['is_soft'] = True


def lpmln_to_lpmln_neg_parser(filename=""):

    if filename=="":
        with open(arg_list['file_name'] ,'r') as content_file:
            content = content_file.read()
    else:
        if os.path.isfile(filename):
            with open(filename,'r') as content_file:
                content = content_file.read()
        else:
            content = filename

    parser = lpmln2lpmlnneg_lexer.lpmln2lpmlnnet(content,arg_list['mf'])
    output = parser.parseToNeg()

    print("First parser. Done!")
    return output



def lpmln_to_asp_parser(content,filename=""):

    if filename == "":
        if arg_list['mode'] == 0:
            parser = lpmln2asp_lexer.lpmln2asp(content, True, arg_list['mf'])
        else:
            parser = lpmln2asp_lexer.lpmln2asp(content, False, arg_list['mf'])
    else:
        with open(filename,'r') as content_file:
            f_content = content_file.read()
        if arg_list['mode'] == 0:
            parser = lpmln2asp_lexer.lpmln2asp(f_content, True, arg_list['mf'])
        else:
            parser = lpmln2asp_lexer.lpmln2asp(f_content, False, arg_list['mf'])

    output = parser.parseToASP()

    print("Second parser. Done!")
    return output

def asp_domain_2_asp_parser(content):

    parser = asp_domain_2_asp_lexer.domianRemover(content)
    output = parser.parseToRemoveDomain()

    print("Third parser. Done!")
    return output

def solve():
    if arg_list['infer_type'] == 0:     # infer type = map
        content = lpmln_to_asp_parser("",arg_list['file_name'])
        finalout = asp_domain_2_asp_parser(content)

        with open('asp.pl', 'w') as fw:
            fw.write(finalout)

        command = "clingo " + os.getcwd() + "/asp.pl " + arg_list['clingo_options']
        print(command)
        os.system(command)

    elif arg_list['infer_type'] == 1:                              #infer type = query

        content = lpmln_to_asp_parser("",arg_list['file_name'])
        finalout = asp_domain_2_asp_parser(content)

        warn_option = "--warn=none"
        thread_option = "-t 4"
        enumerateAll = "--opt-mode=enum"
        listAll = "0"
        warn = "--warn=no-atom-undefined"
        options = [warn_option, thread_option,enumerateAll,listAll,warn]
        if arg_list['mode'] == 1:    # hard rule = F
            if arg_list['evidence'] == "":
                exactInfer = exactProbInfer.exactProbInfer(finalout,options,arg_list['queryList'],False)
            else:
                with open(arg_list['evidence'], 'r') as content_file:
                    content = content_file.read()
                finalout+=content
                exactInfer = exactProbInfer.exactProbInfer(finalout,options,arg_list['queryList'],False)
        else:
            if arg_list['evidence'] == "":
                exactInfer = exactProbInfer.exactProbInfer(finalout,options,arg_list['queryList'],True)
            else:
                with open(arg_list['evidence'], 'r') as content_file:
                    content = content_file.read()
                finalout+=content
                exactInfer = exactProbInfer.exactProbInfer(finalout,options,arg_list['queryList'],True)
        exactInfer.solve()

    elif arg_list['infer_type'] == 2:                   # MCASP sampling based inferencing
        content = lpmln_to_lpmln_neg_parser()
        content = lpmln_to_asp_parser(content)
        finalout = asp_domain_2_asp_parser(content)
        if arg_list['evidence'] !="":
            with open(arg_list['evidence'] , 'r') as content_file:
                evi_content = content_file.read()
                if arg_list['mcasp-sample'] !=-1:
                    mcASPObj = marginal_mcsat.mcSAT(finalout, evi_content, arg_list['queryList'], arg_list['xorMode'],arg_list['mcasp-sample'])
                else:
                    mcASPObj = marginal_mcsat.mcSAT(finalout, evi_content, arg_list['queryList'], arg_list['xorMode'])
        else:
            if arg_list['mcasp-sample'] !=-1:
                mcASPObj = marginal_mcsat.mcSAT(finalout, "", arg_list['queryList'], arg_list['xorMode'],arg_list['mcasp-sample'])
            else:
                mcASPObj = marginal_mcsat.mcSAT(finalout, "", arg_list['queryList'], arg_list['xorMode'])
        mcASPObj.runMCASP()
        mcASPObj.printQuery()


    elif arg_list['infer_type'] == 3:               #mcsat sampling based learning
        print("Learning from by general algorithm")
        if arg_list['mcasp-sample'] !=-1:
            learnObj = learn_mcsat.learn_general_ga_mcasp(arg_list['file_name'], arg_list['evidence'],
                                                          arg_list['xorMode'], arg_list['learning-literation'],
                                                          arg_list['mcasp-sample'])
            learnObj.learn()
        else:
            learnObj = learn_mcsat.learn_general_ga_mcasp(arg_list['file_name'], arg_list['evidence'],
                                                          arg_list['xorMode'], arg_list['learning-literation'])
            learnObj.learn()
    elif arg_list['infer_type'] == 4:
        print("Learning simple lpmln from in-completed evidence")
        if arg_list['mcasp-sample'] !=-1:
            learnObj = learn_simplelpmln_incompEvid.learn_simple_incomp_evid(arg_list['file_name'], arg_list['evidence'],
                                                          arg_list['xorMode'], arg_list['learning-literation'],
                                                          arg_list['mcasp-sample'])
            learnObj.learn()
        else:
            learnObj = learn_simplelpmln_incompEvid.learn_simple_incomp_evid(arg_list['file_name'], arg_list['evidence'],
                                                          arg_list['xorMode'], arg_list['learning-literation'])
            learnObj.learn()
    elif arg_list['infer_type'] == 5:
        print("Learning simple lpmln from completed evidence")

        learnObj = learn_simplelpmln_compEvid.learn_simple_comp_evid(arg_list['file_name'], arg_list['evidence'],
                                               arg_list['xorMode'],
                                               arg_list['learning-literation'])

        learnObj.learn()













