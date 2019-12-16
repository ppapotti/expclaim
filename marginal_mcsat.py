#script(python)
import clingo
import random
import sympy
import time
import xor_constraint_drawer



class mcSAT(object):

    def __init__(self,content,evidence,queryList,xorMode,max_liter=500):
        warn_option = "--warn=none"
        thread_option = "-t 4"
        self.clingoOptions = [warn_option, thread_option]
        self.max_num_iteration = max_liter
        self.curr_sample = None
        self.whole_model = []
        self.query_count = {}
        self.domain = []
        self.aspContent = content
        self.eviContent = evidence
        self.queryList = queryList
        self.sampleForReturn = []
        self.xorM = xorMode




    def getSample(self,model):
        whole_model = []
        for atom in model:
            whole_model.append(atom)

    def findUnsatRules(self,atoms):
        M = []
        for atom in atoms:
            if atom.name.startswith('unsat'):
                weight = float(str(atom.arguments[1]).replace("\"", ""))
                r = random.random()
                if r < 1 - sympy.exp(weight):
                    M.append(atom)
        return M

    def processSample(self,atoms):

        sample_attempt = []
        # Find rules that are not satisfied
        M = self.findUnsatRules(atoms)
        # Do specific things with the sample: counting atom occurence
        self.sampleForReturn.append(atoms)

        for r in self.domain:
            if r in atoms:
                sample_attempt.append((r, True))
                if r in self.query_count:
                    self.query_count[r] += 1
            else:
                sample_attempt.append((r, False))


        return M,sample_attempt


    def runMCASP(self):

        # Configure Clingo running options

        firstSamplcontrol = clingo.Control(self.clingoOptions)
        firstSamplcontrol.add("base",[],self.aspContent)
        firstSamplcontrol.ground([("base", [])])

        if self.eviContent != "":
            firstSamplcontrol.add("evid",[],self.eviContent)
            firstSamplcontrol.ground([("evid", [])])

        for atom in firstSamplcontrol.symbolic_atoms:
            if atom.symbol.name in self.queryList:
                self.query_count[atom.symbol] = 0
            self.domain.append(atom.symbol)


        random.seed()
        sample_count = 0
        models = []
        firstSamplcontrol.solve([], lambda model: models.append(model.symbols(atoms=True)))
        if len(models) >= 1:
            # randomly generate a index from models
            randomIndex = random.randint(0, len(models) - 1)
            model = models[randomIndex]
        else:
            print("Program has no satisfiable solution, exit!")
            return False



        M,curr_sample = self.processSample(model)

        for _ in range(1, self.max_num_iteration):
            if sample_count % 10 == 0:
                print("Getting sample ", sample_count)
            sample_count += 1
            # Create file with satisfaction constraints

            constraintContent = ""
            for m in M:
                argsStr = ''
                for arg in m.arguments:
                    argsStr += (str(arg) + ',')
                argsStr = argsStr.rstrip(',')
                constraintContent+=':- not ' + m.name + '(' + argsStr + ').\n'

            #startTime = time.time()
            if self.eviContent != "":
                xorSampler = xor_constraint_drawer.xorSampler(self.xorM,[self.aspContent, self.eviContent, constraintContent],self.clingoOptions)
                models = xorSampler.startDrawSample()
            else:
                xorSampler = xor_constraint_drawer.xorSampler(self.xorM,[self.aspContent, constraintContent], self.clingoOptions)
                models = xorSampler.startDrawSample()

            #print("MCASP time for getting 1 sample: ", str(time.time() - startTime))

            if len(models) > 1:
                # randomly generate a index from models
                randomIndex = random.randint(0, len(models) - 1)
                model = models[randomIndex]
            else:
                model = models[0]

            M, curr_sample = self.processSample(model)
        return True

    def printQuery(self):
        for atom in self.query_count:
            print(atom, ": ", float(self.query_count[atom]) / float(self.max_num_iteration))
            print(self.query_count[atom])
            print(self.max_num_iteration)

    def getSamples(self):
        return self.sampleForReturn



