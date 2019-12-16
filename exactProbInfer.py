import clingo
import math
import ipdb
from sympy import *

class exactProbInfer(object):
    def __init__(self,content,options,query,translateHardRule):
        self.content = content
        self.sampling_control = clingo.Control(options)
        self.models = []
        self.query = query
        self.translateHardRule = translateHardRule

    def solve(self):
        self.sampling_control.add("base", [], self.content)
        self.sampling_control.ground([("base", [])])
        self.sampling_control.solve([], lambda model: self.models.append(model.symbols(atoms=True)))


        for val in self.models:
            Node.modelCount = Node.modelCount + 1
            node = Node()

            for v in val:
                if v.name in self.query:
                    args = v.arguments
                    t = tuple(args)
                    if v.name in Node.parentDict:
                        literalDict = Node.parentDict[v.name].getDict()
                        if t in literalDict:
                            literalDict[t].append(Node.modelCount)
                        else:
                            literalDict[t] = [Node.modelCount]
                    else:
                        Node.parentDict[v.name] = Query()
                        Node.parentDict[v.name].getDict()[t] = [Node.modelCount]

                if v.name == 'unsat':
                    # ipdb.set_trace()
                    args = v.arguments
                    # Process soft Rules
                    # Unsat for this atom was false
                    # calculate its weight

                    if 'a' in str(args[1]):
                        node.setAlpha()
                    else:
                        node.setSoft(float(str(args[1]).strip('"')))
            Node.modelNodeMap[Node.modelCount] = node




        sym = symbols('a')
        normalizedExpr = 0

        maxValue = -1
        for key, value in Node.modelNodeMap.items():
            normalizedExpr = normalizedExpr + exp(value.getAlpha() * sym + value.getSoft())
            maxValue = max(maxValue, -value.getAlpha())


        print('\n')


        maxExpr = exp(maxValue * sym)
        normalizedExpr = normalizedExpr * maxExpr


        for key, value in Node.modelNodeMap.items():
            expr = exp(value.getAlpha() * sym + value.getSoft())
            expr = expr * maxExpr
            expr = expr / normalizedExpr


            if not self.translateHardRule:
                probability = float(expr.evalf())
            else:
                probability = float(limit(expr, sym, oo).evalf())
            if not probability == 0:
                Node.probDict[key] = probability
            else:
                Node.probDict[key] = 0


        for k, val in Node.parentDict.items():
            for key, value in val.getDict().items():
                lim = 0
                for model in value:
                    lim += Node.probDict[model]
                if not lim == 0:

                    if len(key) == 1:
                        print('%s(%s) %s' % (k, key[0], lim))
                    elif len(key) == 0:
                        print('%s %s' % (k, lim))

                    else:
                        print('%s%s %s' % (k, key, lim))





class Node(object):
    modelNodeMap = {}
    modelCount = 0
    literalDict = {}
    probDict = {}
    calculatedLimitsDict = {}
    parentDict = {}

    """docstring for Node"""

    def __init__(self):
        super(Node, self).__init__()
        self.alpha = 0
        self.soft = 0

    def setAlpha(self):
        self.alpha = self.alpha + 1

    def setSoft(self, softVal):
        self.soft = self.soft + softVal

    def getAlpha(self):
        return -self.alpha

    def getSoft(self):
        return -self.soft


class Query(object):

    def __init__(self):
        super(Query, self).__init__()
        self.literalDict = {}

    def getDict(self):
        return self.literalDict