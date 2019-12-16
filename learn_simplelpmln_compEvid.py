
import os
import os.path

import processor
import clingo
import xor_constraint_drawer
import random
import sympy


class learn_simple_comp_evid(object):
    def __init__(self, aspPath, evidPath,xorMode,max_learning_iteration=50,lr=0.1,stopping_diff = 0.001,init_weight = 1):
        self.aspPath = aspPath
        self.evidPath = evidPath

        with open(aspPath, 'r') as content_file:
            self.aspProgram = content_file.read()
        with open(evidPath, 'r') as content_file:
            self.evidence = content_file.read()


        self.lr = lr
        self.max_learning_iteration = max_learning_iteration
        self.stopping_diff = stopping_diff
        self.init_weight = init_weight
        self.xorMode = xorMode

        self.progranWithoutPlaceholder = ""
        self.weightsDic = {}

        warn_option = "--warn=none"
        thread_option = "-t 4"
        self.clingoOptions = [warn_option, thread_option]

    def updatefinalWeight(self):
        buffer = []
        rule_index = 1
        for line in self.aspProgram.splitlines():
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

        content = processor.lpmln_to_asp_parser(self.progranWithoutPlaceholder)
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

        xorSampler = xor_constraint_drawer.xorSampler(self.xorMode, [finalout,self.evidence],self.clingoOptions)
        models = xorSampler.startDrawSample()
        if len(models) > 1:
            # randomly generate a index from models
            randomIndex = random.randint(0, len(models) - 1)
            model = models[randomIndex]
        else:
            model = models[0]
        finalModels = []
        finalModels.append(model)

        for model in finalModels:
            for atom in model:
                if str(atom.name) == "unsat":
                    idx = eval(str(atom.arguments[0]))
                    for key, value in self.weightsDic.items():
                        if value['wIndex'] == idx:
                            value['nii'] += 1

    def learn(self):
        self.learn_ini()
        for key, value in self.weightsDic.items():
            print(key, value)

        # Begin: Learning Iterations
        for iter_count in range(self.max_learning_iteration):
            print('============ Iteration ' + str(iter_count) + ' ============')

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

        # Begin: Store and save new weights

        self.updatefinalWeight()

        # End: Store and save new weights
