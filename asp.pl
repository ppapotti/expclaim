 unsat(1,"1.8744599857751123", A, B):- spouse( B, A),not  spouse( A, B).
 spouse( A, B):- spouse( B, A),not  unsat(1,"1.8744599857751123", A, B).
:~ unsat(1,"1.8744599857751123", A, B).[1874@0,1, A, B]
 unsat(2,"-2.2567216762008644", A, B, C):- relation( C, A), child( C, B),not  spouse( A, B).
 spouse( A, B):- relation( C, A), child( C, B),not  unsat(2,"-2.2567216762008644", A, B, C).
:~ unsat(2,"-2.2567216762008644", A, B, C).[-2256@0,2, A, B, C]
 unsat(3,"1.9132177873697707", A, B, C):- parent( C, B), parent( C, A), type( A,"Royalty"), type( B,"Royalty"),not  spouse( A, B).
 spouse( A, B):- parent( C, B), parent( C, A), type( A,"Royalty"), type( B,"Royalty"),not  unsat(3,"1.9132177873697707", A, B, C).
:~ unsat(3,"1.9132177873697707", A, B, C).[1913@0,3, A, B, C]
 unsat(4,"-5.432800361050359", A, B, C):- writer( C, B), starring( C, A),not  spouse( A, B).
 spouse( A, B):- writer( C, B), starring( C, A),not  unsat(4,"-5.432800361050359", A, B, C).
:~ unsat(4,"-5.432800361050359", A, B, C).[-5432@0,4, A, B, C]
 unsat(5,"1.9132177873697707", A, B, C):- parent( C, A), parent( C, B), type( A,"Royalty"), type( B,"Royalty"),not  spouse( A, B).
 spouse( A, B):- parent( C, A), parent( C, B), type( A,"Royalty"), type( B,"Royalty"),not  unsat(5,"1.9132177873697707", A, B, C).
:~ unsat(5,"1.9132177873697707", A, B, C).[1913@0,5, A, B, C]
 unsat(6,"-6.772122554741529", A, B, C, D):- termPeriod( A, C), activeYearsEndDate( C, D), deathDate( B, D),not  spouse( A, B).
 spouse( A, B):- termPeriod( A, C), activeYearsEndDate( C, D), deathDate( B, D),not  unsat(6,"-6.772122554741529", A, B, C, D).
:~ unsat(6,"-6.772122554741529", A, B, C, D).[-6772@0,6, A, B, C, D]
 unsat(7,"1.2421640351468626", A, B, C):- child( A, C), child( B, C),not  spouse( A, B).
 spouse( A, B):- child( A, C), child( B, C),not  unsat(7,"1.2421640351468626", A, B, C).
:~ unsat(7,"1.2421640351468626", A, B, C).[1242@0,7, A, B, C]
 unsat(8,"-0.4490857305840546", A, B, C, D):- predecessor( C, B), spouse( D, C), successor( A, D), type( A,"Royalty"), type( B,"Royalty"),not  spouse( A, B).
 spouse( A, B):- predecessor( C, B), spouse( D, C), successor( A, D), type( A,"Royalty"), type( B,"Royalty"),not  unsat(8,"-0.4490857305840546", A, B, C, D).
:~ unsat(8,"-0.4490857305840546", A, B, C, D).[-449@0,8, A, B, C, D]
 unsat(9,"-8.50024421166903", A, B, C, D):- successor( C, A), birthPlace( C, D), restingPlace( B, D),not  spouse( A, B).
 spouse( A, B):- successor( C, A), birthPlace( C, D), restingPlace( B, D),not  unsat(9,"-8.50024421166903", A, B, C, D).
:~ unsat(9,"-8.50024421166903", A, B, C, D).[-8500@0,9, A, B, C, D]
 unsat(10,"-3.6200951411576576", A, B, C, D):- spouse( C, B), birthDate( C, D), birthDate( A, D),not  spouse( A, B).
 spouse( A, B):- spouse( C, B), birthDate( C, D), birthDate( A, D),not  unsat(10,"-3.6200951411576576", A, B, C, D).
:~ unsat(10,"-3.6200951411576576", A, B, C, D).[-3620@0,10, A, B, C, D]
 unsat(11,"-10.46174622953675", A, B, C, D):- birthPlace( B, C), state( D, C), birthPlace( A, D),not  spouse( A, B).
 spouse( A, B):- birthPlace( B, C), state( D, C), birthPlace( A, D),not  unsat(11,"-10.46174622953675", A, B, C, D).
:~ unsat(11,"-10.46174622953675", A, B, C, D).[-10461@0,11, A, B, C, D]
 unsat(12,"1.8490950780715683", A, B, C):- child( A, C), parent( C, B),not  spouse( A, B).
 spouse( A, B):- child( A, C), parent( C, B),not  unsat(12,"1.8490950780715683", A, B, C).
