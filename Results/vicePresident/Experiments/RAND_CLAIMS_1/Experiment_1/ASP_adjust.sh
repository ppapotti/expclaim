FILES=ASP_NO_BING_Evidence/*

for file in $FILES;
do
cat $file | awk -F ' *' '$1 ~ /^%?[0-9.]+$/ {$0=""}1' >$file.1
mv  $file.1 $file
done
