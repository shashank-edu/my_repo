try:
    i =int(input("enter a number: "))
    c=1/i
except Exception as e:
    print(e)
    exit()  #inspite of exit function finally always run
finally: #finally always run either error caused or not 
    print("we are done!")