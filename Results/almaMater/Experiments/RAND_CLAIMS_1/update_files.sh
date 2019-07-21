FILES=Evidence/*

for file in $FILES;
do

tail -n +53 $file > $file.1
rm $file
cat rules | cat - $file.1 >temp && mv temp $file
rm $file.1
done
