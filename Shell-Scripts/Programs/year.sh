#!/bin/sh

# check if year is leap or not
echo "Enter the year\c"
echo
read year
ans1=`expr $year % 4`
ans2=`expr $year % 100`
ans3=`expr $year % 400`
if [ $ans1 -eq 0 -a $ans2 -ne 0 -o $ans3 -eq 0 ]
then 
echo "It is a leap year"
else
echo "It isnt a leap year"
fi
