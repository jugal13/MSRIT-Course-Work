#!/bin/sh

#print pattern
# 0
# 10
# 210
# 3210
a=0
while [ $a -lt 6 ]
do
b=$a
while [ $b -ge 0 ]
do
echo "$b\c"
b=`expr $b - 1`
done
echo
a=`expr $a + 1`
done

