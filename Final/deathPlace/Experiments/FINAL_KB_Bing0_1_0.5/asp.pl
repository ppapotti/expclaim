 unsat(1,"-3.1619285009245495", A, B, C, D):- deathPlace( C, B), birthDate( C, D), birthDate( A, D),not  deathPlace( A, B).
 deathPlace( A, B):- deathPlace( C, B), birthDate( C, D), birthDate( A, D),not  unsat(1,"-3.1619285009245495", A, B, C, D).
:~ unsat(1,"-3.1619285009245495", A, B, C, D).[-3161@0,1, A, B, C, D]
 unsat(2,"-7.6412443388254605", A, B, C, D):- occupation( A, C), C!= D, headquarter( D, B),not  deathPlace( A, B).
 deathPlace( A, B):- occupation( A, C), C!= D, headquarter( D, B),not  unsat(2,"-7.6412443388254605", A, B, C, D).
:~ unsat(2,"-7.6412443388254605", A, B, C, D).[-7641@0,2, A, B, C, D]
 unsat(3,"-3.1798637855931737", A, B, C):- deathPlace( A, C), country( C, B),not  deathPlace( A, B).
 deathPlace( A, B):- deathPlace( A, C), country( C, B),not  unsat(3,"-3.1798637855931737", A, B, C).
:~ unsat(3,"-3.1798637855931737", A, B, C).[-3179@0,3, A, B, C]
 unsat(4,"-5.1765229437313165", A, B):- country( A, B),not  deathPlace( A, B).
 deathPlace( A, B):- country( A, B),not  unsat(4,"-5.1765229437313165", A, B).
:~ unsat(4,"-5.1765229437313165", A, B).[-5176@0,4, A, B]
 unsat(5,"-3.967356875572056", A, B):- placeOfBirth( A, B),not  deathPlace( A, B).
 deathPlace( A, B):- placeOfBirth( A, B),not  unsat(5,"-3.967356875572056", A, B).
:~ unsat(5,"-3.967356875572056", A, B).[-3967@0,5, A, B]
 unsat(6,"-5.929429156188417", A, B, C, D):- country( B, C), country( D, C), birthPlace( A, D),not  deathPlace( A, B).
 deathPlace( A, B):- country( B, C), country( D, C), birthPlace( A, D),not  unsat(6,"-5.929429156188417", A, B, C, D).
:~ unsat(6,"-5.929429156188417", A, B, C, D).[-5929@0,6, A, B, C, D]
 unsat(7,"-7.263729977806476", A, B, C, D):- deathPlace( C, B), nationality( C, D), birthPlace( A, D),not  deathPlace( A, B).
 deathPlace( A, B):- deathPlace( C, B), nationality( C, D), birthPlace( A, D),not  unsat(7,"-7.263729977806476", A, B, C, D).
:~ unsat(7,"-7.263729977806476", A, B, C, D).[-7263@0,7, A, B, C, D]
 unsat(8,"-6.742240840504145", A, B, C, D):- deathDate( A, C), C> D, foundingDate( B, D),not  deathPlace( A, B).
 deathPlace( A, B):- deathDate( A, C), C> D, foundingDate( B, D),not  unsat(8,"-6.742240840504145", A, B, C, D).
:~ unsat(8,"-6.742240840504145", A, B, C, D).[-6742@0,8, A, B, C, D]
 unsat(9,"-2.6299125337605305", A, B):- nationality( A, B),not  deathPlace( A, B).
 deathPlace( A, B):- nationality( A, B),not  unsat(9,"-2.6299125337605305", A, B).
:~ unsat(9,"-2.6299125337605305", A, B).[-2629@0,9, A, B]
 unsat(10,"-1.277633109760059", A, B):- placeOfDeath( A, B),not  deathPlace( A, B).
 deathPlace( A, B):- placeOfDeath( A, B),not  unsat(10,"-1.277633109760059", A, B).
:~ unsat(10,"-1.277633109760059", A, B).[-1277@0,10, A, B]
 unsat(11,"-6.532188721219889", A, B, C, D):- serviceStartYear( A, C), deathYear( D, C), deathPlace( D, B),not  deathPlace( A, B).
 deathPlace( A, B):- serviceStartYear( A, C), deathYear( D, C), deathPlace( D, B),not  unsat(11,"-6.532188721219889", A, B, C, D).