:~ unsat(12,"1.8490950780715683", A, B, C).[1849@0,12, A, B, C]
 unsat(13,"-4.328420495734248", A, B, C, D):- occupation( A, C), occupation( D, C), spouse( D, B),not  spouse( A, B).
 spouse( A, B):- occupation( A, C), occupation( D, C), spouse( D, B),not  unsat(13,"-4.328420495734248", A, B, C, D).
:~ unsat(13,"-4.328420495734248", A, B, C, D).[-4328@0,13, A, B, C, D]
 unsat(14,"-7.494756424848414", A, B, C):- occupation( A, C), occupation( B, C),not  spouse( A, B).
 spouse( A, B):- occupation( A, C), occupation( B, C),not  unsat(14,"-7.494756424848414", A, B, C).
:~ unsat(14,"-7.494756424848414", A, B, C).[-7494@0,14, A, B, C]
 unsat(15,"1.681906689247649", A, B, C):- parent( C, A), parent( C, B),not  spouse( A, B).
 spouse( A, B):- parent( C, A), parent( C, B),not  unsat(15,"1.681906689247649", A, B, C).
:~ unsat(15,"1.681906689247649", A, B, C).[1681@0,15, A, B, C]
 unsat(16,"-8.088392065654498", A, B, C, D):- birthPlace( B, C), country( D, C), almaMater( A, D),not  spouse( A, B).
 spouse( A, B):- birthPlace( B, C), country( D, C), almaMater( A, D),not  unsat(16,"-8.088392065654498", A, B, C, D).
:~ unsat(16,"-8.088392065654498", A, B, C, D).[-8088@0,16, A, B, C, D]
 unsat(17,"-4.482611341211476", A, B, C):- starring( C, A), writer( C, B), director( C, B),not  spouse( A, B).
 spouse( A, B):- starring( C, A), writer( C, B), director( C, B),not  unsat(17,"-4.482611341211476", A, B, C).
:~ unsat(17,"-4.482611341211476", A, B, C).[-4482@0,17, A, B, C]
 unsat(18,"-6.73444766551887", A, B, C):- activeYearsStartYear( A, C), C>= C, activeYearsStartYear( B, C),not  spouse( A, B).
 spouse( A, B):- activeYearsStartYear( A, C), C>= C, activeYearsStartYear( B, C),not  unsat(18,"-6.73444766551887", A, B, C).
:~ unsat(18,"-6.73444766551887", A, B, C).[-6734@0,18, A, B, C]
 unsat(19,"-1.1046765886356211", A, B, C, D):- predecessor( C, B), spouse( D, C), successor( A, D),not  spouse( A, B).
 spouse( A, B):- predecessor( C, B), spouse( D, C), successor( A, D),not  unsat(19,"-1.1046765886356211", A, B, C, D).
:~ unsat(19,"-1.1046765886356211", A, B, C, D).[-1104@0,19, A, B, C, D]
 unsat(20,"1.681906689247649", A, B, C):- parent( C, B), parent( C, A),not  spouse( A, B).
 spouse( A, B):- parent( C, B), parent( C, A),not  unsat(20,"1.681906689247649", A, B, C).
:~ unsat(20,"1.681906689247649", A, B, C).[1681@0,20, A, B, C]
 unsat(21,"-6.9652386680702705", A, B, C, D):- nationality( A, C), country( D, C), birthPlace( B, D),not  spouse( A, B).
 spouse( A, B):- nationality( A, C), country( D, C), birthPlace( B, D),not  unsat(21,"-6.9652386680702705", A, B, C, D).
:~ unsat(21,"-6.9652386680702705", A, B, C, D).[-6965@0,21, A, B, C, D]
 unsat(22,"-8.275694952798656", A, B, C, D):- deathPlace( B, C), largestCity( D, C), deathPlace( A, D),not  spouse( A, B).
 spouse( A, B):- deathPlace( B, C), largestCity( D, C), deathPlace( A, D),not  unsat(22,"-8.275694952798656", A, B, C, D).
:~ unsat(22,"-8.275694952798656", A, B, C, D).[-8275@0,22, A, B, C, D]
 unsat(23,"-0.2207310049088257", A, B, C, D):- musicalArtist( C, B), album( C, D), producer( D, A),not  negspouse( A, B).
 negspouse( A, B):- musicalArtist( C, B), album( C, D), producer( D, A),not  unsat(23,"-0.2207310049088257", A, B, C, D).
:~ unsat(23,"-0.2207310049088257", A, B, C, D).[-220@0,23, A, B, C, D]
 unsat(24,"1.9601418883125696", A, B, C, D):- parent( A, C), parent( C, D), spouse( D, B),not  negspouse( A, B).
 negspouse( A, B):- parent( A, C), parent( C, D), spouse( D, B),not  unsat(24,"1.9601418883125696", A, B, C, D).
:~ unsat(24,"1.9601418883125696", A, B, C, D).[1960@0,24, A, B, C, D]
 unsat(25,"1.693219441394478", A, B, C):- spouse( A, C), child( C, B),not  negspouse( A, B).
 negspouse( A, B):- spouse( A, C), child( C, B),not  unsat(25,"1.693219441394478", A, B, C).
