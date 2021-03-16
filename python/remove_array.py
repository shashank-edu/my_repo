import array as arr

a=arr.array('i',[1,2,3,4,5,6,7])
print(a)
print("the element poped with no argument ",a.pop())
print("now the array item is",a)
print("we remove the value of index 3 is",a.pop(3))
print("now the array item is",a)
print("now we remove the element ",a.remove(1))

# by remove function we have to pass the value which we have to remove not the index no.
#remove function doesn't not return any thing
#if multiple of that value is present it will remove the first occurence in the array
print(a)

'''
pop function either take no parameter or paremeter as a index which has to remove
if not specified it will remove the last element in the array '''

'''
remove function must take one paramenter which the function has to be remove it self the value not index no.
'''
