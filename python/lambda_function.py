# def func(a):
#     return a+5

# is equal to 
func = lambda a: a+5 # lambda function we use to simplify the code where we have to pass function as an argument 
# this means a as an argument lega and a+5 us ki return value hogi 

square = lambda x: x*x
sum = lambda a,b,c : a+b+c
# it is just an convinience that we define your function in one line 
x=3
print(func(x))
print(square(x))
print(sum(x,x+1,x+2))


