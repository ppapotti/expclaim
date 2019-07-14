# LPMLN1.1
## System Overview
LPMLN2ASP, compiles LPMLN into the input language of Clingo utilizing weak constraints. Any Clingo rule R can be turned into a valid LPMLN rule by prepending that rule with a weight W.
Besides the ASP solving module which is handled by Clingo. LPMLN1.1 is a pure Python implementation.


The grammar parser of LPMLN1.1 relies on PLY (Python Lex-Yacc) library. Each LPMLN program will finally be converted into ASP syntax which can be solved by Clingo 5. LPMLN1.1 also relies on sympy Python library for symbolic mathematics. 

LPMLN1.1 uses Clingo 5 and its Python interface to solve the ASP program internaly. As the result, user needs to install addtional Clingo Python support. Please consult: https://potassco.org/clingo/ for how to install Clingo Python support.


LPMLN1.1 is built and tested on Ubuntu 18.04.1 LTS with software version of 
- Python 3.6.5, 
- PLY 3.11, 
- sympy 1.1.1, 
- Clingo 5.3, 
- Clingo Python interface 5.3

Unlike earliest LPMLN version, LPMLN1.1 only contains LPMLN2ASP module.

In LPMLN1.1, the only program entrance is "main.py". User can use all fucntions of LPMLN1.1 by calling "python main.py" and followed by set of options.


## System Usage
### Inference Module
LPMLN1.1 inherits all functionality in LPMLN2ASP module of earliest LPMLN system. It is further extended by sampling-based inference, and LPMLN weight learning we recently developed.

Let's consider the following LPMLN program:

```
% Same rules as above
bird(X) :- residentbird(X).
bird(X) :- migratorybird(X).
:- residentbird(X), migratorybird(X).

% A fact with a weight of 2. It represents our degree of confidence in this rule.
2 residentbird(jo).

% A fact with a weight of 1.
1 migratorybird(jo).
```
We have certain degree of confidence saying that 'jo' is a bird, and jo cannot be both resident bird and migratory bird; however; we are not sure that what kind of bird 'jo' belongs to. But we believe 'jo' is resident bird better than 'jo' is migratorybird. We will use this example to demonstrate our inference module.


- MAP Inference <br />
The user can do the MAP inference by following command: `python main.py -i example/inference/example_1`
And our program will generate the following output:
```
Second parser. Done!
Third parser. Done!
clingo /lpmln2asp_release/asp.pl 
clingo version 5.3.0
Reading from lpmln2asp_release/asp.pl
Solving...
Answer: 1
unsat(6,"1") unsat(5,"2")
Optimization: 3000
Answer: 2
unsat(6,"1") residentbird(jo) bird(jo)
Optimization: 1000
OPTIMUM FOUND

Models       : 2
  Optimum    : yes
Optimization : 1000
Calls        : 1
Time         : 0.001s (Solving: 0.00s 1st Model: 0.00s Unsat: 0.00s)
CPU Time     : 0.001s
```

- Exact Inference  <br />
The user can query the exact probability of atom predicates, such as the probability of 'jo' is a bird, 'jo' is a resident bird, and 'jo' is a migratory bird. By using this command line: `python main.py -i example/inference/example_1 -q bird, residentbird,migratorybird`. '-q', which is short for 'query', needs to be followed by at least one query predicate. 
Here is the output our system generates:
```
Second parser. Done!
Third parser. Done!
opt-mode=enum: No bound given, optimize statement ignored.


bird(jo) 0.9099694268296196
migratorybird(jo) 0.24472847105479767
residentbird(jo) 0.6652409557748219
```

- Approximate Inference(Sampling Based Inference) <br />
In most of the cases, the answer set of a program is too large to enumerate all. As the result, we introduced a sampling algorithm by combining MCMC sampler + XOR constraint uniform sampler. Due to the randomness of the algorithm, the inferencing result may vary; however; it still keeps the property of the weighted atoms. 
The user can run sampling-based inference by simply adding `-approximate` after the exact inferencing command, like this: `python main.py -i example/inference/example_1 -q bird,residentbird,migratorybird -approximate`

