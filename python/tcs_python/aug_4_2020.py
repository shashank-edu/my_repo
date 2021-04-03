class Product:
    def __init__(self,id,name,p_type ,price):
        self.id=id
        self.name=name
        self.p_type=p_type
        self.price=price
    
    def applyDiscount(self,number):
        self.price= self.price- number

class Store:
    def __init__(self,name,p_list):
        self.s_name=name
        self.p_list=p_list
    
    def calculate_price(self,d_per,p_type):
        pro_list={}
        for i in self.p_list:
            if i.p_type == p_type:
                i.applyDiscount(d_per *i.price/100)
                pro_list[i.name] = i.price
        pro_list =sorted(pro_list.items(),key= lambda x: x[1], reverse =True ) # this is how we sort dictionary by its value as integers
        if len(pro_list) == 0:
            return None
        else:
            return pro_list
    
if __name__ == "__main__":
    n= int(input())
    obj_list=[]
    for i in range(n):
        id =int(input())
        name=input()
        p_type=input()
        price=int(input())
        product_obj= Product(id,name,p_type,price)
        obj_list.append(product_obj)
    store_obj=Store("ABC",obj_list)
    cal_type= input()
    cal_price = int(input())    
    result1=store_obj.calculate_price(cal_price,cal_type)

    if result1 ==None:
        price("Product Not Found")
    else:
        for a,b in result1:
            print(a,b,sep=" ")
