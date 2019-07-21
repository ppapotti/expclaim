import re,csv,subprocess,random,math,os
from justifying_rules import *
from utils import *
import time





def do_inference(relation,claims_path,evidence_path,output_csv,output_txt):

    with open(claims_path,'r') as f:
        lines=f.readlines()
    N=len(lines)

    with open("small_claim",'w') as f:
        for item in lines:
            f.write("%s\n" % item)

    N=len(lines)
    with open(output_csv,'w') as csvFile:
        writer=csv.writer(csvFile)
        writer.writerow(['Id','Subject','Object','Label','Prob('+relation+')','NegProb('+relation+')','Predicted Label','Execution Time (mins)'])
    csvFile.close()

    g=open(output_txt,'w')

    to_remove_ids=[]
    for i in range(0,1):

        true_pos=0
        true_neg=0
        false_pos=0
        fp=[]
        false_neg=0
        fn=[]
        no_decision_p=0
        no_decision_n=0
        non_covered_p=[]
        non_covered_n=[]
        n_killed=0
        for line in lines:

            #print("*******START************")
            csv_line=[]

            facts=set()
            literals=set()
            evidence_probabilities={}

            #print(line)
            id,subject,object,label=line.rstrip('\n').split(',')

            csv_line.extend([id,subject,object,label])

            print(id,subject,object,label)
            claim=relation+'('+'"'+subject+'"'+','+'"'+object+'")'
            neg_claim='neg'+claim

            evid_path=evidence_path+id+'er_unique.txt'

            if(os.path.isfile(evid_path)==False):
                to_remove_ids.append(id)
                continue


            with open(evid_path,'r') as f:
                l=f.readlines()
                #print(lines)
                for ll in l:
                    if(':-' in l):
                        right_side=ll.split(':-')[1]
                    elif(ll !='\n'):
                        f=ll.rstrip('.\n')
                        facts.add(f)
                        for lll in get_literals(f):
                            literals.add(lll)
            #print(facts,literals)
        #print("FACTS",facts)
        #print("LITERALS",literals)
        #print('\n')

            cmd='python main.py -i '+evid_path+' -q '+relation+','+'neg'+relation+' >out.txt'
            print(cmd)
            start=time.time()
            subprocess.call(cmd, shell=True)
            exec_time=(time.time()-start)/60
#######EDIT######################

            with open('out.txt','r') as f:
                evidence=f.readlines() #[4:]


            if(len(evidence)==1):
                n_killed+=1
                csv_line.append("KILLED")


            elif(len(evidence)==4):

                csv_line.append("Can't Decide")
                if(csv_line[3]=='1'):
                    no_decision_p+=1
                    non_covered_p.append(id)
                else:
                    no_decision_n+=1
                    non_covered_n.append(id)



            else:

                for e in evidence[4:]:
                    pred,prob=e.rstrip('\n').split(') ')
                    pred+=')'
                    pred=pred.replace(" ",'')
                    evidence_probabilities[pred]=float(prob)

                if(claim in evidence_probabilities):
                    csv_line.append(evidence_probabilities[claim])
                else:
                    csv_line.append(-1)

                if(neg_claim in evidence_probabilities):
                    csv_line.append(evidence_probabilities[neg_claim])
                else:
                    csv_line.append(-1)


                if(csv_line[4]==-1 and csv_line[5]==-1):
                    csv_line.append("Can't Decide")
                    if(csv_line[3]=='1'):
                        no_decision_p+=1
                        non_covered_p.append(id)
                    else:
                        no_decision_n+=1
                        non_covered_n.append(id)

                elif(csv_line[4]>csv_line[5]):
                     csv_line.append(1)
                     if(csv_line[3]=='1'):
                         true_pos+=1
                     else:
                         false_pos+=1
                         fp.append(id)

                else:
                    csv_line.append(-1)
                    if(csv_line[3]=='0'):
                        true_neg+=1
                    else:
                        false_neg+=1
                        fn.append(id)

                facts.update(evidence_probabilities.keys())



            #justifying_rules=find_justifying_rule(evid_path,subject,object)
            #csv_line.append(list(set(justifying_rules)))
            csv_line.append(exec_time)
            with open(output_csv,'a') as csvFile:
                writer=csv.writer(csvFile)
                writer.writerow(csv_line)
            csvFile.close()
        total=true_pos+false_neg+true_neg+false_pos+no_decision_p+no_decision_n+n_killed
        g.write("True Positives: "+str(true_pos)+'/'+str(total/2)+'\n')
        g.write("True Negatives: "+str(true_neg)+'/'+str(total/2)+'\n')
        g.write("Killed: "+str(n_killed)+'/'+str(total/2)+'\n')
        g.write("Can't Decide Positives: "+str(no_decision_p)+'\n')
        g.write("Non Covered Positives: ")
        for elem in non_covered_p:
            g.write("%s," %elem)
        g.write('\n')
        g.write("Can't Decide Negatives: "+str(no_decision_n)+'\n')
        g.write("Non Covered Negatives: ")
        for elem in non_covered_n:
            g.write("%s," %elem)
        g.write('\n')
        g.write("False Positive")
        for elem in fp:
            g.write("%s," %elem)
        g.write('\n')
        g.write("False Negative")
        for elem in fn:
            g.write("%s," %elem)
        g.write('\n')
        g.write("Total: "+str(total)+'\n')
        g.write("Please remove: ")
        for elem in to_remove_ids:
            g.write("%s," %elem)
        precision=float((0.0001+true_pos+true_neg)/(true_pos+true_neg+false_pos+false_neg+0.0001))
        recall=float((0.00001+true_pos+true_neg)/(true_pos+true_neg+false_pos+false_neg+no_decision_n+no_decision_p+0.0001))
        g.write("Precision :"+str(precision)+'\n')
        g.write("Recall :"+str(recall)+'\n')
        g.write("F_score :"+str(float(2/((0.001+float(1/precision))+(float(1/recall)))))+'\n')


