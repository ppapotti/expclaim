import subprocess
import time,csv




def reasoner(relation,dir,inference_mode='MAP',bing_evidence=True):


    TP=TN=FP=FN=CDP=CDN=KilledP=KilledN=UNSATP=UNSATN=0
    UDP=[]
    UDN=[]
    KP=[]
    KN=[ ]
    fp_list=[]
    fn_list=[]
    unsatp_list=[]
    unsatn_list=[]




    if(inference_mode=='MAP'):
        s='MAP_'
        if(bing_evidence==True):
            s+='BING_EVID'
        else:
            s='NO_BING_EVID'

        result_csv_file=s+'_results.csv'
        temp_file='MAP.txt'
        stats_file= s+'_stats.txt'



    if(inference_mode=='ASP'):
        s='ASP_'
        if(bing_evidence==True):
            s+='BING_EVID'
        else:
            s='NO_BING_EVID'

        result_csv_file=s+'_results.csv'
        temp_file='ASP.txt'
        stats_file= s+'_stats.txt'


    claims_file=dir+'claims.txt'


    with open(claims_file,'r') as f:
        lines=f.readlines()

    s=time.time()



    with open(dir+result_csv_file,'w') as csvFile:
        writer=csv.writer(csvFile)
        writer.writerow(['Id','Subject','Object','Label','Predicted Label','Execution Time (mins)'])
    csvFile.close()


    for line in lines[:]:

        subprocess.run('killall -9 clingo',shell=True)
    #    subprocess.run('killall -9 python',shell=True)


        claim=[]
        print(line)
        id,subject,object,label=line.strip().split(',')
        relation='spouse'
        pos_claim=relation+'('+'"'+subject+'"'+','+'"'+object+'"'+')'
        neg_claim='neg'+pos_claim
        claim.extend([id,subject,object,label])
        start=time.time()
        if(inference_mode=='ASP'):
            if(bing_evidence==False):
                cmd='clingo '+dir+'ASP_NO_BING_EVID_Evidence/'+id+'er_unique.txt >ASP.txt'
            else:
                cmd='clingo '+dir+'ASP_WITH_BING_EVID_Evidence/'+id+'er_unique.txt >ASP.txt'

        if(inference_mode=='MAP'):
            if(bing_evidence==False):
                cmd='python main.py -i '+dir+'MAP_NO_BING_EVID_Evidence/'+id+'er_unique.txt >MAP.txt'
            else:
                cmd='python main.py -i '+dir+'MAP_WITH_BING_EVID_Evidence/'+id+'er_unique.txt >MAP.txt'

        print(cmd)
        try:
            subprocess.run(cmd, timeout=300,shell=True)

            with open(temp_file,'r') as f:
                temp=f.readlines()

            p=n=0
            ind=-1
            if('UNSATISFIABLE\n' in temp):
                if(label=='1'):
                    UNSATP+=1
                    unsatp_list.append(id)
                if(label=='0'):
                    UNSATN+=1
                    unsatn_list.append(id)

                claim.append('UNSATISFIABLE')


            else:
                for i  in range(len(temp[::-1])):
                   #print(pos_claim,neg_claim,temp[::-1][i])
                   if(pos_claim in temp[::-1][i] or neg_claim in temp[::-1][i]):
                       #print(temp[::-1][i])
                       ind=i
                       break
                opt=temp[::-1][ind]
                #print("################")
                #print(opt,neg_claim)
                #print(neg_claim in opt)
                #print("###############",temp)
                if(neg_claim in opt):
                    claim.append('-1')
                    if(label=='0'):
                        TN+=1
                    if(label=='1'):
                        FN+=1
                        fn_list.append(id)


                elif(pos_claim in opt):
                    claim.append('1')
                    if(label=='0'):
                        FP+=1
                        fp_list.append(id)
                    if(label=='1'):
                        TP+=1

                else:
                    claim.append('Can\'t Decide')
                    if(label=='0'):
                        CDN+=1
                        UDN.append(id)
                    if(label=='1'):
                        CDP+=1
                        UDP.append(id)

        except subprocess.TimeoutExpired:
            claim.append('Killed')
            if(label=='1'):
                 KilledP+=1
                 KP.append(id)
            else:
                 KilledN+=1
                 KN.append(id)
        claim.append(str(time.time()-start))
        with open(dir+result_csv_file,'a') as csvFile:
            writer=csv.writer(csvFile)
            writer.writerow(claim)
        csvFile.close()


    elapsed_time=time.time()-s



    g=open(dir+stats_file,'w')

    n_killed=KilledP+KilledN
    totalP=TP+FN+CDP+KilledP+UNSATP
    totalN=TN+FP+CDN+KilledN+UNSATN

    total=totalP+totalN

    g.write("True Positives: "+str(TP)+'/'+str(totalP)+'\n')
    g.write("True Negatives: "+str(TN)+'/'+str(totalN)+'\n')
    g.write("KilledP: "+str(KilledP)+'/'+str(totalP)+'\n')
    g.write("KilledN: "+str(KilledN)+'/'+str(totalN)+'\n')
    g.write("UNSATP: "+str(UNSATP)+'/'+str(totalP)+'\n')
    g.write("UNSATN: "+str(UNSATN)+'/'+str(totalN)+'\n')

    g.write("Can't Decide Positives: "+str(CDP)+'\n')
    g.write("Non Covered Positives: ")
    for elem in UDP:
        g.write(" %s," %elem)
    g.write('\n')
    g.write("Can't Decide Negatives: "+str(CDN)+'\n')
    g.write("Non Covered Negatives: ")

    for elem in UDN:
        g.write(" %s," %elem)
    g.write('\n')

    g.write("False Positive")
    for elem in fp_list:
        g.write("%s," %elem)
    g.write('\n')
    g.write("False Negative")
    for elem in fn_list:
        g.write("%s," %elem)
    g.write('\n')
    g.write("Total: "+str(total)+'\n')
    g.write("Please remove: ")

    precision=float((TP+TN+0.0000001)/(TP+TN+FP+FN+0.0000001))
    recall=float((TP+TN+0.00000001)/(TP+TN+FP+FN+CDN+CDP+UNSATP+UNSATN))
    g.write("Precision :"+str(precision)+'\n')
    g.write("Recall :"+str(recall)+'\n')
    g.write("F_score :"+str(float(2/((0.00000001+float(1/precision))+(float(1/recall)))))+'\n')
    g.write("Elapsed Time: %s seconds," %elapsed_time)



#    print(TP,TN,FP,FN,CDP,CDN,UNSATP,UNSATN)
 #   print(UDP)
  #  print(UDN)
   # print(KilledP,KilledN)
   # print(KP)
    #print(KN)
