mydict={'shashank':'001', 'golu':'002', 'rachit': '003'}
print(mydict)
print(type(mydict))

# here we updated and adding new value to hash table

mydict['shashank']='005'
mydict['poku'] ='007'
print(mydict)


# now here we deleting the value

mydict.pop('golu') #pop function take one paramenter and that is going to remove the pair value of that key
# it return the value which is pop out
print(mydict)

mydict.popitem() # popitem function remove the last function from the dictionary
# popitem() also return the value of pair which remove
print(mydict)

del mydict['shashank']  #by using delete function
# by del nothing is return
print(mydict)

