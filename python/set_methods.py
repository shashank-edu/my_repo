#creating an empty set
b=set()
print(type(b)) 

#adding values to empty set
b.add(4)
b.add(5)

print(b)

# we can't add list into set because list is editable but set is not and same with the dictionary
# b.add([2,4,6,6]) # error
# b.add({2:45,1:32}) #error

# but we can add tuple to set
b.add((2,3,45,6))
print(b)

# removing the element from set 
b.remove(5)
# b.remove(52342) #if the value is not available in the set it will show error
print(b)

print(b.pop()) #it will remove the any value and return 
print(b) 

# s.clear() empties the set

# s.union  it will return the value which is not common in the two sets
# s.intersection()  it will return the value which is common in two sets