
# creating dictionary by using {} 

mydict={
    'fast':'in a quick manner',
    'shashank':'a coder',
    'marks': [1,2,4,56],
    'anotherdict':{'motu':'player','golu':'computerscience'}
    ,1:2
}

# printing all key values 
print(mydict.keys())  # by default it is dict_keys type but we can typecast it to list
print(type(mydict.keys())) 
print(list(mydict.keys()))

print(mydict.values()) #print the values of dictionary
print(mydict.items())  #return the key and values pairs

update_dic={
    'mau':'computer',
    'mau mau':'mau billi',
    'shashank':'a python coder'
}

mydict.update(update_dic) #append another dictionary to exisisting dictionary
# and if any existing key word is written, so by updating it will update the value of that keyword
print(mydict)

print(mydict.get('shashank')) #it will show the value of the key 
print(mydict['shashank']) # but we can do this by fallowing way also 
''' so here the advantage of using get() is if that key is not present in the 
dictionary get() function throw execption and return none but by another function error arives and 
system can't handle this error
  '''
print(mydict.get('shashank2')) #return none
print(mydict['shashank2']) #error


