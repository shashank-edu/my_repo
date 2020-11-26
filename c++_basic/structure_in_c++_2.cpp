/* here we check how to take the data from user */
#include<iostream>
using namespace std;

struct book
{
int book_id;
char book_title[40];
float book_price;
};


/*

int main()
{
book b1;
cout<<"enter book id , title and price of book"<<endl;
cin>>b1.book_id>>b1.title>>b1.price;
}

*/    // above program is correct and we also take input by making a function

book input();
void display(book );

int main()
{

book b1;
b1=input();
display(b1);
return 0;
}

book input()
{
book a;
cout<<"enter book id , title and price of book"<<endl;
cin>>a.book_id>>a.book_title>>a.book_price;       //here it works as scanf() that means , enter ,space is a delimeter 
//thus we can write two words separated by space
return a;
}

void display(book b1)
{
cout<<"\n book id "<<b1.book_id<<"\n  book title "<<b1.book_title<<"\n book price "<<b1.book_price<<endl;

}
