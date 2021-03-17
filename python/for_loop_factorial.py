num= int(input("the number : "))
factorial =1

if num<0:
    print("no. must be positive")
elif num == 0:
    print("factorial = 1")
else:
    for i in range(1,num+1):
        factorial *=i
    print("the factorial is :",factorial)
