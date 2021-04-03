''' Employee organization leave '''
class Employee:
    def __init__(self,name,designaton,salary,leave_b):
        self.emp_name=name
        self.designation=designaton
        self.salary=salary
        self.leaveBalance = leave_b
        

class Organization:
    def __init__(self,emp_list):
        self.emp_list=emp_list

    def display_leaves(self,name):
        for i in self.emp_list:
            if i.name == name:
                for a,b in i.leaveBalance.items(): #important -> use of items() function on dictionary
                    print(a,":",b)

    def checkLeaveEligibility(self,name,leave_type,leave_days):
        for i in self.emp_list:
            if i.emp_name == name:
                for a,b in i.leaveBalance.items():  #way to access dictionary
                    if a == leave_type:
                        if b >= leave_days:
                            return True
                        else:
                            return False
            return 'not found'
            #     if(self.leaveBalance.key[i]==leave_type):
            #         if(self.leaveBalance.value[i]>= leave_days):
            #             return 1
            #         else:
            #             return 0
            #     else:
            #         return 0
            # else:
            #     return 0

if __name__=='__main__':
    
    emp_list=[]
    n =int(input("no of employees: "))
    for i in range(n):
        leave_dict={} #way to make empty dictionary 
        emp_name=input("name of employee: ")
        designation=input("designation: ")
        salary=int(input("salary: "))
        count=int(input("count of member to be added: "))
        for i in range(count):
            key=input("leave type: ")
            values=input("leave balance: ")
            leave_dict[key] = values #this is how to input value in dictionary
        emp=Employee(emp_name,designation,salary,leave_dict)
        emp_list.append(emp)
    
    org = Organization(emp_list)
    emp_name=input()
    leave_type=input()
    l_days=int(input())
    
    result=org.checkLeaveEligibility(emp_name,leave_type,l_days)
    if (result== True):
        print("Leave Granted")
        org.display_leaves(emp_name)
    
    elif(result == False):
        print("Leave not Granted")
        org.display_leaves(emp_name)

    else:
        print("not found")

