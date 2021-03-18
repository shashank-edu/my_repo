# snake water gun
import random
def game( computer):
    you=input("Yours's turn: snake(s) water(w) or gun(g)?" ) 
    if computer == you:
        return None
    if computer == 's':
        if you == 'w':
            return False
        elif you == 'g':
            return True
    if computer == 'w':
        if you == 'g':
            return False
        elif you == 's':
            return True
    if computer == 'g':
        if you == 'w':
            return True
        elif you == 's':
            return False 


def selector():
    randNo= random.randint(1,3)
    print("Computer's turn: snake(s) water(w) or gun(g)?" ) 
    if randNo == 1:
       return ('s')
    elif randNo == 2:
        return ('w')
    elif randNo == 3:
        return ('g')
    


computer=selector()
a=game(computer)

if(a is False ):
    print("You Lose") 
elif(a is True):
    print("You win")
elif(a is None):
    print("Tie please select again")
    computer=selector()
    game(computer)
    