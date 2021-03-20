a= 54 #global variable
def fun1():
    global a  #this means we are using global a
    a=8 #local variable
    print(a)

fun1()   
print(a)
