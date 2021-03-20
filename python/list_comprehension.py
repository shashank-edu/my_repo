''' this is use to create a list from existing list
and this line we can also use for dictionary and set'''
a=[32,4,4,543,5,67,7,877,878,99]

#b=[]
# for item in a:
#     if item%2 ==0:
#         b.append(item)
    
# print(b)

# above function can also be performed in a line which is as
b=[i for i in a if i%2==0]
# that means for b.append=i , for i in a  if i%2 == 0
print(b)

t=[1,4,2,1,4,2,1,2,3]
s={i for i in t}
print(s)  #as in set their is no repeated values thus it will ignore the repeated
#value and make a set

