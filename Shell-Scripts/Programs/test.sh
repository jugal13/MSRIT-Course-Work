#!\bin\bash

#print odd numbers
for x in {1..100}
do
q=`expr $x % 2`
if [ $q == 0 ]
then continue
else
echo $x
fi
done