:~ unsat(11,"-6.532188721219889", A, B, C, D).[-6532@0,11, A, B, C, D]
 unsat(12,"-5.983496377458722", A, B, C, D):- residence( C, B), birthPlace( C, D), deathPlace( A, D),not  deathPlace( A, B).
 deathPlace( A, B):- residence( C, B), birthPlace( C, D), deathPlace( A, D),not  unsat(12,"-5.983496377458722", A, B, C, D).
:~ unsat(12,"-5.983496377458722", A, B, C, D).[-5983@0,12, A, B, C, D]
 unsat(13,"-7.5234012725534445", A, B, C, D):- birthDate( A, C), C< D, foundingYear( B, D),not  deathPlace( A, B).
 deathPlace( A, B):- birthDate( A, C), C< D, foundingYear( B, D),not  unsat(13,"-7.5234012725534445", A, B, C, D).
:~ unsat(13,"-7.5234012725534445", A, B, C, D).[-7523@0,13, A, B, C, D]
 unsat(14,"-6.8494863708580285", A, B, C, D):- birthDate( A, C), C> D, foundingDate( B, D),not  deathPlace( A, B).
 deathPlace( A, B):- birthDate( A, C), C> D, foundingDate( B, D),not  unsat(14,"-6.8494863708580285", A, B, C, D).
:~ unsat(14,"-6.8494863708580285", A, B, C, D).[-6849@0,14, A, B, C, D]
 unsat(15,"-3.8978809227223246", A, B, C, D):- deathPlace( C, B), restingPlace( C, D), restingPlace( A, D),not  deathPlace( A, B).
 deathPlace( A, B):- deathPlace( C, B), restingPlace( C, D), restingPlace( A, D),not  unsat(15,"-3.8978809227223246", A, B, C, D).
:~ unsat(15,"-3.8978809227223246", A, B, C, D).[-3897@0,15, A, B, C, D]
 unsat(16,"-5.243829181263949", A, B, C, D):- type( B, C), C!= D, birthPlace( A, D),not  deathPlace( A, B).
 deathPlace( A, B):- type( B, C), C!= D, birthPlace( A, D),not  unsat(16,"-5.243829181263949", A, B, C, D).
:~ unsat(16,"-5.243829181263949", A, B, C, D).[-5243@0,16, A, B, C, D]
 unsat(17,"-2.6100234264314497", A, B):- birthPlace( A, B),not  deathPlace( A, B).
 deathPlace( A, B):- birthPlace( A, B),not  unsat(17,"-2.6100234264314497", A, B).
:~ unsat(17,"-2.6100234264314497", A, B).[-2610@0,17, A, B]
 unsat(18,"-2.0051271911265314", A, B):- deathplace( A, B),not  deathPlace( A, B).
 deathPlace( A, B):- deathplace( A, B),not  unsat(18,"-2.0051271911265314", A, B).
:~ unsat(18,"-2.0051271911265314", A, B).[-2005@0,18, A, B]
 unsat(19,"-6.763820754592726", A, B, C, D):- deathPlace( C, B), field( C, D), field( A, D),not  deathPlace( A, B).
 deathPlace( A, B):- deathPlace( C, B), field( C, D), field( A, D),not  unsat(19,"-6.763820754592726", A, B, C, D).
:~ unsat(19,"-6.763820754592726", A, B, C, D).[-6763@0,19, A, B, C, D]
 unsat(20,"-1.4656181919347486", A, B):- restingPlace( A, B),not  deathPlace( A, B).
 deathPlace( A, B):- restingPlace( A, B),not  unsat(20,"-1.4656181919347486", A, B).
:~ unsat(20,"-1.4656181919347486", A, B).[-1465@0,20, A, B]
 unsat(21,"-2.4443591562315246", A, B):- residence( A, B),not  deathPlace( A, B).
 deathPlace( A, B):- residence( A, B),not  unsat(21,"-2.4443591562315246", A, B).
:~ unsat(21,"-2.4443591562315246", A, B).[-2444@0,21, A, B]
 unsat(22,"-2.509230654446458", A, B, C, D):- deathPlace( C, B), deathDate( C, D), deathDate( A, D),not  deathPlace( A, B).
 deathPlace( A, B):- deathPlace( C, B), deathDate( C, D), deathDate( A, D),not  unsat(22,"-2.509230654446458", A, B, C, D).
