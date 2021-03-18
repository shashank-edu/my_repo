class Employee:
    company ="Bharat Gas"
    salary = 5600
    salarybonus= 400

    @property  #it is a property not a function
    def totalSalary(self):
        return self.salary + self.salarybonus 

    @totalSalary.setter
    def totalSalary(self ,val):
        self.salarybonus = val - self.salary

e=Employee()
print(e.totalSalary) #thus as totalSalary is a property not function so we don't apply parenthesis in it
e.totalSalary=5800   
print(e.salary)
print(e.salarybonus)