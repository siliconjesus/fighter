#!/bin/bash

########
#### in bash - all variables are global unless specifically stated otherwise
#### This is terrible for a programming language, but in reality it makes some things easier
#### There's also not a good way to pass variables by reference, so this is still a tangled mess
########

coinflip () {
   flip=$(( RANDOM % 1 + 1 ))
}

attack () {
   atk=$(( RANDOM %6 +1 ))
}

battle () {
   coinflip
   if (( $flip == 1 ))
   then
      attack
      echo Player 1 attacks for ${atk}!
      f2=$(( $f2 - $atk ))
      attack
      echo Player 2 attacks back for ${atk}!
      f1=$(( $f1 - $atk ))
      echo Player 1 has $f1 HP left!
      echo Player 2 has $f2 HP left!
   else
      attack
      echo Player 2 attacks for ${atk}!
      f1=$(( $f1 - $atk ))
      thisatk = $?
      echo Player 1 attacks back for ${atk}!
      f2=$(( $f2 - $atk ))
      echo Player 1 has $f1 HP left!
      echo Player 2 has $f2 HP left!
   fi
}

f1=60
f2=60

while (( ${f1} > 0 && ${f2} > 0 ))
do
   battle
   echo ============
done