import re



def ground_so(line,A,B):
    return line.replace(" ",'').replace('(A,',"("+'"'+A+'"'+',').replace(',A)',','+'"'+A+'"'+')').replace('(B,',"("+'"'+B+'"'+',').replace(',B)',','+'"'+B+'"'+')')


def get_literals(predicate):
    return re.findall(r'".*?"',predicate)


def get_predicates(line):
    return re.findall(r'\w+\(.*,.*\)',line)


def get_relation(predicate):
    return predicate[:predicate.index('(')]

def sub_equals_object(evid):
    if(len(evid)!=0):
        literals=get_literals(evid)
        if(len(literals)==2):
            return True if(literals[0]==literals[1]) else False



def get_v2g(line):
    v2g_left=re.findall(r'\(\w,',line)
    v2g_right=re.findall(r',\w\)',line)
    v2g=[]
    v2g.extend(v2g_left)
    v2g.extend(v2g_right)
    v2g=[x[1] for x in v2g]
    v2g=set(v2g)

    return v2g




def ground_atom(line,A,B):
    return line.replace('(A,',"("+'"'+A+'"'+',').replace(',A)',','+'"'+A+'"'+')').replace('(B,',"("+'"'+B+'"'+',').replace(',B)',','+'"'+B+'"'+')')




def test_int(value):
    try:
        value=int(value)
        return True
    except ValueError:
        pass
        return False



