import re,numpy as np

def get_weight(p):
    return np.log(p/(1-p))


def get_relation(predicate):
    return predicate[:predicate.index('(')]


def get_rule_dict(filename,relation):
    f=open(filename,'r')
    lines=f.readlines()

    pr_dict={}
    nr_dict={}
    for line in lines[:]:
        #print(line)
        if(':-' in line):
            if(line[:2]==':-'):
                constraint=line
            else:
                search=re.search(r'[0-9.E -]*',line)
                weight=search.group()
                rule=line[len(weight):]
                head=get_relation(rule.split(':-')[0])
                if(head[:3]=='neg' and head[3:]==relation):
                    nr_dict[rule]=float(weight)
                else:
                    pr_dict[rule]=float(weight)


    return [pr_dict,nr_dict,constraint]


def filter_rule_dict(rule_dict,threshold):
    pr_dict,nr_dict,constraint=rule_dict
    pr_dict={k:v for k,v in pr_dict.items() if v>=threshold}
    nr_dict={k:v for k,v in nr_dict.items() if v>=threshold}
    return [pr_dict,nr_dict,constraint]

def multiply_weight_rule_dict(rule_dict,factor):
    pr_dict,nr_dict,constraint=rule_dict
    pr_dict={k:factor*v for k,v in pr_dict.items()}
    nr_dict={k:factor*v for k,v in nr_dict.items()}
    return [pr_dict,nr_dict,constraint]

def map_weight_rule_dict(rule_dict):
    pr_dict,nr_dict,constraint=rule_dict
    pr_dict={k:get_weight(v) for k,v in pr_dict.items()}
    nr_dict={k:get_weight(v) for k,v in nr_dict.items()}
    return [pr_dict,nr_dict,constraint]


def write_rule_dict(rule_dict,filename,inference_mode):
    pr_dict,nr_dict,constraint=rule_dict
    f=open(filename,'w')
    for k,v in pr_dict.items():
            if('MAP' in inference_mode):
                f.write(str(v)+"  "+k)
            if('ASP' in inference_mode):
                f.write(k)
    f.write('\n')
    f.write(constraint)
    f.write('\n')
    for k,v in nr_dict.items():
            if('MAP' in inference_mode):
                f.write(str(v)+"  "+k)
            if('ASP' in inference_mode):
                f.write(k)



