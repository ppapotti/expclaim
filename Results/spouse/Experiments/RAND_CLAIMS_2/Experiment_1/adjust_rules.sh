FILES=BACK_Evidence/*


for file in $FILES;
do
sed -i 's/negspouse(A,C),B!=C/spouse(A,C),B!=C/g' $file

done





FILES=BACKUP_ASP_Evidence/*




for file in $FILES;
do
sed -i 's/negspouse(A,C),B!=C/spouse(A,C),B!=C/g' $file

done






FILES=MAP_Evidence/*

for file in $FILES;
do
sed -i 's/negspouse(A,C),B!=C/spouse(A,C),B!=C/g' $file

done

FILES=ASP_Evidence/*

for file in $FILES;
do
sed -i 's/negspouse(A,C),B!=C/spouse(A,C),B!=C/g' $file

done

FILES=Evidence/*

for file in $FILES;
do
sed -i 's/negspouse(A,C),B!=C/spouse(A,C),B!=C/g' $file

done

