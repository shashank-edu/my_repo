class Employee:
    company ="Google"
    salary =100


# creating abject of Employee class 
harry=Employee()
shashank=Employee()

# creating instance attribute salary for both the object
# harry.salary =400
# shashank.salary=500 

shashank.salary=300  
''' first it check the instance member then it check the class memeber '''

print(harry.salary)
print(shashank.salary)  

