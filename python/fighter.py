from random import random


import random

p1 = 60
p2 = 60

attack = 0

while(p1>0) and (p2>0):
   attack=random.randint(1, 7)
   print('Attack: ', attack)
   p1-=attack
   attack=random.randint(1, 7)
   p2-=attack
   print('Attack: ', attack)
   print('Player1: ', p1)
   print('Player2: ', p2)