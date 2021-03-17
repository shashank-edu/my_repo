mydict={
    'fast':'in a quick manner',
    'shashank':'a coder',
    'marks': [1,2,4,56],
    'anotherdict':{'motu':'player','golu':'computerscience'}
}

print(mydict['fast'])
print(mydict['marks'])
print(mydict['anotherdict']['golu'])  #nested dictionary
# mydict ke andar jo key hai anotherdict us ke andar ki key golu ki kya value hai wo print ho jayegi

mydict['marks'] =[23,54,12] #dictionary is mutable
print(mydict['marks'])

# key in dictionary should be unique 
