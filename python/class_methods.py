class Employee:
    company ="Google"
    salary =100
    location ="delhi"

    # def changeSalary(self,sal):
     #   self.salary=sal
        #self.__class__.salary=sal  #by this we can change class attribute

#another form to change the class attribute is 
    @classmethod #classmethod ke andar hum jp kuch bhi karege wo class me change hoga   
    def changeSalary(cls,sal): #here cls is a class reference
        cls.salary =sal

e= Employee()
print(e.salary) 
e.changeSalary(455)  #its added a instance attribute  but the class attribute is same it doesn't change
print(e.salary)
print(Employee.salary)