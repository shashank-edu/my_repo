a="shashank"
b="gupta"
c=a+b
print(c)

# string slicing

print(c[0:3])
print(c[:5]) #is same as print(c[0:5])
print(c[2:]) #is same as print(c[2:len(c)])

# slicing with skip value 

print(c[1:7:2]) # print from index 1 to index 6 and in b/w skip one value

# string functions
story ="once upon a time their is a intelligent boy whoes name is shashank and a mobile"
print(len(story)) #this will tell the length of the story i.e no. of character it in including spaces

# string.endswith('')  function it return true or false
  
print(story.endswith("name"))  # return false as string doesn't ends with name
print(story.endswith("shashank")) # as string ends with shashank thus it returns true

# string.count('')  function tells the no. of character present in string

print(story.count('sh'))  # tell the no. of times 's' occured in string


#string.capatilize()  it will captilized the first character of the string

print(story.capitalize())

#string.find('') #it will find any string is either present on another string or not

print(story.find("shashank")) #and return the index of first charater of the string

# string.replace("","") it will replace the string with another string

print(story.replace("shashank","shashank gupta"))
# it will replaces all the occurence not only the first one 
print(story.replace("a","the",2)) 
# here 2 idicates the no. of character or string to be replaced


    

