class Library:
    def __init__(self, listOfBooks):
        self.books = listOfBooks

    def displayAvailableBooks(self):
        print("books present in the library are : ")
        for item in self.books:
            print(" \t *"+item)

    def borrowBook(self, bookname):
        if bookname in self.books:  
            print(f"you have borrowed {bookname}.")
            self.books.remove(bookname)
            return True
        else:
            print("sorry this book is either not available or already been borrowed")
            return False

    def returnBook(self, bookname):
        self.books.append(bookname)
        print("thanks for returning this book")


class Student:
    def requestBook(self):
        self.book = input("enter the book you want to barrow: ")
        return self.book

    def returnBook(self):
        self.book = input("enter the book you want to return: ")
        return self.book


if __name__ == "__main__":
    centralLibrary = Library(["algorithms", "python", "let us c", "HTML", "CSS"])
    student_name = Student()
    
    while(True):
        welcomeMsg = '''\n=========== Welcome to central library ==================
        Please choose the option:
        1. List all the book
        2. Request a book
        3. Add/Return a book
        4. Exit the libraray 
        '''
        print(welcomeMsg)

        a = int(input("enter a choice: "))
        if a == 1:
            centralLibrary.displayAvailableBooks()
        elif a == 2: 
            centralLibrary.borrowBook(student_name.requestBook())
        elif a == 3:
            centralLibrary.returnBook(student_name.returnBook())
        elif a == 4:
            print("thanks for using LMS ")
            exit()
        else:
            print("invalid choice! ")