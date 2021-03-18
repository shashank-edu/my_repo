class Employee:
    company ="Google"
    def getsalary(self):
        print("salary is 100K")
        print(f"salary is {self.salary}")
    @staticmethod      
    def greet():  #here we don't need to write self
        print("Good Morning, Sir")
   

shashank= Employee()
# shashank.getsalary()  = Employee.getsalary(shashank)
# shashank.salary= 100000
# shashank.getsalary()

# if we write @staticmethod above any function by this we ensure that 
# shashank.greet() will not change to Employee.greet(shashank)
shashank.greet() 

