try:
    a=int(input("enter a value: "))
    c=1/a
    print(c)

# by this way we can handle different exception in a different way
except ValueError as e:
    print("please enter a valid value")
    print(e)

except ZeroDivisionError as p:
    print("make sure you are not dividing by zero")
    print(p)
except:
    print("unknown exception")

print("thank you for using this code")