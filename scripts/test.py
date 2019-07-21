from infer import *
import argparse


parser = argparse.ArgumentParser()
parser.add_argument("--relation", help="predicate used")
parser.add_argument("--rule_threshold", help="threshold for the rules used",type=float,default=0)
parser.add_argument("--MF", help="multiplicative factors for the rule thresholds",type=float,default=1)
parser.add_argument("--claim_gen_mode", help="groundedLat least on rule is satisfied for each claim, random: radom claims",default='random')
parser.add_argument("--num_claims", help="number of claims to use",type=int,default=100)
parser.add_argument("--bing_evidence", help="boolean for using bing evidence",type=int,default=1)
parser.add_argument("--bing_evid_thresh", help="threshold for bing evidence weights",type=float,default=0.5)
parser.add_argument("--inference_mode", help="ASP or MAP",default='MAP')




args = parser.parse_args()




infer(args.relation,args.rule_threshold,args.MF,args.claim_gen_mode,args.num_claims,args.bing_evidence,args.bing_evid_thresh,args.inference_mode)