:~ unsat(22,"-2.509230654446458", A, B, C, D).[-2509@0,22, A, B, C, D]
:- deathPlace( A, B), negdeathPlace( A, B).
 unsat(24,"-3.912023005428141", A, B, C, D):- almaMater( C, B), militaryBranch( C, D), militaryBranch( A, D),not  negdeathPlace( A, B).
 negdeathPlace( A, B):- almaMater( C, B), militaryBranch( C, D), militaryBranch( A, D),not  unsat(24,"-3.912023005428141", A, B, C, D).
:~ unsat(24,"-3.912023005428141", A, B, C, D).[-3912@0,24, A, B, C, D]
 unsat(25,"-3.912023005428141", A, B, C, D):- birthPlace( A, C), restingPlace( D, C), education( D, B),not  negdeathPlace( A, B).
 negdeathPlace( A, B):- birthPlace( A, C), restingPlace( D, C), education( D, B),not  unsat(25,"-3.912023005428141", A, B, C, D).
:~ unsat(25,"-3.912023005428141", A, B, C, D).[-3912@0,25, A, B, C, D]
 unsat(26,"-3.912023005428141", A, B, C, D):- education( C, B), restingPlace( C, D), birthPlace( A, D),not  negdeathPlace( A, B).
 negdeathPlace( A, B):- education( C, B), restingPlace( C, D), birthPlace( A, D),not  unsat(26,"-3.912023005428141", A, B, C, D).
:~ unsat(26,"-3.912023005428141", A, B, C, D).[-3912@0,26, A, B, C, D]
 unsat(27,"-3.912023005428141", A, B, C, D):- militaryBranch( A, C), militaryBranch( D, C), almaMater( D, B),not  negdeathPlace( A, B).
 negdeathPlace( A, B):- militaryBranch( A, C), militaryBranch( D, C), almaMater( D, B),not  unsat(27,"-3.912023005428141", A, B, C, D).
:~ unsat(27,"-3.912023005428141", A, B, C, D).[-3912@0,27, A, B, C, D]
 unsat(28,"-4.317488113536318", A, B, C, D):- deathYear( A, C), activeYearsStartYear( D, C), almaMater( D, B),not  negdeathPlace( A, B).
 negdeathPlace( A, B):- deathYear( A, C), activeYearsStartYear( D, C), almaMater( D, B),not  unsat(28,"-4.317488113536318", A, B, C, D).
:~ unsat(28,"-4.317488113536318", A, B, C, D).[-4317@0,28, A, B, C, D]
 unsat(29,"1.7191887763932157", A, B, C):- almaMater( A, B), country( B, C), birthPlace( A, C),not  negdeathPlace( A, B).
 negdeathPlace( A, B):- almaMater( A, B), country( B, C), birthPlace( A, C),not  unsat(29,"1.7191887763932157", A, B, C).
:~ unsat(29,"1.7191887763932157", A, B, C).[1719@0,29, A, B, C]
 unsat(30,"-1.9703678899013504", A, B, C, D):- birthPlace( A, C), part( D, C), country( D, B),not  negdeathPlace( A, B).
 negdeathPlace( A, B):- birthPlace( A, C), part( D, C), country( D, B),not  unsat(30,"-1.9703678899013504", A, B, C, D).
:~ unsat(30,"-1.9703678899013504", A, B, C, D).[-1970@0,30, A, B, C, D]
 unsat(31,"-4.317488113536318", A, B, C, D):- employer( C, B), citizenship( C, D), deathPlace( A, D),not  negdeathPlace( A, B).
 negdeathPlace( A, B):- employer( C, B), citizenship( C, D), deathPlace( A, D),not  unsat(31,"-4.317488113536318", A, B, C, D).
:~ unsat(31,"-4.317488113536318", A, B, C, D).[-4317@0,31, A, B, C, D]
 unsat(32,"-3.912023005428141", A, B, C, D):- deathYear( A, C), activeYearsStartYear( D, C), education( D, B),not  negdeathPlace( A, B).
 negdeathPlace( A, B):- deathYear( A, C), activeYearsStartYear( D, C), education( D, B),not  unsat(32,"-3.912023005428141", A, B, C, D).
:~ unsat(32,"-3.912023005428141", A, B, C, D).[-3912@0,32, A, B, C, D]
 unsat(33,"-3.2188758248681864", A, B, C, D):- deathDate( A, C), C> D, dissolutionYear( B, D),not  negdeathPlace( A, B).
 negdeathPlace( A, B):- deathDate( A, C), C> D, dissolutionYear( B, D),not  unsat(33,"-3.2188758248681864", A, B, C, D).
