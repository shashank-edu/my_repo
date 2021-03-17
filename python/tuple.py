# creating a tuple using parenthesis () 
t =(1,23,34,65,7,2 )

# printing the element of the tupple 
print(t[2])

# cannot update (i.e immutable) the value of tuple  (this is the  major difference b/w list and tuple )
# t[3]=67  #throws an error

t1=() #empty tuple
print(t1)
print(type(t1))

t2=(2)   #this is became int type thus for making a single value tuple it is must to add a common also
print(type(t2))
print(t2)

t3=(4,) # common must be added to make an single value tuple
print(type(t3))
print(t3)