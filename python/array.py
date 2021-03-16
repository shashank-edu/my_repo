'''
import array
a=array.array('i',  [1,2,3,4,5,6,7,8])  
#here first array is name of the module
#second array is the array constructor 
# then by 'i' we specified the type code i.e which type of value does the array hold
print(a)

'''

'''
import array as arr
# arr here is alias name 
a=arr.array('i',[1,2,3,4,5,6,7,8])
print(a)
'''

from array import *
a=array('i',[1,2,4,5,6,7,8])
# here array is a constructor
print(a)

print("lenth of array is")
print(len(a))
