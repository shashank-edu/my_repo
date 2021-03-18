class Employee:
    company ="Google"
    ecode =102
class Freelance:
    company ="visa"
    level=0
    def upgradeLevel(self):
        self.level=self.level +1
class Programmer(Employee,Freelance):
    name="rohit"

p=Programmer()
p.upgradeLevel()
print(p.level)
print(p.company)  #here as because we write Employee first on the parenthesis thus its member will get priority 
