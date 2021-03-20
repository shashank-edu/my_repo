from functools import reduce
l=[1,32,4,5,7,8,9]

sum =lambda a,b:a+b  # def sum(a, b): return a+b

val=reduce(sum,l) #it will perform the definite task define to each and every value  or element in the list
print(val)
