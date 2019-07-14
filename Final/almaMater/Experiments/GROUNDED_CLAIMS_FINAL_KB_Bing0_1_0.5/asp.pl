 unsat(1,"-0.453137238654386", A, B, C, D):- predecessor( C, A), successor( D, C), almaMater( D, B),not  almaMater( A, B).
 almaMater( A, B):- predecessor( C, A), successor( D, C), almaMater( D, B),not  unsat(1,"-0.453137238654386", A, B, C, D).
:~ unsat(1,"-0.453137238654386", A, B, C, D).[-453@0,1, A, B, C, D]
 unsat(2,"-0.4951335746894171", A, B, C, D):- successor( C, A), successor( C, D), almaMater( D, B),not  almaMater( A, B).
 almaMater( A, B):- successor( C, A), successor( C, D), almaMater( D, B),not  unsat(2,"-0.4951335746894171", A, B, C, D).
:~ unsat(2,"-0.4951335746894171", A, B, C, D).[-495@0,2, A, B, C, D]
 unsat(3,"-2.9727973022715006", A, B, C, D):- successor( C, A), birthPlace( C, D), state( B, D),not  almaMater( A, B).
 almaMater( A, B):- successor( C, A), birthPlace( C, D), state( B, D),not  unsat(3,"-2.9727973022715006", A, B, C, D).
:~ unsat(3,"-2.9727973022715006", A, B, C, D).[-2972@0,3, A, B, C, D]
 unsat(4,"-2.3186768630349035", A, B, C):- almaMater( C, B), predecessor( A, C),not  almaMater( A, B).
 almaMater( A, B):- almaMater( C, B), predecessor( A, C),not  unsat(4,"-2.3186768630349035", A, B, C).
:~ unsat(4,"-2.3186768630349035", A, B, C).[-2318@0,4, A, B, C]
 unsat(5,"-3.6511983871462523", A, B, C, D):- almaMater( C, B), activeYearsEndYear( C, D), deathYear( A, D),not  almaMater( A, B).
 almaMater( A, B):- almaMater( C, B), activeYearsEndYear( C, D), deathYear( A, D),not  unsat(5,"-3.6511983871462523", A, B, C, D).
:~ unsat(5,"-3.6511983871462523", A, B, C, D).[-3651@0,5, A, B, C, D]
 unsat(6,"-2.279063897952696", A, B, C, D):- predecessor( C, A), birthPlace( C, D), country( B, D),not  almaMater( A, B).
 almaMater( A, B):- predecessor( C, A), birthPlace( C, D), country( B, D),not  unsat(6,"-2.279063897952696", A, B, C, D).
:~ unsat(6,"-2.279063897952696", A, B, C, D).[-2279@0,6, A, B, C, D]
 unsat(7,"-3.7924637703705173", A, B, C, D):- almaMater( C, B), deathYear( C, D), activeYearsStartYear( A, D),not  almaMater( A, B).
 almaMater( A, B):- almaMater( C, B), deathYear( C, D), activeYearsStartYear( A, D),not  unsat(7,"-3.7924637703705173", A, B, C, D).
:~ unsat(7,"-3.7924637703705173", A, B, C, D).[-3792@0,7, A, B, C, D]
 unsat(8,"-2.9727973022715006", A, B, C, D):- state( B, C), birthPlace( D, C), successor( D, A),not  almaMater( A, B).
 almaMater( A, B):- state( B, C), birthPlace( D, C), successor( D, A),not  unsat(8,"-2.9727973022715006", A, B, C, D).
:~ unsat(8,"-2.9727973022715006", A, B, C, D).[-2972@0,8, A, B, C, D]
 unsat(9,"-3.0631549498714334", A, B, C, D):- successor( A, C), birthPlace( C, D), state( B, D),not  almaMater( A, B).
 almaMater( A, B):- successor( A, C), birthPlace( C, D), state( B, D),not  unsat(9,"-3.0631549498714334", A, B, C, D).
:~ unsat(9,"-3.0631549498714334", A, B, C, D).[-3063@0,9, A, B, C, D]
 unsat(10,"-1.5142186458531668", A, B, C):- city( B, C), birthPlace( A, C),not  almaMater( A, B).
 almaMater( A, B):- city( B, C), birthPlace( A, C),not  unsat(10,"-1.5142186458531668", A, B, C).
