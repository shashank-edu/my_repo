def increment(num):
    try:
        # return int(num) +1
        w= int(num)+1
    except:
        raise ValueError("this is not good")
    else:   #else block run only when their is no exception occured in the try block
        print("their is no exception occured")
        return w

b=input("enter a number: ")
a=increment(b)
print("this code is run successful",a)