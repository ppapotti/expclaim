FILES=BACK_Evidence/*


for file in $FILES;
do
sed -i 's/negalmaMater(A,C),B!=C/almaMater(A,C),B!=C/g' $file

done





FILES=BACKUP_ASP_Evidence/*




for file in $FILES;
do
sed -i 's/negalmaMater(A,C),B!=C/almaMater(A,C),B!=C/g' $file

done






FILES=MAP_Evidence/*

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

