# in this any random no. is generated and i have to guess the no. and it will tell the no. i guess is larger or smaller then the no generated

import random
n=20   # the no. generated will be b/w 0 to 20

to_be_guessed= int(n* random.random()) + 1
guess=0
while guess != to_be_guessed:
    guess= int(input("New number: "))
    if guess > 0:
        if guess > to_be_guessed:
            print("Number too large")
        elif guess < to_be_guessed:
            print("Number is too small")
    
    else:
        print("sorry that you are giving up!")
        break
else:
    print("congrats. you made it!")

