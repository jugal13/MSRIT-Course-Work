#!/bin/sh

# while loop stops at 5
a=1
while [ $a -lt 10 ]
do
echo $a
if [ $a -eq 5 ]
then
break
fi
a=`expr $a + 1 `
done