:~ unsat(25,"1.693219441394478", A, B, C).[1693@0,25, A, B, C]
 unsat(26,"0.67116827384117", A, B, C, D):- successor( A, C), commander( D, C), battle( B, D),not  negspouse( A, B).
 negspouse( A, B):- successor( A, C), commander( D, C), battle( B, D),not  unsat(26,"0.67116827384117", A, B, C, D).
:~ unsat(26,"0.67116827384117", A, B, C, D).[671@0,26, A, B, C, D]
 unsat(27,"3.261435439286998", A, B, C):- influencedBy( C, B), influenced( C, A),not  negspouse( A, B).
 negspouse( A, B):- influencedBy( C, B), influenced( C, A),not  unsat(27,"3.261435439286998", A, B, C).
:~ unsat(27,"3.261435439286998", A, B, C).[3261@0,27, A, B, C]
 unsat(28,"0.8104909453988106", A, B):- successor( A, B),not  negspouse( A, B).
 negspouse( A, B):- successor( A, B),not  unsat(28,"0.8104909453988106", A, B).
:~ unsat(28,"0.8104909453988106", A, B).[810@0,28, A, B]
 unsat(29,"-0.7443557255936589", A, B, C, D):- profession( B, C), D!= C, profession( A, D),not  negspouse( A, B).
 negspouse( A, B):- profession( B, C), D!= C, profession( A, D),not  unsat(29,"-0.7443557255936589", A, B, C, D).
:~ unsat(29,"-0.7443557255936589", A, B, C, D).[-744@0,29, A, B, C, D]
 unsat(30,"1.9684290125906632", A, B, C, D):- influencedBy( C, B), influenced( C, D), influencedBy( D, A),not  negspouse( A, B).
 negspouse( A, B):- influencedBy( C, B), influenced( C, D), influencedBy( D, A),not  unsat(30,"1.9684290125906632", A, B, C, D).
:~ unsat(30,"1.9684290125906632", A, B, C, D).[1968@0,30, A, B, C, D]
 unsat(31,"2.4880074274662483", A, B, C, D):- deathYear( B, C), C< D, activeYearsStartYear( A, D),not  negspouse( A, B).
 negspouse( A, B):- deathYear( B, C), C< D, activeYearsStartYear( A, D),not  unsat(31,"2.4880074274662483", A, B, C, D).
:~ unsat(31,"2.4880074274662483", A, B, C, D).[2488@0,31, A, B, C, D]
 unsat(32,"-0.005449604767564815", A, B, C, D):- deathPlace( A, C), deathPlace( D, C), influenced( D, B),not  negspouse( A, B).
 negspouse( A, B):- deathPlace( A, C), deathPlace( D, C), influenced( D, B),not  unsat(32,"-0.005449604767564815", A, B, C, D).
:~ unsat(32,"-0.005449604767564815", A, B, C, D).[-5@0,32, A, B, C, D]
 unsat(33,"-5.968707559985366", A, B, C, D):- influencedBy( A, C), deathPlace( C, D), deathPlace( B, D),not  negspouse( A, B).
 negspouse( A, B):- influencedBy( A, C), deathPlace( C, D), deathPlace( B, D),not  unsat(33,"-5.968707559985366", A, B, C, D).
:~ unsat(33,"-5.968707559985366", A, B, C, D).[-5968@0,33, A, B, C, D]
 unsat(34,"-1.2603531377620436", A, B, C, D):- influencedBy( B, C), deathPlace( C, D), birthPlace( A, D),not  negspouse( A, B).
 negspouse( A, B):- influencedBy( B, C), deathPlace( C, D), birthPlace( A, D),not  unsat(34,"-1.2603531377620436", A, B, C, D).
:~ unsat(34,"-1.2603531377620436", A, B, C, D).[-1260@0,34, A, B, C, D]
 unsat(35,"0.15597583090883876", A, B, C, D):- spouse( B, C), relative( D, C), parent( D, A),not  negspouse( A, B).
 negspouse( A, B):- spouse( B, C), relative( D, C), parent( D, A),not  unsat(35,"0.15597583090883876", A, B, C, D).
:~ unsat(35,"0.15597583090883876", A, B, C, D).[155@0,35, A, B, C, D]
 unsat(36,"1.1209062056273225", A, B, C, D):- spouse( A, C), child( C, D), relative( B, D),not  type( A,"FictionalCharacter"),not  type( B,"FictionalCharacter"),not  negspouse( A, B).
 negspouse( A, B):- spouse( A, C), child( C, D), relative( B, D),not  type( A,"FictionalCharacter"),not  type( B,"FictionalCharacter"),not  unsat(36,"1.1209062056273225", A, B, C, D).
