#!/bin/sh

# if else if 
if [ $1 -eq $2 ]
then
echo "A is equal to B"
elif [ $1 -gt $2 ]
then
echo "A is greater than B"
elif [ $1 -lt $2 ]
then 
echo "A is less than B"
else
echo "None of the conditions met"
fi

