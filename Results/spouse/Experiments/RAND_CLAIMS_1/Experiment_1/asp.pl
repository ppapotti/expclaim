 spouse( A, B):- parent( C, B), parent( C, A).
 spouse( A, B):- occupation( A, C), occupation( D, C), spouse( D, B).
 spouse( A, B):- child( A, C), parent( C, B).
 spouse( A, B):- relation( C, A), child( C, B).
 spouse( A, B):- parent( C, B), parent( C, A), type( A,"Royalty"), type( B,"Royalty").
 spouse( A, B):- predecessor( C, B), spouse( D, C), successor( A, D), type( A,"Royalty"), type( B,"Royalty").
 spouse( A, B):- predecessor( C, B), spouse( D, C), successor( A, D).
 spouse( A, B):- child( A, C), child( B, C).
 spouse( A, B):- birthPlace( B, C), country( D, C), almaMater( A, D).
 spouse( A, B):- spouse( C, B), birthDate( C, D), birthDate( A, D).
 spouse( A, B):- starring( C, A), writer( C, B), director( C, B).
 spouse( A, B):- activeYearsStartYear( A, C), C>= C, activeYearsStartYear( B, C).
 spouse( A, B):- deathPlace( B, C), largestCity( D, C), deathPlace( A, D).
 spouse( A, B):- parent( C, A), parent( C, B).
 spouse( A, B):- spouse( B, A).
 spouse( A, B):- termPeriod( A, C), activeYearsEndDate( C, D), deathDate( B, D).
 spouse( A, B):- writer( C, B), starring( C, A).
 spouse( A, B):- occupation( A, C), occupation( B, C).
 spouse( A, B):- nationality( A, C), country( D, C), birthPlace( B, D).
 spouse( A, B):- parent( C, A), parent( C, B), type( A,"Royalty"), type( B,"Royalty").
 spouse( A, B):- successor( C, A), birthPlace( C, D), restingPlace( B, D).
 spouse( A, B):- birthPlace( B, C), state( D, C), birthPlace( A, D).
