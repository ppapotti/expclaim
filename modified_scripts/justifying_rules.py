import re
from rule_reading_functions import *
from utils import *



def get_rules(file):

    f=open(file,'r')
    lines=f.readlines()
    rules=[]

    for line in lines[:]:
        rule_dict={}
        if(':-' in line):
            if(line[:2]!=':-'):
                body=line.split(':-')[1]
                atoms=re.findall(r'((not )?\w+\(.+?,.+?\))',body)
                atoms=[a[0] for a in atoms]
                neg_atoms=[a for a in atoms if 'not' in a ]
                pos_atoms=[a for a in atoms if a not in neg_atoms]
                conditions=re.findall(r'[A-Z][<>!=]{1,2}[A-Z]',body)
                rule_dict["rule"]=line
                rule_dict["pos_atoms"]=pos_atoms
                rule_dict["neg_atoms"]=neg_atoms
                rule_dict["conditions"]=conditions
                rules.append(rule_dict)
    return rules



def get_evidence_literals_file(file):

    f=open(file,'r')
    lines=f.readlines()
    literals=set()
    evidence=set()
    for line in lines:
        if(':-' not in line and line !='\n'):
            evidence.add(get_predicates(line)[0])
            p=get_predicates(line)
            for pp in p:
                for l in get_literals(pp):
                    literals.add(l)
    return evidence,literals



def find_justifying_rule(file,subj,obj):


    rules=get_rules(file)
    evidence,literals=get_evidence_literals_file(file)
    just_rules=[]
    for rule in rules:
        body=rule["rule"].split(":-")[1]
        pos_atoms=rule["pos_atoms"]
        gr_pos_atoms=[ground_atom(atom,subj,obj) for atom in pos_atoms]
        neg_atoms=rule["neg_atoms"]
        gr_neg_atoms=[]
        if(len(neg_atoms)>0):
            gr_neg_atoms=[ground_atom(atom,subj,obj) for atom in neg_atoms]

        v2g=get_v2g(','.join(gr_pos_atoms))



        if(len(v2g)==0):
            flag=0
            for atom in gr_pos_atoms:
                if(atom not in evidence):
                    flag=1
                    break
            if(flag==0):
                just_rules.append(rule["rule"])


        if(len(v2g)==1):

            for C in literals:
                possible_gr_pos_atoms=[atom.replace('(C,',"("+'"'+C+'"'+',').replace(',C)',','+'"'+C+'"'+')') for atom in gr_pos_atoms]
                flag=0
                for atom in possible_gr_pos_atoms:
                    if(atom not in evidence):
                        flag=1
                        break

                if(flag==0):

                    if(len(gr_neg_atoms)>0):
                        possible_gr_neg_atoms=[atom.replace('(C,',"("+'"'+C+'"'+',').replace(',C)',','+'"'+C+'"'+')') for atom in gr_neg_atoms]
                        flag=0
                        for atom in possible_gr_neg_atoms:
                            if(atom in evidence):
                                flag=1
                                break
                        if(flag==0):
                            just_rules.append(rule["rule"])
                    else:
                        just_rules.append(rule["rule"])



        if(len(v2g)==2):

            for C in literals:
                for D in literals:
                    valid=0
                    possible_gr_pos_atoms=[atom.replace('(C,',"("+'"'+C+'"'+',').replace(',C)',','+'"'+C+'"'+')').replace('(D,',"("+'"'+D+'"'+',').replace(',D)',','+'"'+D+'"'+')') for atom in gr_pos_atoms]
                    flag=0
                    for atom in possible_gr_pos_atoms:
                        if(atom not in evidence):
                            flag=1
                            break

                    if(flag==0):
                        if(len(gr_neg_atoms)>0):
                            possible_gr_neg_atoms=[atom.replace('(C,',"("+'"'+C+'"'+',').replace(',C)',','+'"'+C+'"'+')').replace('(D,',"("+'"'+D+'"'+',').replace(',D)',','+'"'+D+'"'+')') for atom in gr_neg_atoms]
                            f=0
                            for atom in possible_gr_neg_atoms:
                                if(atom in evidence):
                                    f=1
                                    break
                            if(f==0 and len(rule["conditions"])==0):
                                valid=1

                        if(len(rule["conditions"])>0):
                            marker=0
                            for cond in rule["conditions"]:
                                if(cond[1]=='<'):
                                    if(test_int(C)==True and test_int(D)==True):
                                        gr_cond=cond.replace('(C,',"("+'"'+C+'"'+',').replace(',C)',','+'"'+C+'"'+')').replace('(D,',"("+'"'+D+'"'+',').replace(',D)',','+'"'+D+'"'+')')
                                    if(eval(cond)==False):
                                        marker=1
                                        break

                                if(cond[1]=='!='):
                                    if(test_int(C)==False and test_int(D)==False):
                                        if(C==D):
                                            marker=1
                                            break
                            if(marker==0):
                                valid=1
                        if(len(rule["conditions"])==0 and len(gr_neg_atoms)==0):
                            valid=1




                    if(valid==1):
                        just_rules.append(rule["rule"])


    return just_rules



