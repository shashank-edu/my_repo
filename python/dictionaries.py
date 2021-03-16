# here we make dictionary by using curly braces 

mydict={'shashank':'001', 'golu':'002', 'rachit': '003'}
print(mydict)
print(type(mydict))


#here we are making dictionary by using dict() function

new_dict=dict(shashank='001', golu='002', rachit= '003')
#in this we have to use equal to aign and also we don't put quotation on names
print(mydict)
print(type(mydict))


# here we know how to " access dictionary "

print(new_dict['golu'])  #by specifying key value

print(new_dict.keys())   #by using key function

print(new_dict.values()) #by using key values

print(new_dict.get('shashank'))  #by using get function

for x in mydict:   #by using for loop
    print(x)

# if i have to access only values by for loop then we use

for x in mydict.values():
    print(x)

for x,y in mydict.items(): 
    print(x,y)   # for retrieve both the data as key and value so we take both the variable 
