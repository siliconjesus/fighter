from random import randint

def coinflop(bottom, top):
    coin=randint(bottom, top)
    return(coin)
    
# coin=coinflop(1,2)

# print(coin)
# print(randint(1,2))

i = 0
while (i < 10):
   coin=coinflop(1,2)
   print(coin)
   i+=1