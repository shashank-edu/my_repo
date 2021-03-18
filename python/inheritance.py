class Employee:
    company ="Google"

    def showDetail(self):
        print("this is an employee")

# here we are doing is we make a child class named named Programmer which inherit the parent class named Employee
class Programmer(Employee): # --> single inheritance
    language="Python"
    company ="Youtube"
    def getLanguage(self):
        print("the language is {self.Language}")
    def showDetail(self): #this function is overridden 
        print("this is an Programmer")

e =Employee()
e.showDetail()
p=Programmer()
p.showDetail()
print(p.company)