:~ unsat(10,"-1.5142186458531668", A, B, C).[-1514@0,10, A, B, C]
 unsat(11,"-3.2025104707819434", A, B, C, D):- state( B, C), capital( C, D), birthPlace( A, D),not  almaMater( A, B).
 almaMater( A, B):- state( B, C), capital( C, D), birthPlace( A, D),not  unsat(11,"-3.2025104707819434", A, B, C, D).
:~ unsat(11,"-3.2025104707819434", A, B, C, D).[-3202@0,11, A, B, C, D]
 unsat(12,"-0.46403746226723147", A, B, C, D):- office( A, C), office( D, C), almaMater( D, B),not  almaMater( A, B).
 almaMater( A, B):- office( A, C), office( D, C), almaMater( D, B),not  unsat(12,"-0.46403746226723147", A, B, C, D).
:~ unsat(12,"-0.46403746226723147", A, B, C, D).[-464@0,12, A, B, C, D]
 unsat(13,"-1.933645666235334", A, B, C, D):- birthPlace( A, C), leaderName( C, D), almaMater( D, B),not  almaMater( A, B).
 almaMater( A, B):- birthPlace( A, C), leaderName( C, D), almaMater( D, B),not  unsat(13,"-1.933645666235334", A, B, C, D).
:~ unsat(13,"-1.933645666235334", A, B, C, D).[-1933@0,13, A, B, C, D]
 unsat(14,"-1.6821161379320848", A, B, C):- birthPlace( A, C), state( B, C),not  almaMater( A, B).
 almaMater( A, B):- birthPlace( A, C), state( B, C),not  unsat(14,"-1.6821161379320848", A, B, C).
:~ unsat(14,"-1.6821161379320848", A, B, C).[-1682@0,14, A, B, C]
 unsat(15,"-3.438899248846158", A, B, C, D):- predecessor( C, A), birthPlace( C, D), city( B, D),not  almaMater( A, B).
 almaMater( A, B):- predecessor( C, A), birthPlace( C, D), city( B, D),not  unsat(15,"-3.438899248846158", A, B, C, D).
:~ unsat(15,"-3.438899248846158", A, B, C, D).[-3438@0,15, A, B, C, D]
 unsat(16,"-3.0631549498714334", A, B, C, D):- almaMater( C, B), office( C, D), orderInOffice( A, D),not  almaMater( A, B).
 almaMater( A, B):- almaMater( C, B), office( C, D), orderInOffice( A, D),not  unsat(16,"-3.0631549498714334", A, B, C, D).
:~ unsat(16,"-3.0631549498714334", A, B, C, D).[-3063@0,16, A, B, C, D]
 unsat(17,"-2.411525239074649", A, B, C):- almaMater( C, B), successor( C, A),not  almaMater( A, B).
 almaMater( A, B):- almaMater( C, B), successor( C, A),not  unsat(17,"-2.411525239074649", A, B, C).
:~ unsat(17,"-2.411525239074649", A, B, C).[-2411@0,17, A, B, C]
 unsat(18,"-3.630610545989961", A, B, C, D):- predecessor( A, C), deathPlace( C, D), country( B, D),not  almaMater( A, B).
 almaMater( A, B):- predecessor( A, C), deathPlace( C, D), country( B, D),not  unsat(18,"-3.630610545989961", A, B, C, D).
:~ unsat(18,"-3.630610545989961", A, B, C, D).[-3630@0,18, A, B, C, D]
 unsat(19,"-2.724179583032086", A, B, C, D):- almaMater( C, B), orderInOffice( C, D), office( A, D),not  almaMater( A, B).
 almaMater( A, B):- almaMater( C, B), orderInOffice( C, D), office( A, D),not  unsat(19,"-2.724179583032086", A, B, C, D).
:~ unsat(19,"-2.724179583032086", A, B, C, D).[-2724@0,19, A, B, C, D]
 unsat(20,"-2.3015855926609623", A, B, C, D):- predecessor( A, C), birthPlace( C, D), country( B, D),not  almaMater( A, B).
 almaMater( A, B):- predecessor( A, C), birthPlace( C, D), country( B, D),not  unsat(20,"-2.3015855926609623", A, B, C, D).
