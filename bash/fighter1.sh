#!/bin/bash

f1=60
f2=60

while (( ${f1} > 0 && ${f2} > 0 ))
do
   atk=$(( RANDOM % 6 + 1 ))
   echo "Attack is: " $atk
   f1=$(( $f1 - $atk ))
   echo "Fighter 1: " $f1
   atk=$(( RANDOM %6 + 1 ))
   echo "Attack is: " $atk
   f2=$(( $f2 - $atk ))
   echo "Fighter 2: " $f2
   echo "============"
done