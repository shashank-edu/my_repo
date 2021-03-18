class Employee:
    company ="Google"
    def getsalary(self):
        print("salary is 100K")
        print(f"salary is {self.salary}")
    #self.salary ka mtlb jis pe run kr rahe ho us ki salary   

shashank= Employee()
# shashank.getsalary()  = Employee.getsalary(shashank)
#  this above written line get converted to # Employee.getsalary(shashank)
#which passes a argument  and self take the address of the parameter we pass when we calls the function

shashank.salary= 100000
shashank.getsalary()