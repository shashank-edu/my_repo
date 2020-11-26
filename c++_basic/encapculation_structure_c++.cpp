/* here we use the first principle of OOPs i.e encapculation  */
#include<iostream>
using namespace std;

struct book
{
int book_id;
char book_title[40];
float book_price;
void input ()                //agar hum function ko bhi variables ke sath structure ke andar banayege toh yeh bhi varibables ki tarah member function kahalayega , jaise book_id, book_price,book_title member variables hai , input member function kahalayega
//or member function ko kuch khas adhikar mile hai ki yeh us me se pahala yeh hai ki yeh apane hi structure ke koe bhi member ko yeh directly assess kr sakata hai bina Dot operator ke //i.e why we don't apply dot operator in this 	
{
cout<<"enter book id , title and price of book"<<endl;
cin>>book_id>>book_title>>book_price;  
}

void display()   //here we don't need to pass anything we directly access the value 
{
cout<<"\n book id "<<book_id<<"\n  book title "<<book_title<<"\n book price "<<book_price<<endl;
}

};

int main()
{

book b1,b2;
b1.input();     // ab jaisa ki dhek rahe hai ki input or display function bhi ab member function toh ese access karane keye bhi dot operator lagana padega 
b1.display();
//as here b1 is just like a man wkich perform input function i.e kyu ki b1 input function ko call kr raha hai toh jo bhi data input karege jab b1 call krega toh wo data sirf b1 ko belong karega
cout <<"\n another book "<<endl;
b2.input();
b2.display();
return 0;
}


