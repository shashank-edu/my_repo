fruits = ["banana","managoes","grapes","apple"]
for item in fruits: #here first one by one string present in fruits assign to item
    print(item)  

# range function
for i in range(8): #here i value goes through 0 to 7 by default
    print(i)
# but if we want to start from any value , we have to mention it as an argument

for i in range(2,8): # here i value goes from 2 to 7
    print(i)

# if we want to skip certain value in the range thus we have to specify it also as a step size

for i in range(2,8,2):
    print(i) #i.e har dusara item dega , by default yeh 1 hota hai  