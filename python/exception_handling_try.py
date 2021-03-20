while(True):
    print("press q to quit")
    a= input("enter a number: ")
    if a == 'q' :
        break
    try:
        a=int(a)
        if a>6:
            print("you entered a number greater than 6 ")
    except Exception as e: #as e means excpetion is consider as e in a short form only
        print(e)            # i.e 'e' is just an alter name of Exception
    
    ''' we can also run as 
    except Exception :
        print(Exception) '''

print("thanks for playing this game")