:~ unsat(36,"1.1209062056273225", A, B, C, D).[1120@0,36, A, B, C, D]
 unsat(37,"2.5585585384582146", A, B, C):- parent( A, C), spouse( B, C),not  negspouse( A, B).
 negspouse( A, B):- parent( A, C), spouse( B, C),not  unsat(37,"2.5585585384582146", A, B, C).
:~ unsat(37,"2.5585585384582146", A, B, C).[2558@0,37, A, B, C]
 unsat(38,"2.0806759573408433", A, B, C):- office( B, C), orderInOffice( A, C),not  negspouse( A, B).
 negspouse( A, B):- office( B, C), orderInOffice( A, C),not  unsat(38,"2.0806759573408433", A, B, C).
:~ unsat(38,"2.0806759573408433", A, B, C).[2080@0,38, A, B, C]
 unsat(39,"0.6460180402183953", A, B, C, D):- monarch( A, C), predecessor( D, C), monarch( B, D),not  negspouse( A, B).
 negspouse( A, B):- monarch( A, C), predecessor( D, C), monarch( B, D),not  unsat(39,"0.6460180402183953", A, B, C, D).
:~ unsat(39,"0.6460180402183953", A, B, C, D).[646@0,39, A, B, C, D]
 unsat(40,"-5.332718793265369", A, B, C, D):- birthPlace( B, C), restingPlace( D, C), predecessor( A, D),not  negspouse( A, B).
 negspouse( A, B):- birthPlace( B, C), restingPlace( D, C), predecessor( A, D),not  unsat(40,"-5.332718793265369", A, B, C, D).
:~ unsat(40,"-5.332718793265369", A, B, C, D).[-5332@0,40, A, B, C, D]
 unsat(41,"-0.4274440148269396", A, B, C, D):- successor( C, B), monarch( D, C), predecessor( D, A),not  negspouse( A, B).
 negspouse( A, B):- successor( C, B), monarch( D, C), predecessor( D, A),not  unsat(41,"-0.4274440148269396", A, B, C, D).
:~ unsat(41,"-0.4274440148269396", A, B, C, D).[-427@0,41, A, B, C, D]
 unsat(42,"2.3312668019313554", A, B, C):- spouse( C, B), child( C, A),not  type( A,"FictionalCharacter"),not  type( B,"FictionalCharacter"),not  negspouse( A, B).
 negspouse( A, B):- spouse( C, B), child( C, A),not  type( A,"FictionalCharacter"),not  type( B,"FictionalCharacter"),not  unsat(42,"2.3312668019313554", A, B, C).
:~ unsat(42,"2.3312668019313554", A, B, C).[2331@0,42, A, B, C]
 unsat(43,"-5.661222860237405", A, B, C, D):- birthPlace( A, C), country( D, C), child( B, D),not  negspouse( A, B).
 negspouse( A, B):- birthPlace( A, C), country( D, C), child( B, D),not  unsat(43,"-5.661222860237405", A, B, C, D).
:~ unsat(43,"-5.661222860237405", A, B, C, D).[-5661@0,43, A, B, C, D]
 unsat(44,"1.8949437054632852", A, B, C, D):- successor( C, B), country( C, D), country( A, D),not  type( A,"OfficeHolder"),not  type( B,"OfficeHolder"),not  negspouse( A, B).
 negspouse( A, B):- successor( C, B), country( C, D), country( A, D),not  type( A,"OfficeHolder"),not  type( B,"OfficeHolder"),not  unsat(44,"1.8949437054632852", A, B, C, D).
:~ unsat(44,"1.8949437054632852", A, B, C, D).[1894@0,44, A, B, C, D]
 unsat(45,"0.8028460978163698", A, B, C):- successor( A, C), governor( C, B),not  negspouse( A, B).
 negspouse( A, B):- successor( A, C), governor( C, B),not  unsat(45,"0.8028460978163698", A, B, C).
:~ unsat(45,"0.8028460978163698", A, B, C).[802@0,45, A, B, C]
 unsat(46,"-7.262628600974241", A, B, C, D):- birthPlace( A, C), country( C, D), leader( D, B),not  negspouse( A, B).
 negspouse( A, B):- birthPlace( A, C), country( C, D), leader( D, B),not  unsat(46,"-7.262628600974241", A, B, C, D).
:~ unsat(46,"-7.262628600974241", A, B, C, D).[-7262@0,46, A, B, C, D]
 unsat(47,"2.4141375788997923", A, B, C):- successor( B, C), successor( C, A),not  negspouse( A, B).
 negspouse( A, B):- successor( B, C), successor( C, A),not  unsat(47,"2.4141375788997923", A, B, C).
:~ unsat(47,"2.4141375788997923", A, B, C).[2414@0,47, A, B, C]
 unsat(48,"2.5585585384582146", A, B, C):- spouse( B, C), parent( A, C),not  negspouse( A, B).
 negspouse( A, B):- spouse( B, C), parent( A, C),not  unsat(48,"2.5585585384582146", A, B, C).
