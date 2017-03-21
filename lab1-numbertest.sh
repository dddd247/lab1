#!/bin/bash
# this program show how the number print
# file :2017/03/21
# Made by E24039091


echo "Please inpput a number:"
read number1
echo "This is your input => $number1"
read number1
declare -i number2=3*number1+1
declare -i number3=number1/2

while["$number" !="1"]
do
if["$number"%2=1];then
        echo "the new number is=> $number2"
else
        echo "the new number is=> $number3"
fi
done
echo "done0"



