class Book:
    def __init__(self,id,name,subject,price):
        self.id=id
        self.name=name
        self.subject=subject
        self.price=price

class Library:
    def __init__(self,name,book_list):
        self.name=name
        self.book_list=book_list

    def findSubjectWiseBook(self):
        dictionary ={}
        for i in self.book_list:
            if i.subject not in dictionary.keys():
                dictionary[i.subject] = 1
            else:
                dictionary[i.subject] =dictionary[i.subject] +1
        # dictionary=sorted(dictionary,key= dictionary.get())
        return dictionary
    
    def  checkBookCategoryByPrice(self,id):
        for i in self.book_list:
            if i.id == id:
                if i.price >= 1000:
                    return 'High Price'
                elif i.price >= 750 and i.price < 1000:
                    return 'Medium Price'
                elif i.price >=500 and i.price < 750:
                    return 'Average Price'
                else :
                    return 'Low Price'
        return None


if __name__ == '__main__':
    n =int(input())
    book_list=[]
    for i in range(n):
        id=int(input())
        name=input()
        subject=input()
        price=int(input())
        book_obj= Book(id,name, subject,price)
        book_list.append(book_obj)
    book_id =int(input())
    library_obj=Library("ABC",book_list)
    result1= library_obj.findSubjectWiseBook()
    for a,b in result1.items():
        print(a,b,sep= " ")
    result2=library_obj.checkBookCategoryByPrice(book_id)
    if result2 ==None:
        price("No book found")
    else:
        print(result2)