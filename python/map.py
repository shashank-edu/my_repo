def square(num):
    return num*num

l=[1,2,4]
print(l)
# mathod 1
l2 =[]
for item in l:
    l2.append(square(item))
print(l2)

# method 2
print(list(map(square,l)))
# this means map the function of square by l list and then it return its object which we
#type cast its object to list
print(l)