:~ unsat(33,"-3.2188758248681864", A, B, C, D).[-3218@0,33, A, B, C, D]
 unsat(34,"-3.2188758248681864", A, B, C, D):- activeYearsEndYear( A, C), serviceEndYear( D, C), nationality( D, B),not  negdeathPlace( A, B).
 negdeathPlace( A, B):- activeYearsEndYear( A, C), serviceEndYear( D, C), nationality( D, B),not  unsat(34,"-3.2188758248681864", A, B, C, D).
:~ unsat(34,"-3.2188758248681864", A, B, C, D).[-3218@0,34, A, B, C, D]
 unsat(35,"-4.317488113536318", A, B, C, D):- nationality( A, C), almaMater( D, C), almaMater( D, B),not  negdeathPlace( A, B).
 negdeathPlace( A, B):- nationality( A, C), almaMater( D, C), almaMater( D, B),not  unsat(35,"-4.317488113536318", A, B, C, D).
:~ unsat(35,"-4.317488113536318", A, B, C, D).[-4317@0,35, A, B, C, D]
 unsat(36,"-2.3025850929940446", A, B, C, D):- almaMater( A, C), employer( D, C), almaMater( D, B),not  negdeathPlace( A, B).
 negdeathPlace( A, B):- almaMater( A, C), employer( D, C), almaMater( D, B),not  unsat(36,"-2.3025850929940446", A, B, C, D).
:~ unsat(36,"-2.3025850929940446", A, B, C, D).[-2302@0,36, A, B, C, D]
 unsat(37,"-0.5946519338108446", A, B, C, D):- location( C, B), region( C, D), birthPlace( A, D),not  negdeathPlace( A, B).
 negdeathPlace( A, B):- location( C, B), region( C, D), birthPlace( A, D),not  unsat(37,"-0.5946519338108446", A, B, C, D).
:~ unsat(37,"-0.5946519338108446", A, B, C, D).[-594@0,37, A, B, C, D]
 unsat(38,"-5.164785973923546", A, B, C, D):- birthPlace( A, C), nationality( D, C), occupation( D, B),not  negdeathPlace( A, B).
 negdeathPlace( A, B):- birthPlace( A, C), nationality( D, C), occupation( D, B),not  unsat(38,"-5.164785973923546", A, B, C, D).
:~ unsat(38,"-5.164785973923546", A, B, C, D).[-5164@0,38, A, B, C, D]
 unsat(39,"-3.2188758248681864", A, B, C, D):- almaMater( A, C), almaMater( D, C), employer( D, B),not  negdeathPlace( A, B).
 negdeathPlace( A, B):- almaMater( A, C), almaMater( D, C), employer( D, B),not  unsat(39,"-3.2188758248681864", A, B, C, D).
:~ unsat(39,"-3.2188758248681864", A, B, C, D).[-3218@0,39, A, B, C, D]
 unsat(40,"-1.9367305922198355", A, B, C):- birthPlace( A, B), birthPlace( C, B), nationality( C, B),not  negdeathPlace( A, B).
 negdeathPlace( A, B):- birthPlace( A, B), birthPlace( C, B), nationality( C, B),not  unsat(40,"-1.9367305922198355", A, B, C).
:~ unsat(40,"-1.9367305922198355", A, B, C).[-1936@0,40, A, B, C]
 unsat(41,"-3.2188758248681864", A, B, C, D):- height( A, C), C< D, areaTotal( B, D),not  negdeathPlace( A, B).
 negdeathPlace( A, B):- height( A, C), C< D, areaTotal( B, D),not  unsat(41,"-3.2188758248681864", A, B, C, D).
:~ unsat(41,"-3.2188758248681864", A, B, C, D).[-3218@0,41, A, B, C, D]
 unsat(42,"-5.298317366548129", A, B, C, D):- headquarter( C, B), location( C, D), deathPlace( A, D),not  negdeathPlace( A, B).
 negdeathPlace( A, B):- headquarter( C, B), location( C, D), deathPlace( A, D),not  unsat(42,"-5.298317366548129", A, B, C, D).
:~ unsat(42,"-5.298317366548129", A, B, C, D).[-5298@0,42, A, B, C, D]
 unsat(43,"-2.970420239258419", A, B, C, D):- employer( C, B), residence( C, D), birthPlace( A, D),not  negdeathPlace( A, B).
 negdeathPlace( A, B):- employer( C, B), residence( C, D), birthPlace( A, D),not  unsat(43,"-2.970420239258419", A, B, C, D).
