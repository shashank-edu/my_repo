class Product:
    def __init__(self,productName,product_type,unitprice,qtyonHand):
        self.productName=productName
        self.product_type=product_type
        self.unitprice=unitprice
        self.qtyonHand=qtyonHand

class Store:
    def __init__(self,product_list):
        self.product_list=product_list

    def purchasedProduct(self,name,qtyPurchased):
        self.Prodname=name
        self.qtyPurchased=qtyPurchased
        for i in self.product_list:
            if i.productName  == name:
                if i.qtyonHand < qtyPurchased:
                    return (i.unitprice * i.qtyonHand)
                elif i.qtyonHand >= qtyPurchased:
                    i.qtyonHand = i.qtyonHand - qtyPurchased
                    return (i.unitprice * qtyPurchased)
                elif i.qtyonHand == 0:
                    return None

if __name__ == '__main__':
    count = int(input("no. of product: "))
    product_list=[]
    for i in range(count):
        product_name=input("product name: ")
        product_type=input("product type: ")
        unit_price =int(input("unit price: "))
        qtyonHand =int(input("quantity on hand: "))
        product_obj=Product(product_name,product_type,unit_price,qtyonHand)
        product_list.append(product_obj)
    
    store_obj=Store(product_list)
    name=input("name of the product to be purchased: ")
    qtyproduct=int(input("quantity of product to be purchased: "))

    result1=store_obj.purchasedProduct(name,qtyproduct)
    if result1 == None:
        print("Product Not Available")
    else:
        print(f"bill of the product is {result1}")
    
    for i in store_obj.product_list:
        print(i.productName,i.qtyonHand)
