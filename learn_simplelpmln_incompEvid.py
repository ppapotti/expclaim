
import os
import os.path

import processor
import clingo
import sympy
import marginal_mcsat



class learn_simple_incomp_evid(object):

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


        self.progranWithoutPlaceholder = ""
        self.weightsDic = {}

    def updatefinalWeight(self):

        buffer = []
        rule_index = 1
        for line in  self.aspProgram.splitlines():
            if line.startswith('@getWeight'):
                buffer.append(str(self.weightsDic[str(rule_index)]['weight']) + ' ' + ''.join(line.split(' ')[1:]))
            else:
                buffer.append(line)
            if "".join(line.split()) != "":
                rule_index += 1

        clingo_opt = open(self.aspPath+".weight", 'w')
        for line in buffer:
            clingo_opt.write(line+'\n')
        clingo_opt.close()

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

    def findTotalMisWithMCSAT(self,finalout):
        for key, value in self.weightsDic.items():
            value['nii'] = 0

        mcASPObj = marginal_mcsat.mcSAT(finalout, self.evidence, [], self.xorMode, self.max_mcsat_iteration)
        mcASPObj.runMCASP()
        samplesEvidenced = mcASPObj.sampleForReturn
        print("Done samples evidenced")
        for sampleE in samplesEvidenced:
            for atom in sampleE:
                if (str(atom.name) == "neg" or str(atom.name) == "unsat") and "lpmlnneg_" in str(atom.arguments[0]):
                    idx = eval(str(atom.arguments[0]).split('_')[1])
                    for key, value in self.weightsDic.items():
                        if value['wIndex'] == idx:
                            value['nii'] += 1

        for key, value in self.weightsDic.items():
            value['nii'] = float(value['nii']) / float(self.max_mcsat_iteration)

    def learn_ini(self):
        buffer = []
        rule_index = 1
        for line in self.aspProgram.splitlines():
            if line.startswith('@getWeight'):
                self.weightsDic[str(rule_index)] = {
                    'wIndex': rule_index,
                    'weight': 0,
                    'n': 0,
                    'nii': 0,
                    'atomName': str(line.split(' ')[1]).split('(')[0],
                    'gradient': [],
                }
                self.weightsDic[str(rule_index)]['weight'] += self.init_weight
                buffer.append(str(self.weightsDic[str(rule_index)]['weight']) + ' ' + ''.join(line.split(' ')[1:]))
            else:
                buffer.append(line)
            if "".join(line.split()) != "":
                rule_index += 1

        for line in buffer:
            self.progranWithoutPlaceholder += line + "\n"

        # Done on creating weight file, and initializing dictionary
        content = processor.lpmln_to_lpmln_neg_parser(self.progranWithoutPlaceholder)
        content = processor.lpmln_to_asp_parser(content)
        finalout = processor.asp_domain_2_asp_parser(content)

        warn_option = "--warn=none"
        thread_option = "-t 4"
        options = [warn_option, thread_option]
        sampling_control = clingo.Control(options)
        sampling_control.add("base",[],finalout)
        sampling_control.ground([("base", [])])
        symbols = [atom.symbol for atom in sampling_control.symbolic_atoms]
        for s in symbols:
            for key, value in self.weightsDic.items():
                if s.name == value['atomName']:
                    value['n'] += 1

    def learn(self):
        self.learn_ini()
        # Begin: Learning Iterations
        for iter_count in range(self.max_learning_iteration):
            print('============ Iteration ' + str(iter_count) + ' ============')
            content = processor.lpmln_to_lpmln_neg_parser(self.progranWithoutPlaceholder)
            content = processor.lpmln_to_asp_parser(content)
            finalout = processor.asp_domain_2_asp_parser(content)
            self.findTotalMisWithMCSAT(finalout)

            for key, value in self.weightsDic.items():
                print(key, value)

            max_diff = 0
            for key, value in self.weightsDic.items():
                gradient = value['n'] / (1 + sympy.exp(float(value['weight']))) - value['nii']
                value['gradient'].append(self.lr * gradient)
                value['weight'] += value['gradient'][-1]
                if max_diff < abs(value['gradient'][-1]):
                    max_diff = abs(value['gradient'][-1])
            # End: Learning Iterations
            if max_diff <= self.stopping_diff:
                break

            self.updateWithWeightPlaceHolders()

        # Begin: Store and save new weights

        self.updatefinalWeight()

        # End: Store and save new weights
