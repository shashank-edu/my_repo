#include<iostream>
using namespace std;

class complex
{
	private :
		int a,b;
	public:
		void set_data(int x, int y)
		{a=x;b=y;}
		void show_data()
		{
		cout<<"a = "<<a<<" \nb = "<<b<<endl;
		}
		complex add(complex c2)
		{
		complex temp;
		temp.a=a+c2.a;
		temp.b=b+c2.b;
		return temp;
		}
		complex operator +(complex c2)
		{
		complex temp;
		temp.a=a+c2.a;
		temp.b=b+c2.b;
		return temp;
		}

		complex operator -()
		{ 
			complex temp;
		temp.a=-a;
		temp.b=-b;
		return temp; 
		}
};



 

int main()
{
complex c1,c2,c3;
c1.set_data(3,4);
c2=c1.operator -();  //c1 ne - operator ko call kiya or us ne or us me koe argument pass nhi kiya and - operator ne jo return kiya wo c2 me assign h
c3=-c1;  //es ka meaning bhi same hai upar ki tarah , es pe koe argument pass nhi ho raha es ka mtlb hai yeh ek unary operator hai but agar binary opearator hota toh us me argument pass karate 
//or agar yeh binary operator hota , toh us ko 2 operants ki zarurat hoti hai toh waha pe ek operant hota hai caller object or dusara argument 
c3. show_data();
}

//unary opeator ko assign karane ka jayada acha tarika yeh hai c3=-c1; 
//but es me log kahate hai ki - operator pahale a raha hai 
//es ke leye ek rule samajaha padega ki jab hum binary operator ko overload karate hai jaise 
//c3=c1+c2; // yeh binary operator hai ,binary operator me jo left wala operant hota hai wohi caller object hota hai 
//but agar unary operator me deekhe jisme keval ke hi operant hota hai , wohi caller object hoga
//toh jaise c me likhate the x= -3; i.e - left me ata hai toh jaisa behaviour  operator ka hota tha waisa hi hame es tamal karana hai 
//toh ese leye unary operator aisa nhi hai ki caller object left me hoga 
