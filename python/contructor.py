class Employee:
    company ="Google"

    def __init__(self, name , salary, subunit):
        self.name=name
        self.salary=salary
        self.subunit=subunit
        print("employee is created")

    def get_detail(self):
        print(f"the name of the employee is {self.name}")
        print(f"the salary of the employee is {self.salary}")
        print(f"the subunit of the employee is {self.subunit}")

    def getsalary(self):
        print("salary is 100K")
        print(f"salary is {self.salary}")
    @staticmethod      
    def greet():  #here we don't need to write self
        print("Good Morning, Sir")

shashank = Employee("shashank",100,"youtube")
shashank.get_detail()