:~ unsat(20,"-2.3015855926609623", A, B, C, D).[-2301@0,20, A, B, C, D]
 unsat(21,"-3.286084574561651", A, B, C, D):- predecessor( A, C), birthPlace( C, D), city( B, D),not  almaMater( A, B).
 almaMater( A, B):- predecessor( A, C), birthPlace( C, D), city( B, D),not  unsat(21,"-3.286084574561651", A, B, C, D).
:~ unsat(21,"-3.286084574561651", A, B, C, D).[-3286@0,21, A, B, C, D]
 unsat(22,"-2.462284471751714", A, B, C, D):- birthPlace( A, C), city( D, C), owner( D, B),not  almaMater( A, B).
 almaMater( A, B):- birthPlace( A, C), city( D, C), owner( D, B),not  unsat(22,"-2.462284471751714", A, B, C, D).
:~ unsat(22,"-2.462284471751714", A, B, C, D).[-2462@0,22, A, B, C, D]
 unsat(23,"-2.829878909467347", A, B, C, D):- successor( C, A), nationality( C, D), country( B, D),not  almaMater( A, B).
 almaMater( A, B):- successor( C, A), nationality( C, D), country( B, D),not  unsat(23,"-2.829878909467347", A, B, C, D).
:~ unsat(23,"-2.829878909467347", A, B, C, D).[-2829@0,23, A, B, C, D]
 unsat(24,"-1.8545714816399292", A, B, C, D):- almaMater( C, B), otherParty( C, D), party( A, D),not  almaMater( A, B).
 almaMater( A, B):- almaMater( C, B), otherParty( C, D), party( A, D),not  unsat(24,"-1.8545714816399292", A, B, C, D).
:~ unsat(24,"-1.8545714816399292", A, B, C, D).[-1854@0,24, A, B, C, D]
 unsat(25,"-4.10076513002499", A, B, C):- birthPlace( A, C), province( B, C),not  almaMater( A, B).
 almaMater( A, B):- birthPlace( A, C), province( B, C),not  unsat(25,"-4.10076513002499", A, B, C).
:~ unsat(25,"-4.10076513002499", A, B, C).[-4100@0,25, A, B, C]
 unsat(26,"-1.3920710138973473", A, B, C, D):- almaMater( C, B), region( C, D), birthPlace( A, D),not  almaMater( A, B).
 almaMater( A, B):- almaMater( C, B), region( C, D), birthPlace( A, D),not  unsat(26,"-1.3920710138973473", A, B, C, D).
:~ unsat(26,"-1.3920710138973473", A, B, C, D).[-1392@0,26, A, B, C, D]
 unsat(27,"-2.4238491804870774", A, B, C, D):- profession( A, C), occupation( D, C), almaMater( D, B),not  almaMater( A, B).
 almaMater( A, B):- profession( A, C), occupation( D, C), almaMater( D, B),not  unsat(27,"-2.4238491804870774", A, B, C, D).
:~ unsat(27,"-2.4238491804870774", A, B, C, D).[-2423@0,27, A, B, C, D]
:- almaMater( A, B), negalmaMater( A, B).
 unsat(29,"-0.6835162874989849", A, B, C, D):- headquarter( C, B), location( C, D), deathPlace( A, D),not  negalmaMater( A, B).
 negalmaMater( A, B):- headquarter( C, B), location( C, D), deathPlace( A, D),not  unsat(29,"-0.6835162874989849", A, B, C, D).
:~ unsat(29,"-0.6835162874989849", A, B, C, D).[-683@0,29, A, B, C, D]
 unsat(30,"-1.2572428085660199", A, B, C, D):- residence( A, C), hometown( D, C), hometown( D, B),not  negalmaMater( A, B).
 negalmaMater( A, B):- residence( A, C), hometown( D, C), hometown( D, B),not  unsat(30,"-1.2572428085660199", A, B, C, D).
:~ unsat(30,"-1.2572428085660199", A, B, C, D).[-1257@0,30, A, B, C, D]
 unsat(31,"0.3189150921417121", A, B, C, D):- doctoralAdvisor( C, A), birthPlace( C, D), city( B, D),not  negalmaMater( A, B).
 negalmaMater( A, B):- doctoralAdvisor( C, A), birthPlace( C, D), city( B, D),not  unsat(31,"0.3189150921417121", A, B, C, D).