:~ unsat(48,"2.5585585384582146", A, B, C).[2558@0,48, A, B, C]
 unsat(49,"2.8641864859501722", A, B, C, D):- successor( C, B), birthPlace( C, D), region( A, D),not  negspouse( A, B).
 negspouse( A, B):- successor( C, B), birthPlace( C, D), region( A, D),not  unsat(49,"2.8641864859501722", A, B, C, D).
:~ unsat(49,"2.8641864859501722", A, B, C, D).[2864@0,49, A, B, C, D]
 unsat(50,"1.3753652905877007", A, B, C, D):- predecessor( A, C), lieutenant( D, C), successor( D, B),not  negspouse( A, B).
 negspouse( A, B):- predecessor( A, C), lieutenant( D, C), successor( D, B),not  unsat(50,"1.3753652905877007", A, B, C, D).
:~ unsat(50,"1.3753652905877007", A, B, C, D).[1375@0,50, A, B, C, D]
 unsat(51,"0.48081454534995144", A, B, C, D):- predecessor( C, B), country( C, D), country( A, D),not  negspouse( A, B).
 negspouse( A, B):- predecessor( C, B), country( C, D), country( A, D),not  unsat(51,"0.48081454534995144", A, B, C, D).
:~ unsat(51,"0.48081454534995144", A, B, C, D).[480@0,51, A, B, C, D]
 unsat(52,"2.5463834233390013", A, B, C, D):- influencedBy( C, B), influenced( C, D), influencedBy( D, A),not  type( A,"Writer"),not  type( B,"Writer"),not  negspouse( A, B).
 negspouse( A, B):- influencedBy( C, B), influenced( C, D), influencedBy( D, A),not  type( A,"Writer"),not  type( B,"Writer"),not  unsat(52,"2.5463834233390013", A, B, C, D).
:~ unsat(52,"2.5463834233390013", A, B, C, D).[2546@0,52, A, B, C, D]
 unsat(53,"1.6815563290944406", A, B, C, D):- profession( A, C), occupation( D, C), predecessor( B, D),not  negspouse( A, B).
 negspouse( A, B):- profession( A, C), occupation( D, C), predecessor( B, D),not  unsat(53,"1.6815563290944406", A, B, C, D).
:~ unsat(53,"1.6815563290944406", A, B, C, D).[1681@0,53, A, B, C, D]
 unsat(54,"1.9036205494889746", A, B, C):- spouse( C, B), child( C, A),not  negspouse( A, B).
 negspouse( A, B):- spouse( C, B), child( C, A),not  unsat(54,"1.9036205494889746", A, B, C).
:~ unsat(54,"1.9036205494889746", A, B, C).[1903@0,54, A, B, C]
 unsat(55,"1.4005865688166184", A, B, C, D):- spouse( C, B), parent( D, C), spouse( A, D),not  negspouse( A, B).
 negspouse( A, B):- spouse( C, B), parent( D, C), spouse( A, D),not  unsat(55,"1.4005865688166184", A, B, C, D).
:~ unsat(55,"1.4005865688166184", A, B, C, D).[1400@0,55, A, B, C, D]
 unsat(56,"0.8913653916536763", A, B, C):- successor( B, C), predecessor( C, B), successor( A, B),not  negspouse( A, B).
 negspouse( A, B):- successor( B, C), predecessor( C, B), successor( A, B),not  unsat(56,"0.8913653916536763", A, B, C).
:~ unsat(56,"0.8913653916536763", A, B, C).[891@0,56, A, B, C]
 unsat(57,"0.5886747151353161", A, B):- child( A, B),not  negspouse( A, B).
 negspouse( A, B):- child( A, B),not  unsat(57,"0.5886747151353161", A, B).
:~ unsat(57,"0.5886747151353161", A, B).[588@0,57, A, B]
 unsat(58,"2.0471532653022", A, B, C):- predecessor( C, B), predecessor( A, C),not  negspouse( A, B).
 negspouse( A, B):- predecessor( C, B), predecessor( A, C),not  unsat(58,"2.0471532653022", A, B, C).
:~ unsat(58,"2.0471532653022", A, B, C).[2047@0,58, A, B, C]
 unsat(59,"0.36537589476539933", A, B, C, D):- parent( C, A), C!= D, parent( D, B),not  negspouse( A, B).
 negspouse( A, B):- parent( C, A), C!= D, parent( D, B),not  unsat(59,"0.36537589476539933", A, B, C, D).
:~ unsat(59,"0.36537589476539933", A, B, C, D).[365@0,59, A, B, C, D]
 unsat(60,"-3.1959094794280607", A, B, C, D):- successor( A, C), birthPlace( C, D), deathPlace( B, D),not  negspouse( A, B).
 negspouse( A, B):- successor( A, C), birthPlace( C, D), deathPlace( B, D),not  unsat(60,"-3.1959094794280607", A, B, C, D).
