import json,os,numpy as np


def get_weight(p):
    return np.log(p/(1-p))


def add_model_evidence(json_file,evid_dir,M):

    unknown=0
    with open(json_file) as f:
        data = json.load(f)

    for dict in data:

        if(dict['Status']==-1):
            unknown+=1

        else:
            file=evid_dir+dict['id']+"er_unique.txt"
            if(os.path.isfile(file)):
                f=open(file,"a")
                predicted_value=float(dict["PredictValue"])
                if(predicted_value>=M):
                    f.write(str(get_weight(float(dict["PredictValue"])))+" "+dict["Relation"]+"("+dict["Subject"]+","+dict["Object"]+").\n")
                f.close()



