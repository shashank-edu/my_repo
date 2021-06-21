
arr =[1,2,3,4,5,6]
a=[]
for i in arr[len(arr)::-1]:
    a.append(i)

print(a)
print(arr[::-1])

# time complexity O(n)
