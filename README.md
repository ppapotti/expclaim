# ExpClaim


ExpClaim tackles the problem of fact checking for facts (claims) passed as triples.
It uses external resources and logical rules to create interpretable explanations of its assessement of an input claim.

This repository contains the code used for the experiments in the paper [Explainable Fact Checking with Probabilistic Answer Set Programming](https://arxiv.org/abs/1906.09198)

### Installation

ExpClaim requires python 3 to run.
[Conda](https://docs.conda.io/projects/conda/en/latest/user-guide/install/) should also be installed.

```sh
$ git clone https://github.com/ppapotti/ExpClaim.git
$ cd expclaim
$ conda create -y -n expclaim python=3.6
$ conda activate expclaim

$(expclaim) bash install.sh
```




### Running the test
```sh
$ python scripts/test.py --relation spouse  --num_claims 2 --bing_evidence 0 --inference_mode 'ASP'
```
* --relation: specifies which predicate to use
* --rule_threshold: specifies the threshold for the weights of the rules
* --MF: multiplicative factor for the weights
* --claim_gen_mode: There are two ways for generating claims: 1)'random' which generates claims randomly 2)'grounded' which ensures that each claim has at least one satisfied rule.
* --num_claims: The number of claims to use
* --bing_evidence: If set to 1,then use evidence from bing web module. If set to 0, then just use knowledge base evidence.
* --bing_evid_thresh: specifies the threshold for the weights of the bing evidence
* --inference_mode: specifies the onference algorithm used.('ASP' or 'MAP')

Inside each experiment directory, you will have a csv file containing the result for each claim and another csv file showing the F_score.



### Using Web Evidence

To use web evidence, you will need to subscribe to the [Bing Search API](https://azure.microsoft.com/en-us/services/cognitive-services/bing-web-search-api/).
Once you do, you will get a key that should be inserted in "config.properties".


### Contacts

For any inquiries, click [here](mailto:saeedm@eurecom.fr,ahmadi@eurecom.fr,paolo.papotti@eurecom.fr)

### License
[MIT](https://choosealicense.com/licenses/mit/)