:~ unsat(31,"0.3189150921417121", A, B, C, D).[318@0,31, A, B, C, D]
 unsat(32,"0.6114803476912647", A, B, C, D):- doctoralAdvisor( C, A), birthPlace( C, D), country( B, D),not  negalmaMater( A, B).
 negalmaMater( A, B):- doctoralAdvisor( C, A), birthPlace( C, D), country( B, D),not  unsat(32,"0.6114803476912647", A, B, C, D).
:~ unsat(32,"0.6114803476912647", A, B, C, D).[611@0,32, A, B, C, D]
 unsat(33,"-2.7011476715394362", A, B, C, D):- residence( A, C), regionServed( D, C), affiliation( B, D),not  negalmaMater( A, B).
 negalmaMater( A, B):- residence( A, C), regionServed( D, C), affiliation( B, D),not  unsat(33,"-2.7011476715394362", A, B, C, D).
:~ unsat(33,"-2.7011476715394362", A, B, C, D).[-2701@0,33, A, B, C, D]
 unsat(34,"-0.4717991796759737", A, B, C, D):- award( A, C), award( D, C), employer( D, B),not  negalmaMater( A, B).
 negalmaMater( A, B):- award( A, C), award( D, C), employer( D, B),not  unsat(34,"-0.4717991796759737", A, B, C, D).
:~ unsat(34,"-0.4717991796759737", A, B, C, D).[-471@0,34, A, B, C, D]
 unsat(35,"-3.550000068689448", A, B, C, D):- residence( A, C), deathPlace( D, C), occupation( D, B),not  negalmaMater( A, B).
 negalmaMater( A, B):- residence( A, C), deathPlace( D, C), occupation( D, B),not  unsat(35,"-3.550000068689448", A, B, C, D).
:~ unsat(35,"-3.550000068689448", A, B, C, D).[-3550@0,35, A, B, C, D]
 unsat(36,"-2.079935490813119", A, B, C, D):- doctoralAdvisor( C, A), doctoralAdvisor( D, C), almaMater( D, B),not  negalmaMater( A, B).
 negalmaMater( A, B):- doctoralAdvisor( C, A), doctoralAdvisor( D, C), almaMater( D, B),not  unsat(36,"-2.079935490813119", A, B, C, D).
:~ unsat(36,"-2.079935490813119", A, B, C, D).[-2079@0,36, A, B, C, D]
 unsat(37,"0.6779676166530254", A, B, C, D):- field( A, C), genre( D, C), education( D, B),not  negalmaMater( A, B).
 negalmaMater( A, B):- field( A, C), genre( D, C), education( D, B),not  unsat(37,"0.6779676166530254", A, B, C, D).
:~ unsat(37,"0.6779676166530254", A, B, C, D).[677@0,37, A, B, C, D]
 unsat(38,"-0.19271600371931774", A, B, C, D):- doctoralAdvisor( A, C), deathPlace( C, D), country( B, D),not  negalmaMater( A, B).
 negalmaMater( A, B):- doctoralAdvisor( A, C), deathPlace( C, D), country( B, D),not  unsat(38,"-0.19271600371931774", A, B, C, D).
:~ unsat(38,"-0.19271600371931774", A, B, C, D).[-192@0,38, A, B, C, D]
 unsat(39,"-0.6393869487190024", A, B, C, D):- country( B, C), birthPlace( D, C), doctoralAdvisor( A, D),not  negalmaMater( A, B).
 negalmaMater( A, B):- country( B, C), birthPlace( D, C), doctoralAdvisor( A, D),not  unsat(39,"-0.6393869487190024", A, B, C, D).
:~ unsat(39,"-0.6393869487190024", A, B, C, D).[-639@0,39, A, B, C, D]
 unsat(40,"-0.8440190311014107", A, B, C, D):- president( B, C), residence( C, D), nationality( A, D),not  negalmaMater( A, B).
 negalmaMater( A, B):- president( B, C), residence( C, D), nationality( A, D),not  unsat(40,"-0.8440190311014107", A, B, C, D).
:~ unsat(40,"-0.8440190311014107", A, B, C, D).[-844@0,40, A, B, C, D]
 unsat(41,"2.404786900935917", A, B, C):- negalmaMater( A, C), B!= C, type( B,"Thing"),not  negalmaMater( A, B).
 negalmaMater( A, B):- negalmaMater( A, C), B!= C, type( B,"Thing"),not  unsat(41,"2.404786900935917", A, B, C).