:~ unsat(60,"-3.1959094794280607", A, B, C, D).[-3195@0,60, A, B, C, D]
 unsat(61,"0.28600843189375147", A, B, C, D):- successor( C, A), primeMinister( D, C), predecessor( D, B),not  negspouse( A, B).
 negspouse( A, B):- successor( C, A), primeMinister( D, C), predecessor( D, B),not  unsat(61,"0.28600843189375147", A, B, C, D).
:~ unsat(61,"0.28600843189375147", A, B, C, D).[286@0,61, A, B, C, D]
 unsat(62,"-2.805252529058573", A, B, C, D):- nationality( B, C), deathPlace( D, C), predecessor( D, A),not  negspouse( A, B).
 negspouse( A, B):- nationality( B, C), deathPlace( D, C), predecessor( D, A),not  unsat(62,"-2.805252529058573", A, B, C, D).
:~ unsat(62,"-2.805252529058573", A, B, C, D).[-2805@0,62, A, B, C, D]
 unsat(63,"-6.270988431858299", A, B, C, D):- birthPlace( B, C), deathPlace( D, C), influencedBy( A, D),not  negspouse( A, B).
 negspouse( A, B):- birthPlace( B, C), deathPlace( D, C), influencedBy( A, D),not  unsat(63,"-6.270988431858299", A, B, C, D).
:~ unsat(63,"-6.270988431858299", A, B, C, D).[-6270@0,63, A, B, C, D]
 unsat(64,"0.1915951935792836", A, B, C, D):- successor( A, C), predecessor( D, C), primeMinister( D, B),not  negspouse( A, B).
 negspouse( A, B):- successor( A, C), predecessor( D, C), primeMinister( D, B),not  unsat(64,"0.1915951935792836", A, B, C, D).
:~ unsat(64,"0.1915951935792836", A, B, C, D).[191@0,64, A, B, C, D]
 unsat(65,"1.9175617940510588", A, B, C):- spouse( C, A), child( C, B),not  negspouse( A, B).
 negspouse( A, B):- spouse( C, A), child( C, B),not  unsat(65,"1.9175617940510588", A, B, C).
:~ unsat(65,"1.9175617940510588", A, B, C).[1917@0,65, A, B, C]
 unsat(66,"-0.7559480817989755", A, B, C, D):- party( A, C), splitFromParty( D, C), party( B, D),not  negspouse( A, B).
 negspouse( A, B):- party( A, C), splitFromParty( D, C), party( B, D),not  unsat(66,"-0.7559480817989755", A, B, C, D).
:~ unsat(66,"-0.7559480817989755", A, B, C, D).[-755@0,66, A, B, C, D]
 unsat(67,"-1.749199854809259", A, B, C, D):- occupation( A, C), occupation( D, C), influenced( D, B),not  negspouse( A, B).
 negspouse( A, B):- occupation( A, C), occupation( D, C), influenced( D, B),not  unsat(67,"-1.749199854809259", A, B, C, D).
:~ unsat(67,"-1.749199854809259", A, B, C, D).[-1749@0,67, A, B, C, D]
 unsat(68,"1.869570033117651", A, B, C, D):- spouse( C, B), parent( D, C), spouse( A, D), type( A,"Royalty"), type( B,"Royalty"),not  negspouse( A, B).
 negspouse( A, B):- spouse( C, B), parent( D, C), spouse( A, D), type( A,"Royalty"), type( B,"Royalty"),not  unsat(68,"1.869570033117651", A, B, C, D).
:~ unsat(68,"1.869570033117651", A, B, C, D).[1869@0,68, A, B, C, D]
 unsat(69,"-0.26735859947986673", A, B, C, D):- country( B, C), deathPlace( D, C), spouse( D, A),not  negspouse( A, B).
 negspouse( A, B):- country( B, C), deathPlace( D, C), spouse( D, A),not  unsat(69,"-0.26735859947986673", A, B, C, D).
:~ unsat(69,"-0.26735859947986673", A, B, C, D).[-267@0,69, A, B, C, D]
 unsat(70,"-2.4423470353692043", A, B, C, D):- deathPlace( B, C), region( D, C), governor( D, A),not  negspouse( A, B).
 negspouse( A, B):- deathPlace( B, C), region( D, C), governor( D, A),not  unsat(70,"-2.4423470353692043", A, B, C, D).
:~ unsat(70,"-2.4423470353692043", A, B, C, D).[-2442@0,70, A, B, C, D]
 unsat(71,"3.1193695628415377", A, B):- parent( B, A),not  negspouse( A, B).
 negspouse( A, B):- parent( B, A),not  unsat(71,"3.1193695628415377", A, B).
:~ unsat(71,"3.1193695628415377", A, B).[3119@0,71, A, B]
 unsat(72,"0.37643385156542586", A, B, C, D):- deathPlace( A, C), birthPlace( D, C), influencedBy( D, B),not  negspouse( A, B).
 negspouse( A, B):- deathPlace( A, C), birthPlace( D, C), influencedBy( D, B),not  unsat(72,"0.37643385156542586", A, B, C, D).
