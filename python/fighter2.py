from random import randint

def coinflip():
   coin=randint(1, 2)
   return(coin)

def attack(player, playername):
   attack=randint(1,7)
   print('Attack incoming for ', attack, 'damage!')
   player-=attack
   if player < 0:
      print('Oh no!  ', playername, 'has been knocked out!')
   else:
      print(playername, ' has ', player, ' HP remaining!')
   return(player)

p1 = 60
p2 = 60

while(p1>0) and (p2>0):
   # coinflip to determine who goes first:
   first=coinflip()
   print(first)
   if first == 1:
      p1=attack(p1, "Player 1")
      p2=attack(p2, "Player 2")
      if (p1 < 0) or (p2 < 0):
         break # UGLY
   else:
      p2=attack(p2, "Player 2")
      p1=attack(p1, "Player 1")