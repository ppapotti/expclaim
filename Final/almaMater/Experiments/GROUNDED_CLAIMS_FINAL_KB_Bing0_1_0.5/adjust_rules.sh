FILES=ASP_NO_BING_Evidence/*

for file in $FILES;
do
sed -i 's/negalmaMater(A,C),B!=C/almaMater(A,C),B!=C/g' $file

done


FILES=MAP_NO_BING_Evidence/*

for file in $FILES;
do
sed -i 's/negalmaMater(A,C),B!=C/almaMater(A,C),B!=C/g' $file

done

FILES=ASP_Evidence/*

for file in $FILES;
do
sed -i 's/negalmaMater(A,C),B!=C/almaMater(A,C),B!=C/g' $file

done

FILES=Evidence/*

for file in $FILES;
do
sed -i 's/negalmaMater(A,C),B!=C/almaMater(A,C),B!=C/g' $file

done

