class Number:
    def __init__(self,num):
        self.num=num
        
#as n1 and n2 is a user defined object thus we have to overload the function to perform any operation to it
    def __add__(self, num2): # here num2 carries the reference of the object thus by dot operator we access the value of the num stored in the object
        print("Lets add")
        return self.num +  num2.num

    def __mul__(self , num2): # __mul__ function given in python for mutiply
        print("lets multiple")
        return self.num * num2.num

    def __str__(self):   #to directly print the value we use this function
        return f"Decimal number : {self.num}"

n1=Number(4)  #n1 is a object of Number class where we pass 4 as an argumen     ts
n2=Number(5)  #n2 is a object of Number class where we pass 5 as an arguments
sum =n1 + n2  #here we overloading + as add function where a n1 object calling the function and we pass the another object as an arguments  
print(sum)

mul=n1*n2
print(mul)

print(n1)