:~ unsat(41,"2.404786900935917", A, B, C).[2404@0,41, A, B, C]
 unsat(42,"0.7903384966546982", A, B, C, D):- doctoralStudent( A, C), birthPlace( C, D), country( B, D),not  negalmaMater( A, B).
 negalmaMater( A, B):- doctoralStudent( A, C), birthPlace( C, D), country( B, D),not  unsat(42,"0.7903384966546982", A, B, C, D).
:~ unsat(42,"0.7903384966546982", A, B, C, D).[790@0,42, A, B, C, D]
 unsat(43,"0.6597759921955553", A, B):- knownFor( A, B),not  negalmaMater( A, B).
 negalmaMater( A, B):- knownFor( A, B),not  unsat(43,"0.6597759921955553", A, B).
:~ unsat(43,"0.6597759921955553", A, B).[659@0,43, A, B]
 unsat(44,"-0.4682200967189177", A, B):- employer( A, B),not  negalmaMater( A, B).
 negalmaMater( A, B):- employer( A, B),not  unsat(44,"-0.4682200967189177", A, B).
:~ unsat(44,"-0.4682200967189177", A, B).[-468@0,44, A, B]
 unsat(45,"0.36077762752233233", A, B):- occupation( A, B),not  negalmaMater( A, B).
 negalmaMater( A, B):- occupation( A, B),not  unsat(45,"0.36077762752233233", A, B).
:~ unsat(45,"0.36077762752233233", A, B).[360@0,45, A, B]
 unsat(46,"-0.1201802729321677", A, B):- award( A, B),not  negalmaMater( A, B).
 negalmaMater( A, B):- award( A, B),not  unsat(46,"-0.1201802729321677", A, B).
:~ unsat(46,"-0.1201802729321677", A, B).[-120@0,46, A, B]
 unsat(47,"-1.5477443434287637", A, B, C):- almaMater( C, B), education( C, B), employer( A, B),not  negalmaMater( A, B).
 negalmaMater( A, B):- almaMater( C, B), education( C, B), employer( A, B),not  unsat(47,"-1.5477443434287637", A, B, C).
:~ unsat(47,"-1.5477443434287637", A, B, C).[-1547@0,47, A, B, C]
 unsat(48,"-1.3851882537147118", A, B, C):- almaMater( C, B), influencedBy( C, A),not  negalmaMater( A, B).
 negalmaMater( A, B):- almaMater( C, B), influencedBy( C, A),not  unsat(48,"-1.3851882537147118", A, B, C).
:~ unsat(48,"-1.3851882537147118", A, B, C).[-1385@0,48, A, B, C]
 unsat(49,"0.6036737198230541", A, B, C, D):- doctoralStudent( C, A), deathPlace( C, D), country( B, D),not  negalmaMater( A, B).
 negalmaMater( A, B):- doctoralStudent( C, A), deathPlace( C, D), country( B, D),not  unsat(49,"0.6036737198230541", A, B, C, D).
:~ unsat(49,"0.6036737198230541", A, B, C, D).[603@0,49, A, B, C, D]
 unsat(50,"-0.47953325033566707", A, B, C, D):- nationality( A, C), birthPlace( D, C), deathPlace( D, B),not  negalmaMater( A, B).
 negalmaMater( A, B):- nationality( A, C), birthPlace( D, C), deathPlace( D, B),not  unsat(50,"-0.47953325033566707", A, B, C, D).
:~ unsat(50,"-0.47953325033566707", A, B, C, D).[-479@0,50, A, B, C, D]
 activeYearsStartYear("Trajal_Harrell","2004").
 deathYear("Maxime_Faget","2004").
 almaMater("Maxime_Faget","City_College_of_San_Francisco").
 type("Trajal_Harrell","Person").
 type("Trajal_Harrell","Agent").
 type("Trajal_Harrell","Thing").
 type("City_College_of_San_Francisco","Agent").
 type("City_College_of_San_Francisco","EducationalInstitution").
 type("City_College_of_San_Francisco","Organisation").
 type("City_College_of_San_Francisco","University").
 type("City_College_of_San_Francisco","Thing").