:~ unsat(72,"0.37643385156542586", A, B, C, D).[376@0,72, A, B, C, D]
 unsat(73,"1.0784095813505903", A, B):- child( A, B),not  type( A,"FictionalCharacter"),not  type( B,"FictionalCharacter"),not  negspouse( A, B).
 negspouse( A, B):- child( A, B),not  type( A,"FictionalCharacter"),not  type( B,"FictionalCharacter"),not  unsat(73,"1.0784095813505903", A, B).
:~ unsat(73,"1.0784095813505903", A, B).[1078@0,73, A, B]
 unsat(74,"2.809926392677425", A, B, C, D):- parent( A, C), parent( C, D), spouse( D, B), type( A,"Royalty"), type( B,"Royalty"),not  negspouse( A, B).
 negspouse( A, B):- parent( A, C), parent( C, D), spouse( D, B), type( A,"Royalty"), type( B,"Royalty"),not  unsat(74,"2.809926392677425", A, B, C, D).
:~ unsat(74,"2.809926392677425", A, B, C, D).[2809@0,74, A, B, C, D]
 unsat(75,"1.606950348962299", A, B, C):- birthPlace( B, C), birthPlace( A, C), child( A, B),not  negspouse( A, B).
 negspouse( A, B):- birthPlace( B, C), birthPlace( A, C), child( A, B),not  unsat(75,"1.606950348962299", A, B, C).
:~ unsat(75,"1.606950348962299", A, B, C).[1606@0,75, A, B, C]
 unsat(76,"-1.5578050018096294", A, B, C, D):- relative( C, B), starring( D, C), starring( D, A),not  negspouse( A, B).
 negspouse( A, B):- relative( C, B), starring( D, C), starring( D, A),not  unsat(76,"-1.5578050018096294", A, B, C, D).
:~ unsat(76,"-1.5578050018096294", A, B, C, D).[-1557@0,76, A, B, C, D]
 unsat(77,"2.2423062611877245", A, B, C):- spouse( C, A), child( C, B),not  type( A,"FictionalCharacter"),not  type( B,"FictionalCharacter"),not  negspouse( A, B).
 negspouse( A, B):- spouse( C, A), child( C, B),not  type( A,"FictionalCharacter"),not  type( B,"FictionalCharacter"),not  unsat(77,"2.2423062611877245", A, B, C).
:~ unsat(77,"2.2423062611877245", A, B, C).[2242@0,77, A, B, C]
 unsat(78,"0.36537589476539933", A, B, C, D):- parent( C, A), D!= C, parent( D, B),not  negspouse( A, B).
 negspouse( A, B):- parent( C, A), D!= C, parent( D, B),not  unsat(78,"0.36537589476539933", A, B, C, D).
:~ unsat(78,"0.36537589476539933", A, B, C, D).[365@0,78, A, B, C, D]
 unsat(79,"-8.259458195332408", A, B, C, D):- birthPlace( A, C), location( C, D), birthPlace( B, D),not  negspouse( A, B).
 negspouse( A, B):- birthPlace( A, C), location( C, D), birthPlace( B, D),not  unsat(79,"-8.259458195332408", A, B, C, D).
:~ unsat(79,"-8.259458195332408", A, B, C, D).[-8259@0,79, A, B, C, D]
 unsat(80,"2.629435619708553", A, B, C):- successor( C, A), predecessor( B, C),not  negspouse( A, B).
 negspouse( A, B):- successor( C, A), predecessor( B, C),not  unsat(80,"2.629435619708553", A, B, C).
:~ unsat(80,"2.629435619708553", A, B, C).[2629@0,80, A, B, C]
 unsat(81,"-0.056485602134557444", A, B, C, D):- spouse( A, C), child( C, D), relative( B, D),not  negspouse( A, B).
 negspouse( A, B):- spouse( A, C), child( C, D), relative( B, D),not  unsat(81,"-0.056485602134557444", A, B, C, D).
:~ unsat(81,"-0.056485602134557444", A, B, C, D).[-56@0,81, A, B, C, D]
 unsat(82,"0.9280786876261972", A, B, C, D):- activeYearsStartYear( B, C), C< D, birthYear( A, D),not  negspouse( A, B).
 negspouse( A, B):- activeYearsStartYear( B, C), C< D, birthYear( A, D),not  unsat(82,"0.9280786876261972", A, B, C, D).
:~ unsat(82,"0.9280786876261972", A, B, C, D).[928@0,82, A, B, C, D]
 unsat(83,"2.1493112216403225", A, B, C, D):- spouse( C, B), parent( D, C), spouse( D, A),not  negspouse( A, B).
 negspouse( A, B):- spouse( C, B), parent( D, C), spouse( D, A),not  unsat(83,"2.1493112216403225", A, B, C, D).