The program will start to gathering samples, by default, the program will gather 500 samples. Here is the shortcut for output:
```
First parser. Done!
Second parser. Done!
Third parser. Done!
Getting sample  0
Getting sample  10
Getting sample  20
Getting sample  30
...
...
...
Getting sample  460
Getting sample  470
Getting sample  480
Getting sample  490
residentbird(jo) :  0.596
298
500
bird(jo) :  0.91
455
500
migratorybird(jo) :  0.314
157
500
```
Again, due to the randomness of the sampling algorithm, the result is different to the exact inference result.

If you want to change the number of samples, please use '\[-samp SAMP\]' option. For example, `python main.py -i example/inference/example_1 -q bird,residentbird,migratorybird -approximate -samp 10`, will generate 10 samples and infer the probability of queries based on these 10 samples.


### Learning Module

- General LPMLN Weight Learning <br />
LPMLN weight learning is the newly implemented module in our system. It is able to learn the weight of rule by given set of facts which is represented in form of constraint. Consider this program:
```
#domain num(X).
num(1..3).
{p(X)}.
{q(X)}.
{z(X)}.
@getWeight p(X).
@getWeight q(X).
@getWeight z(X).
```

and observation(Supervised-Dataset)
```
:- not p(1).
:- not p(2).
:- not p(3).

:- q(1).
:- q(2).
:- q(3).

:- not z(1).
:- not z(2).
:- z(3).
```

LPMLN1.1 uses '@getWeight' as a placeholder to indicate which rules need to be learned.
For the given domain, we observed that all predicates 'p' are true, all predicates 'q' are false, two 'z' predicates are true, and one is false. By using our intuition, we can roughly say that 'p' should get highest weight, 'q' should get lowest weight, and 'z' should get the weight somewhere in the middle.
For running learning module, the user is supposed to give both input program file and evidence(observation) file.
User can use following command line to access the learning module:`python main.py -l example/learn/ach.lpmln -e test_learn/ach.evid`

Here is the learned program. The learned LPMLN program will be saved under the same directory of input LPMLN file, which is ended by extension ".weight".
```
#domain num(X).
num(1..3).
{p(X)}.
{q(X)}.
{z(X)}.
1.88184 p(X).
-1.2821600000000002 q(X).
0.6544399999999996 z(X).
```
By default, LPMLN1.1 learning process will stop until 50 learning iterations reach or the gradient of each rule who needs to be learned converges into a certain range(0.001). Each learning iteration will by default generate 50 samples. The user can use command option \[ll LL] to change learning iterations, likewise, the user can also use \[-samp SAMP] to change the number of the sample generated.
Due to the randomness of the sampling algorithm, the learned weight at every time will be slightly different.


- Learning k-coherent program  <br />
According to (Lee and Wang 2018), A LPMLN program is k-coherent, if, for any truth assignment to atoms that occur in Π soft, there are exactly k probabilistic stable models of Π that satisfies the truth assignment.


Due to the special property of the k-coherent program, depending on the observation is partial or full, LPMLN1.1 has developed an algorithm that can partially or completely bypass the sampling algorithm.
Following command line is used to learn from k-coherent program with incomplete interpretation:`python main.py -ls example/learn/ach.lpmln -e example/learn/ach.evid`
And this is used to learn from k-coherent program with complete interpretation:`python main.py -lsc example/learn/ach.lpmln -e example/learn/ach.evid`

In some cases, the learning algorithm for the k-coherent program is much more efficient than general learning algorithm.

There's an additional command option for XOR constraint uniform sampler, '-xormode XORMODE'(Default: 0). When 'xormode=0', the sampler will return less uniform sample but it will generate sample more efficient. The sampler will return most accurate sample when the 'xormode=1'. 








Please contact: Jiaxuan Pang(jpang12@asu.edu) regarding on any questions.
