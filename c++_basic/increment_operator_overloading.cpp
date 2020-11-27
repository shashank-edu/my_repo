#include<iostream>
using namespace std;

class integer
{
	private :
		int a;
	public:
		void set_data (int x)
		{a=x;}
		void show_data()
		{cout<<"a = "<<a<<endl;}

		integer  operator ++()   //this is the coding for preincrement 
		{
		integer c1;
		c1.a=++a;
		return c1;
		}

		integer operator ++(int)    //post-increment 
		{
		integer c2;
	        c2.a=a++;
		return c2;	       
		}
};



int  main()
{
integer b1,b2;
b1.set_data(4);
b1.show_data();
b2=++b1;   //or aagr pre increment hota hai toh pahale increment hota hai fir bad me wo value assign ho jati hai 
//here means b2=b1.operator++();
b2=b1++;  //post increament means pahale b1 ki value b2 me assign ho jaye fir us me increament ho 
//here it means (b2=b1)++;  //yani hame es ek leye ek alag function banana padega 
//but ek or ++ operator wala function ,or dono me koe argument pass nhi ho rahi toh compiler ko yeh pata nhi chl payega ki kon sa kis time perform karana hai 
//ese leye c++ me naya rule aya hai ki agar hum pre increment and post increment alag alag banana chahate hai toh , toh compiler differentiate kr payega 
//jab hum post increament wale function me ek int argument pass karege , yeh int argument mention keval karana hai es ka koe use nhi hai 
//kyu ki actual me hame koe value pass karani nhi hai , lekin hum yeh int argument pass es leye kr rahe hai ki compiler dono version of increment operator function me difference kr paye 
//toh yeh pre-increment and post increment me fark karane ke leye hai 
//or aisa hi decrement operator (--)ke sath bhi karana padega  
b1.show_data();   //as here b1 is incremented in pre-increment , and the same value assign to b2 , so both are 5
//here as in post increment value of b1 is not increased, first it assign the value of b1 into , the the value to b2 , so value of b2 remain 5
//then the value increased in b1; //as increment operator in attached to b1; thus value of b1 becames 6
b2.show_data();
}