:~ unsat(43,"-2.970420239258419", A, B, C, D).[-2970@0,43, A, B, C, D]
 unsat(44,"5.277815903573769", A, B, C):- deathPlace( A, C), B!= C, type( B,"Thing"),not  negdeathPlace( A, B).
 negdeathPlace( A, B):- deathPlace( A, C), B!= C, type( B,"Thing"),not  unsat(44,"5.277815903573769", A, B, C).
:~ unsat(44,"5.277815903573769", A, B, C).[5277@0,44, A, B, C]
 unsat(45,"-3.2188758248681864", A, B, C):- almaMater( A, B), almaMater( C, B), spouse( C, C),not  negdeathPlace( A, B).
 negdeathPlace( A, B):- almaMater( A, B), almaMater( C, B), spouse( C, C),not  unsat(45,"-3.2188758248681864", A, B, C).
:~ unsat(45,"-3.2188758248681864", A, B, C).[-3218@0,45, A, B, C]
 unsat(46,"-4.317488113536318", A, B, C, D):- formerTeam( C, B), position( C, D), position( A, D),not  negdeathPlace( A, B).
 negdeathPlace( A, B):- formerTeam( C, B), position( C, D), position( A, D),not  unsat(46,"-4.317488113536318", A, B, C, D).
:~ unsat(46,"-4.317488113536318", A, B, C, D).[-4317@0,46, A, B, C, D]
 unsat(47,"-4.8283137373022935", A, B, C, D):- affiliation( B, C), location( C, D), deathPlace( A, D),not  negdeathPlace( A, B).
 negdeathPlace( A, B):- affiliation( B, C), location( C, D), deathPlace( A, D),not  unsat(47,"-4.8283137373022935", A, B, C, D).
:~ unsat(47,"-4.8283137373022935", A, B, C, D).[-4828@0,47, A, B, C, D]
 unsat(48,"-3.2188758248681864", A, B, C):- almaMater( A, B), almaMater( C, B), award( C, B),not  negdeathPlace( A, B).
 negdeathPlace( A, B):- almaMater( A, B), almaMater( C, B), award( C, B),not  unsat(48,"-3.2188758248681864", A, B, C).
:~ unsat(48,"-3.2188758248681864", A, B, C).[-3218@0,48, A, B, C]
 unsat(49,"-3.912023005428141", A, B, C):- almaMater( A, B), almaMater( C, B), child( C, C),not  negdeathPlace( A, B).
 negdeathPlace( A, B):- almaMater( A, B), almaMater( C, B), child( C, C),not  unsat(49,"-3.912023005428141", A, B, C).
:~ unsat(49,"-3.912023005428141", A, B, C).[-3912@0,49, A, B, C]
 unsat(50,"-2.5257286443082565", A, B, C, D):- deathPlace( A, C), largestCity( C, D), isPartOf( D, B),not  negdeathPlace( A, B).
 negdeathPlace( A, B):- deathPlace( A, C), largestCity( C, D), isPartOf( D, B),not  unsat(50,"-2.5257286443082565", A, B, C, D).
:~ unsat(50,"-2.5257286443082565", A, B, C, D).[-2525@0,50, A, B, C, D]
 unsat(51,"-2.70805020110221", A, B, C, D):- team( A, C), debutTeam( D, C), team( D, B),not  negdeathPlace( A, B).
 negdeathPlace( A, B):- team( A, C), debutTeam( D, C), team( D, B),not  unsat(51,"-2.70805020110221", A, B, C, D).
:~ unsat(51,"-2.70805020110221", A, B, C, D).[-2708@0,51, A, B, C, D]
 unsat(52,"-3.912023005428141", A, B, C):- almaMater( A, B), almaMater( C, B), employer( C, B),not  negdeathPlace( A, B).
 negdeathPlace( A, B):- almaMater( A, B), almaMater( C, B), employer( C, B),not  unsat(52,"-3.912023005428141", A, B, C).
:~ unsat(52,"-3.912023005428141", A, B, C).[-3912@0,52, A, B, C]
 unsat(53,"-3.912023005428141", A, B, C):- team( A, B), team( C, B), chairman( C, C),not  negdeathPlace( A, B).
 negdeathPlace( A, B):- team( A, B), team( C, B), chairman( C, C),not  unsat(53,"-3.912023005428141", A, B, C).
