import os
import os.path
import time

import processor
import marginal_mcsat


class learn_general_ga_mcasp(object):

    def __init__(self,aspPath,evidPath,xorMode,max_learning_iteration=50,max_mcasp_sample=50,lr=0.1, min_mcasp_sample=1,stopping_diff=0.001,ini_weight=1):
        self.aspPath = aspPath
        self.evidPath = evidPath

        with open(aspPath, 'r') as content_file:
            self.aspProgram = content_file.read()
        with open(evidPath, 'r') as content_file:
            self.evidence = content_file.read()

        self.xorMode = xorMode
        self.lr = lr
        self.max_learning_iteration = max_learning_iteration
        self.min_mcsat_interation = min_mcasp_sample
        self.max_mcsat_iteration = max_mcasp_sample
        self.stopping_diff = stopping_diff
        self.init_weight = ini_weight


        self. progranWithoutPlaceholder = ""
        self.weightsDic = {}




    def findTotalMisWithMCSAT(self,finalout):
        for key, value in self.weightsDic.items():
            value['unsatEvi'] = 0
            value['unsatNoEvi'] = 0

        print("Start sample no evidenced")


        mcASPObj = marginal_mcsat.mcSAT(finalout,"", [], self.xorMode,self.max_mcsat_iteration)
        mcASPObj.runMCASP()
        samples = mcASPObj.sampleForReturn

        print("Done sample no evidenced")
        # print(samples)
        for samplene in samples:
            for atom in samplene:
                if (atom.name == "neg" or atom.name == "unsat") and "lpmlnneg_" in str(atom.arguments[0]):
                    idx = eval(str(atom.arguments[0]).split('_')[1])
                    for key, value in self.weightsDic.items():
                        if value['wIndex'] == idx:
                            value['unsatNoEvi'] += 1

        ################################################################################

        print("Start sample evidenced")

        mcASPObj = marginal_mcsat.mcSAT(finalout,self.evidence, [], self.xorMode, self.max_mcsat_iteration)
        mcASPObj.runMCASP()
        samplesEvidenced = mcASPObj.sampleForReturn

        print("Done sample evidenced")
        # print(samplesEvidenced)
        for sampleE in samplesEvidenced:
            for atom in sampleE:
                if (str(atom.name) == "neg" or str(atom.name) == "unsat") and "lpmlnneg_" in str(atom.arguments[0]):
                    idx = eval(str(atom.arguments[0]).split('_')[1])
                    for key, value in self.weightsDic.items():
                        if value['wIndex'] == idx:
                            value['unsatEvi'] += 1

        print(self.weightsDic)


    def updateWithWeightPlaceHolders(self):
        self.progranWithoutPlaceholder = ""
        buffer = []
        rule_index = 1
        for line in self.aspProgram.splitlines():
            if line.startswith('@getWeight'):
                buffer.append(str(self.weightsDic[str(rule_index)]['weight']) + ' ' + ''.join(line.split(' ')[1:]))
            else:
                buffer.append(line)
            if "".join(line.split()) != "":
                rule_index += 1

        for line in buffer:
            self.progranWithoutPlaceholder += line + "\n"

    def updatefinalWeight(self):

        buffer = []
        rule_index = 1
        for line in self.aspProgram.splitlines():
            if line.startswith('@getWeight'):
                buffer.append(str(self.weightsDic[str(rule_index)]['weightSum'] / self.max_learning_iteration) + ' ' + ''.join(
                    line.split(' ')[1:]))
            else:
                buffer.append(line)
            if "".join(line.split()) != "":
                rule_index += 1
        clingo_opt = open(self.aspPath+".weight", 'w')
        for line in buffer:
            clingo_opt.write(line+'\n')
        clingo_opt.close()

    def learn_ini(self):
        buffer = []
        rule_index = 1
        for line in self.aspProgram.splitlines():
            if line.startswith('@getWeight'):
                self.weightsDic[str(rule_index)] = {
                    'wIndex': rule_index,
                    'weight': 0,
                    'unsatEvi': 0,
                    'unsatNoEvi': 0,
                    'weightSum': 0,
                }
                self.weightsDic[str(rule_index)]['weight'] += self.init_weight
                buffer.append(str(self.weightsDic[str(rule_index)]['weight']) + ' ' + ''.join(line.split(' ')[1:]))
            else:
                buffer.append(line)
            if "".join(line.split()) != "":
                rule_index += 1
        for line in buffer:
            self.progranWithoutPlaceholder += line + "\n"




    def learn(self):
        self.learn_ini()
        content = processor.lpmln_to_lpmln_neg_parser(self.progranWithoutPlaceholder)
        content = processor.lpmln_to_asp_parser(content)
        finalout = processor.asp_domain_2_asp_parser(content)


        mcASPObj = marginal_mcsat.mcSAT(finalout, self.evidence, [], self.xorMode,self.min_mcsat_interation)
        result = mcASPObj.runMCASP()
        if not result:
            print('Evidence and program not satisfiable. Exit.')
            return False

        # Begin: Learning Iterations
        actualNumIteration = 0
        for iter_count in range(self.max_learning_iteration):
            actualNumIteration += 1
            print('============ Iteration ' + str(iter_count) + ' ============')
            #print(self.progranWithoutPlaceholder)

            self.updateWithWeightPlaceHolders()
            content = processor.lpmln_to_lpmln_neg_parser(self.progranWithoutPlaceholder)
            content = processor.lpmln_to_asp_parser(content)
            finalout = processor.asp_domain_2_asp_parser(content)


            self.findTotalMisWithMCSAT(finalout)
            # End: Single learning iteration
            # Compute new weights
            total_gradient = 0

            max_diff = 0

            for key, value in self.weightsDic.items():
                print('Rule: ', key)
                print('# False ground instances from Evidence: ', float(value['unsatEvi']) / float(self.max_mcsat_iteration))
                print('Expected # false ground instances: ', float(value['unsatNoEvi']) / float(self.max_mcsat_iteration))
                prob_gradient = -(value['unsatEvi']) / self.max_mcsat_iteration + float(value['unsatNoEvi']) / float(self.max_mcsat_iteration)
                print('Gradient: ', prob_gradient)
                total_gradient += abs(prob_gradient)

                if max_diff < abs(self.lr * prob_gradient):
                    max_diff = abs(self.lr * prob_gradient)
                value['weight'] += (self.lr * prob_gradient)
                value['weightSum'] += value['weight']
                print('New weight: ', key, ':', value['weight'])
            # End: Learning Iterations

            print("max_diff: ", max_diff)


            if max_diff <= self.stopping_diff:
                break

        # Begin: Store and save new weights
        self.updateWithWeightPlaceHolders()
        self.updatefinalWeight()
        # End: Store and save new weights