:- spouse( A, B), negspouse( A, B).
 negspouse( A, B):- parent( B, C), spouse( A, C).
 negspouse( A, B):- birthPlace( B, C), restingPlace( D, C), predecessor( A, D).
 negspouse( A, B):- monarch( A, C), parent( C, D), spouse( B, D).
 negspouse( A, B):- birthPlace( A, C), location( C, D), birthPlace( B, D).
 negspouse( A, B):- birthPlace( A, C), country( D, C), child( B, D).
 negspouse( A, B):- spouse( A, C), child( C, D), relative( B, D),not  type( A,"FictionalCharacter"),not  type( B,"FictionalCharacter").
 negspouse( A, B):- deathYear( B, C), C< D, activeYearsStartYear( A, D).
 negspouse( A, B):- spouse( C, B), parent( D, C), spouse( D, A).
 negspouse( A, B):- parent( B, A).
 negspouse( A, B):- child( A, B).
 negspouse( A, B):- predecessor( A, C), lieutenant( D, C), successor( D, B).
 negspouse( A, B):- birthPlace( B, C), deathPlace( D, C), predecessor( D, A).
 negspouse( A, B):- parent( A, C), parent( C, D), spouse( D, B), type( A,"Royalty"), type( B,"Royalty").
 negspouse( A, B):- influencedBy( B, C), deathPlace( C, D), birthPlace( A, D).
 negspouse( A, B):- occupation( A, C), occupation( D, C), influenced( D, B).
 negspouse( A, B):- successor( A, C), predecessor( D, C), primeMinister( D, B).
 negspouse( A, B):- parent( C, B), D!= C, parent( D, A).
 negspouse( A, B):- influencedBy( C, B), influenced( C, D), influencedBy( D, A),not  type( A,"Writer"),not  type( B,"Writer").
 negspouse( A, B):- successor( C, A), deputy( D, C), primeMinister( B, D).
 negspouse( A, B):- influencedBy( C, B), influenced( C, D), influencedBy( D, A).
 negspouse( A, B):- successor( C, B), birthPlace( C, D), region( A, D).
 negspouse( A, B):- profession( B, C), D!= C, profession( A, D).
 negspouse( A, B):- parent( A, C), spouse( B, C).
 negspouse( A, B):- birthPlace( A, C), country( C, D), leader( D, B).
 negspouse( A, B):- spouse( C, B), child( C, A),not  type( A,"FictionalCharacter"),not  type( B,"FictionalCharacter").
 negspouse( A, B):- influencedBy( A, C), deathPlace( C, D), deathPlace( B, D).
 negspouse( A, B):- spouse( C, B), child( C, A).
 negspouse( A, B):- monarch( A, C), predecessor( D, C), monarch( B, D).
 negspouse( A, B):- successor( C, B), country( C, D), country( A, D),not  type( A,"OfficeHolder"),not  type( B,"OfficeHolder").
 negspouse( A, B):- relative( C, B), starring( D, C), starring( D, A).
 negspouse( A, B):- successor( C, A), predecessor( B, C).
 negspouse( A, B):- profession( A, C), occupation( D, C), predecessor( B, D).
 negspouse( A, B):- deathPlace( B, C), region( C, D), birthPlace( A, D).
 negspouse( A, B):- parent( A, C), parent( C, D), spouse( D, B).
 negspouse( A, B):- musicalArtist( C, B), album( C, D), producer( D, A).
 negspouse( A, B):- successor( A, B).
 negspouse( A, B):- spouse( C, A), child( C, B),not  type( A,"FictionalCharacter"),not  type( B,"FictionalCharacter").
 negspouse( A, B):- deathPlace( B, C), region( D, C), governor( D, A).
 negspouse( A, B):- parent( A, B).
 negspouse( A, B):- spouse( A, C), child( C, B).
 negspouse( A, B):- successor( B, C), successor( C, A).
 negspouse( A, B):- influencedBy( C, B), influenced( C, A).
 negspouse( A, B):- office( B, C), orderInOffice( A, C).
 negspouse( A, B):- birthPlace( B, C), birthPlace( A, C), child( A, B).
 negspouse( A, B):- award( B, C), award( D, C), influencedBy( A, D).
 negspouse( A, B):- successor( C, B), country( C, D), country( A, D).
 negspouse( A, B):- party( A, C), splitFromParty( D, C), party( B, D).
 negspouse( A, B):- negspouse( A, C), B!= C, type( B,"Thing").
 negspouse( A, B):- deathPlace( A, C), deathPlace( D, C), influenced( D, B).
 negspouse( A, B):- parent( C, A), C!= D, parent( D, B).
 negspouse( A, B):- spouse( B, C), parent( A, C).
 negspouse( A, B):- spouse( B, C), relative( D, C), parent( D, A).
 negspouse( A, B):- birthPlace( B, C), birthPlace( A, C), successor( A, B).
 negspouse( A, B):- successor( A, C), birthPlace( C, D), deathPlace( B, D).
 negspouse( A, B):- spouse( C, B), parent( D, C), spouse( A, D), type( A,"Royalty"), type( B,"Royalty").
 negspouse( A, B):- predecessor( C, B), country( C, D), country( A, D).
 negspouse( A, B):- country( B, C), deathPlace( D, C), spouse( D, A).
 negspouse( A, B):- nationality( B, C), deathPlace( D, C), predecessor( D, A).
 negspouse( A, B):- spouse( C, A), child( C, B).
 negspouse( A, B):- spouse( C, B), parent( D, C), spouse( A, D).
 negspouse( A, B):- successor( C, B), monarch( D, C), predecessor( D, A).
 negspouse( A, B):- successor( B, C), predecessor( C, B), successor( A, B).
 negspouse( A, B):- birthPlace( B, C), deathPlace( D, C), influencedBy( A, D).
 negspouse( A, B):- deathPlace( A, C), birthPlace( D, C), influencedBy( D, B).
 negspouse( A, B):- parent( C, A), D!= C, parent( D, B).
 negspouse( A, B):- successor( A, C), commander( D, C), battle( B, D).
 negspouse( A, B):- successor( C, A), primeMinister( D, C), predecessor( D, B).
 negspouse( A, B):- spouse( A, C), child( C, D), relative( B, D).
 negspouse( A, B):- successor( A, C), governor( C, B).
 negspouse( A, B):- activeYearsStartYear( B, C), C< D, birthYear( A, D).
 negspouse( A, B):- child( A, B),not  type( A,"FictionalCharacter"),not  type( B,"FictionalCharacter").
 negspouse( A, B):- predecessor( C, B), predecessor( A, C).
%birthPlace("Clyde_H._Smith","United_States").
%successor("Margaret_Chase_Smith","William_Hathaway").
%spouse("Clyde_H._Smith","Margaret_Chase_Smith").
%successor("Margaret_Chase_Smith","Norris_Cotton").
%birthPlace("William_Hathaway","United_States").
%birthPlace("Norris_Cotton","United_States").
%predecessor("William_Hathaway","Margaret_Chase_Smith").
%deathPlace("Clyde_H._Smith","United_States").
%deathPlace("William_Hathaway","United_States").
%type("Margaret_Chase_Smith","Person").
%type("Margaret_Chase_Smith","Agent").
%type("Margaret_Chase_Smith","OfficeHolder").
%type("Margaret_Chase_Smith","Thing").
%type("Clyde_H._Smith","Person").
%type("Clyde_H._Smith","Agent").
%type("Clyde_H._Smith","Congressman").
%type("Clyde_H._Smith","Politician").
%type("Clyde_H._Smith","Thing").
%0.06001800972625295 parent("Margaret_Chase_Smith","Clyde_H._Smith").
%0.10409389104263336 successor("Margaret_Chase_Smith","Clyde_H._Smith").
%0.10810516004942952 parent("Clyde_H._Smith","Margaret_Chase_Smith").
%0.277772344022583 child("Margaret_Chase_Smith","Clyde_H._Smith").