:~ unsat(53,"-3.912023005428141", A, B, C).[-3912@0,53, A, B, C]
 unsat(54,"1.3660916538023726", A, B, C, D):- occupation( A, C), profession( D, C), almaMater( D, B),not  negdeathPlace( A, B).
 negdeathPlace( A, B):- occupation( A, C), profession( D, C), almaMater( D, B),not  unsat(54,"1.3660916538023726", A, B, C, D).
:~ unsat(54,"1.3660916538023726", A, B, C, D).[1366@0,54, A, B, C, D]
 unsat(55,"1.7263316639055983", A, B, C):- deathPlace( A, C), birthPlace( A, C), almaMater( A, B),not  negdeathPlace( A, B).
 negdeathPlace( A, B):- deathPlace( A, C), birthPlace( A, C), almaMater( A, B),not  unsat(55,"1.7263316639055983", A, B, C).
:~ unsat(55,"1.7263316639055983", A, B, C).[1726@0,55, A, B, C]
 unsat(56,"-2.5257286443082565", A, B, C, D):- birthPlace( A, C), region( C, D), country( D, B),not  negdeathPlace( A, B).
 negdeathPlace( A, B):- birthPlace( A, C), region( C, D), country( D, B),not  unsat(56,"-2.5257286443082565", A, B, C, D).
:~ unsat(56,"-2.5257286443082565", A, B, C, D).[-2525@0,56, A, B, C, D]
 unsat(57,"-3.2188758248681864", A, B, C, D):- almaMater( C, B), education( C, D), nationality( A, D),not  negdeathPlace( A, B).
 negdeathPlace( A, B):- almaMater( C, B), education( C, D), nationality( A, D),not  unsat(57,"-3.2188758248681864", A, B, C, D).
