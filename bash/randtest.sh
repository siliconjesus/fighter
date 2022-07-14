#!/bin/bash

function coinflip () {
    coin=$(( RANDOM %2 +1 ))
}

for i in {1..10}
do
   coinflip
   echo $coin
done