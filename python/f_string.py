'''string formating -> means hum koe string likhe or us ke beech me koe variable 
insert karana chahatae hai lo kr de ''' 

import math as mth

#first way
me ="shashank"
a1=3
a="this is %s %s"%(me,a1) #we pass a tulpe into the string
print(a)

#second way
a="this is {} {}"  # this is same as a="this is {0} {1}" 
b=a.format(me,a1)
print(b)

a="this is {1} {0}"   #in this from the starting it will print first sequence variable
# as 'me' and then print second sequence variable 'a1'
b=a.format(me,a1)
print(b)

#third way -> f-string i.e fast-string #this is better alternative of concatination
print(f"this is {me} {a1} {4*34} {mth.cos(30)}") 