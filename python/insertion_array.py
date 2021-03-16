import array as arr
a=arr.array('d',[1.4,2.2,34.7,5.4])
print(a)
print("append 3.45 into the array")
a.append(3.45)
print(a)
print("extend the values to array as 8,2.5,0.001")
a.extend([8,2.5,0.001])
# in append function we have to use square brackets into the parenthesis
print(a)
print("insert a value into 3rd index as 22.33")
a.insert(3,22.33)
print(a)