:~ unsat(83,"2.1493112216403225", A, B, C, D).[2149@0,83, A, B, C, D]
 unsat(84,"-0.19105523676270936", A, B, C, D):- monarch( A, C), parent( C, D), spouse( B, D),not  negspouse( A, B).
 negspouse( A, B):- monarch( A, C), parent( C, D), spouse( B, D),not  unsat(84,"-0.19105523676270936", A, B, C, D).
:~ unsat(84,"-0.19105523676270936", A, B, C, D).[-191@0,84, A, B, C, D]
 unsat(85,"1.122050861640127", A, B, C, D):- successor( C, B), country( C, D), country( A, D),not  negspouse( A, B).
 negspouse( A, B):- successor( C, B), country( C, D), country( A, D),not  unsat(85,"1.122050861640127", A, B, C, D).
:~ unsat(85,"1.122050861640127", A, B, C, D).[1122@0,85, A, B, C, D]
 unsat(86,"0.36537589476539933", A, B, C, D):- parent( C, B), D!= C, parent( D, A),not  negspouse( A, B).
 negspouse( A, B):- parent( C, B), D!= C, parent( D, A),not  unsat(86,"0.36537589476539933", A, B, C, D).
:~ unsat(86,"0.36537589476539933", A, B, C, D).[365@0,86, A, B, C, D]
 unsat(87,"1.5619512461681122", A, B, C, D):- award( B, C), award( D, C), influencedBy( A, D),not  negspouse( A, B).
 negspouse( A, B):- award( B, C), award( D, C), influencedBy( A, D),not  unsat(87,"1.5619512461681122", A, B, C, D).
:~ unsat(87,"1.5619512461681122", A, B, C, D).[1561@0,87, A, B, C, D]
 unsat(88,"-8.66888370465667", A, B, C, D):- birthPlace( B, C), deathPlace( D, C), predecessor( D, A),not  negspouse( A, B).
 negspouse( A, B):- birthPlace( B, C), deathPlace( D, C), predecessor( D, A),not  unsat(88,"-8.66888370465667", A, B, C, D).
:~ unsat(88,"-8.66888370465667", A, B, C, D).[-8668@0,88, A, B, C, D]
 unsat(89,"2.948737172486149", A, B):- parent( A, B),not  negspouse( A, B).
 negspouse( A, B):- parent( A, B),not  unsat(89,"2.948737172486149", A, B).
:~ unsat(89,"2.948737172486149", A, B).[2948@0,89, A, B]
 unsat(90,"0.6887898751909893", A, B, C, D):- successor( C, A), deputy( D, C), primeMinister( B, D),not  negspouse( A, B).
 negspouse( A, B):- successor( C, A), deputy( D, C), primeMinister( B, D),not  unsat(90,"0.6887898751909893", A, B, C, D).
:~ unsat(90,"0.6887898751909893", A, B, C, D).[688@0,90, A, B, C, D]
 unsat(91,"2.3242432623517653", A, B, C):- parent( B, C), spouse( A, C),not  negspouse( A, B).
 negspouse( A, B):- parent( B, C), spouse( A, C),not  unsat(91,"2.3242432623517653", A, B, C).
:~ unsat(91,"2.3242432623517653", A, B, C).[2324@0,91, A, B, C]
 unsat(92,"1.302440050683028", A, B, C, D):- deathPlace( B, C), region( C, D), birthPlace( A, D),not  negspouse( A, B).
 negspouse( A, B):- deathPlace( B, C), region( C, D), birthPlace( A, D),not  unsat(92,"1.302440050683028", A, B, C, D).
:~ unsat(92,"1.302440050683028", A, B, C, D).[1302@0,92, A, B, C, D]
 unsat(93,"1.2496525460809755", A, B, C):- birthPlace( B, C), birthPlace( A, C), successor( A, B),not  negspouse( A, B).
 negspouse( A, B):- birthPlace( B, C), birthPlace( A, C), successor( A, B),not  unsat(93,"1.2496525460809755", A, B, C).
:~ unsat(93,"1.2496525460809755", A, B, C).[1249@0,93, A, B, C]
 unsat(94,"6.668329895093629", A, B, C):- spouse( A, C), B!= C, type( B,"Thing"),not  negspouse( A, B).
 negspouse( A, B):- spouse( A, C), B!= C, type( B,"Thing"),not  unsat(94,"6.668329895093629", A, B, C).
:~ unsat(94,"6.668329895093629", A, B, C).[6668@0,94, A, B, C]
:- spouse( A, B), negspouse( A, B).
 parent("Charles_II_of_Spain","Mariana_of_Austria").
 spouse("Mariana_of_Austria","Philip_IV_of_Spain").
 parent("Charles_II_of_Spain","Philip_IV_of_Spain").
 type("Mariana_of_Austria","Person").
 type("Mariana_of_Austria","Agent").
 type("Mariana_of_Austria","Royalty").
 type("Mariana_of_Austria","Thing").
 type("Charles_II_of_Spain","Person").
 type("Charles_II_of_Spain","Agent").
 type("Charles_II_of_Spain","Royalty").
 type("Charles_II_of_Spain","Thing").