:~ unsat(57,"-3.2188758248681864", A, B, C, D).[-3218@0,57, A, B, C, D]
 headquarter("United_States_Census_Bureau","Maryland").
 birthPlace("Sue_Hecht","Maryland").
 residence("Gus_Russo","Maryland").
 residence("LaTonya_Swann","Maryland").
 headquarter("National_Coalition_for_Sexual_Freedom","Maryland").
 birthPlace("Norman_Conway","Maryland").
 headquarter("Maryland_Department_of_Transportation","Maryland").
 residence("Nathaniel_T._Oaks","Maryland").
 birthPlace("James_N._Mathias_Jr.","Maryland").
 headquarter("Interscholastic_Athletic_Association_of_Maryland","Maryland").
 headquarter("Indian_Health_Service","Maryland").
 headquarter("Esperanza_TV","Maryland").
 birthPlace("Peter_K._Wood","Maryland").
 headquarter("Baltimore_Chronicle","Maryland").
 residence("John_A._Olszewski,_Jr.","Maryland").
 occupation("William_Steuart_(planter)","Planter_(American_South)").
 birthPlace("Joshua_J._Cohen","Maryland").
 headquarter("Native_American_Report","Maryland").
 headquarter("Nuclear_Information_and_Resource_Service","Maryland").
 headquarter("The_Daily_Exchange","Maryland").
 residence("Scherod_C._Barnes","Maryland").
 birthPlace("Cheryl_Glenn","Maryland").
 residence("Ruth_M._Kirk","Maryland").
 location("Maryland_Department_of_Transportation","Maryland").
 deathPlace("William_Steuart_(planter)","Anne_Arundel_County").
 headquarter("Association_of_Zoos_and_Aquariums","Maryland").
 headquarter("Food_and_Drug_Administration","Maryland").
 headquarter("Science_(TV_network)","Maryland").
 residence("Doug_Duncan","Maryland").
 birthPlace("William_Steuart_(planter)","Anne_Arundel_County").
 location("National_Oceanic_and_Atmospheric_Administration","Maryland").
 residence("Samuel_I._Rosenberg","Maryland").
 headquarter("Private_Grants_Alert","Maryland").
 country("Anne_Arundel_County,_Maryland","United_States").
 residence("Cheryl_Glenn","Maryland").
 location("National_Institutes_of_Health_Clinical_Center","Maryland").
 birthPlace("Nina_R._Harper","Maryland").
 birthPlace("John_Astin","Maryland").
 headquarter("Piedmont_Airlines","Maryland").
 birthPlace("John_G._Walsh","Maryland").
 location("ABET","Maryland").
 headquarter("International_Religious_Liberty_Association","Maryland").
 birthPlace("Brian_K._McHale","Maryland").
 headquarter("Maryland_for_Responsible_Enforcement","Maryland").
 headquarter("Latin_Opinion","Maryland").
 residence("Bill_Ferguson_(politician)","Maryland").
 headquarter("Central_Security_Service","Maryland").
 residence("Sidney_A._Katz","Maryland").
 birthPlace("Cory_V._McCray","Maryland").
 residence("Pete_Rawlings","Maryland").
 birthPlace("Nathaniel_T._Oaks","Maryland").
 residence("John_Astin","Maryland").
 residence("Peter_K._Wood","Maryland").
 headquarter("Community_Health_Funding_Report","Maryland").
 birthPlace("Julian_L._Lapides","Maryland").
 residence("Joshua_J._Cohen","Maryland").
 location("Office_of_Oceanic_and_Atmospheric_Research","Maryland").
 headquarter("National_Institutes_of_Health","Maryland").
 headquarter("Baltimore_Afro-American","Maryland").
 headquarter("Selling_to_Seniors","Maryland").
 headquarter("Frederick_and_Pennsylvania_Line_Railroad_Museum","Maryland").
 location("Security_Industry_Association","Maryland").
 headquarter("National_Federation_of_Families_for_Children's_Mental_Health","Maryland").
 country("Maryland","United_States").
 headquarter("National_Institutes_of_Health_Clinical_Center","Maryland").
 headquarter("CD_Housing_Register","Maryland").
 headquarter("Centers_for_Medicare_and_Medicaid_Services","Maryland").
 headquarter("Baltimore_City_Paper","Maryland").
 residence("John_G._Walsh","Maryland").
 residence("Verna_L._Jones","Maryland").
 location("Defense_Information_School","Maryland").
 headquarter("National_Association_for_the_Advancement_of_Colored_People","Maryland").
 location("National_Cybersecurity_Center_of_Excellence","Maryland").
 birthPlace("Scherod_C._Barnes","Maryland").
 headquarter("Aging_News_Alert","Maryland").
 residence("Nina_R._Harper","Maryland").
 residence("Mike_Pantelides","Maryland").
 headquarter("Defense_Information_Systems_Agency","Maryland").
 headquarter("Social_Security_Administration","Maryland").
 headquarter("Maryland_Public_Secondary_Schools_Athletic_Association","Maryland").
 headquarter("DoD_News_Channel","Maryland").
 headquarter("Institute_of_International_Banking_Law_&_Practice","Maryland").
 residence("Sue_Hecht","Maryland").
 headquarter("Security_Industry_Association","Maryland").
 residence("Tony_Fulton_(Maryland_politician)","Maryland").
 location("Social_Security_Administration","Maryland").
 residence("Galen_R._Clagett","Maryland").
 residence("Julian_L._Lapides","Maryland").
 birthPlace("Gus_Russo","Maryland").
 residence("William_Preston_Lane_Jr.","Maryland").
 headquarter("Children_&_Youth_Funding_Report","Maryland").
 headquarter("American_Association_of_Colleges_of_Osteopathic_Medicine","Maryland").
 birthPlace("Verna_L._Jones","Maryland").
 headquarter("National_Information_Standards_Organization","Maryland").
 location("United_States_Census_Bureau","Maryland").
 birthPlace("Doug_Duncan","Maryland").
 headquarter("Mid-Atlantic_Sports_Network","Maryland").
 birthPlace("Galen_R._Clagett","Maryland").
 residence("Steve_Handelsman","Maryland").
 headquarter("The_Baltimore_Examiner","Maryland").
 birthPlace("LaTonya_Swann","Maryland").
 residence("Norman_Conway","Maryland").
 birthPlace("Paul_L._Cordish","Maryland").
 residence("Cory_V._McCray","Maryland").
 residence("Clarence_M._Mitchell,_IV","Maryland").
 headquarter("The_Baltimore_Sun","Maryland").
 birthPlace("John_A._Olszewski,_Jr.","Maryland").
 residence("Antonio_Hayes","Maryland").
 headquarter("Office_of_Oceanic_and_Atmospheric_Research","Maryland").
 residence("Paul_L._Cordish","Maryland").
 residence("John_Thomson_Mason,_Jr.","Maryland").
 residence("Carolyn_J._Krysiak","Maryland").
 headquarter("Telegraf_(Baltimore_newspaper)","Maryland").
 location("Goddard_Space_Flight_Center","Maryland").
 birthPlace("Ruth_M._Kirk","Maryland").
 occupation("William_Steuart_(planter)","William_Steuart_(planter)__1").
 location("ClinicalTrials.gov","Maryland").
 headquarter("Landlord_Law_&_Multi-housing_Report","Maryland").
 birthPlace("Frank_M._Conaway_Jr.","Maryland").
 birthPlace("Tony_Fulton_(Maryland_politician)","Maryland").
 birthPlace("Clarence_M._Mitchell,_IV","Maryland").
 location("Central_Security_Service","Maryland").
 birthPlace("Carolyn_J._Krysiak","Maryland").
 headquarter("University_System_of_Maryland","Maryland").
 residence("Joan_Carter_Conway","Maryland").
 birthPlace("Steve_Handelsman","Maryland").
 birthPlace("William_Steuart_(planter)","Maryland").
 location("Defense_Information_Systems_Agency","Maryland").
 largestCity("Maryland","Baltimore").
 headquarter("National_Ocean_Service","Maryland").
 birthPlace("Samuel_I._Rosenberg","Maryland").
 residence("James_N._Mathias_Jr.","Maryland").
 birthPlace("Sidney_A._Katz","Maryland").
 headquarter("Defense_Information_School","Maryland").
 location("Committee_on_National_Security_Systems","Maryland").
 birthPlace("Peter_A._Hammen","Maryland").
 headquarter("National_Cybersecurity_Center_of_Excellence","Maryland").
 residence("Brian_K._McHale","Maryland").
 headquarter("Maryland_Department_of_Natural_Resources","Maryland").
 headquarter("Committee_on_National_Security_Systems","Maryland").
 headquarter("National_Oceanic_and_Atmospheric_Administration","Maryland").
 headquarter("Washington_Hispanic","Maryland").
 headquarter("Housing_for_Seniors_Report","Maryland").
 location("National_Institutes_of_Health","Maryland").
 birthPlace("William_Steuart_(planter)","Anne_Arundel_County,_Maryland").
 headquarter("Federal_&_Foundation_Assistance_Monitor","Maryland").
 headquarter("Goddard_Space_Flight_Center","Maryland").
 location("Food_and_Drug_Administration","Maryland").
 headquarter("Housing_Affairs_Letter","Maryland").
 headquarter("Community_Development_Digest","Maryland").
 birthPlace("Antonio_Hayes","Maryland").
 headquarter("Baltimore_Heritage","Maryland").
 location("Maryland_Department_of_Natural_Resources","Maryland").
 headquarter("TLC_(TV_network)","Maryland").
 birthPlace("Mike_Pantelides","Maryland").
 location("Centers_for_Medicare_and_Medicaid_Services","Maryland").
 birthPlace("Pete_Rawlings","Maryland").
 headquarter("Daily_Record_(Maryland)","Maryland").
 isPartOf("Baltimore","Maryland").
 birthPlace("John_Thomson_Mason,_Jr.","Maryland").
 headquarter("ABET","Maryland").
 headquarter("Jesuit_Volunteer_Corps","Maryland").
 residence("Frank_M._Conaway_Jr.","Maryland").
 headquarter("The_Kent_Island_Bay_Times","Maryland").
 location("Indian_Health_Service","Maryland").
 headquarter("Substance_Abuse_&_Disability_Services_Report","Maryland").
 birthPlace("Bill_Ferguson_(politician)","Maryland").
 deathPlace("William_Steuart_(planter)","Maryland").
 birthPlace("William_Preston_Lane_Jr.","Maryland").
 location("National_Ocean_Service","Maryland").
 headquarter("The_Johns_Hopkins_News-Letter","Maryland").
 residence("Peter_A._Hammen","Maryland").
 birthPlace("Joan_Carter_Conway","Maryland").
 headquarter("ClinicalTrials.gov","Maryland").
 headquarter("Hope_Channel","Maryland").
 type("William_Steuart_(planter)","Person").
 type("William_Steuart_(planter)","Agent").
 type("William_Steuart_(planter)","Thing").
 type("Maryland","Place").
 type("Maryland","Location").
 type("Maryland","AdministrativeRegion").
 type("Maryland","PopulatedPlace").
 type("Maryland","Region").
 type("Maryland","Thing").
