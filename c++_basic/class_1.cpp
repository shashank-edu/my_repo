/* this program to understand the difference b/w structure and class   */
// jaise hum janate hai complex no. ,i.e real part and imaginary part ka combination hota hai complex no.  
//toh ek complex no. ko store karane ke leye hame 2 no. store karane padege , or es ka mtlb 2 variables chahiye 
//toh hum aisi class banayege jo complex value ko represent karega jis ka ek object 2 value contain karega 
//so pahale sturucture banayege fir class ka concept us se compare karate hue deekhege 
#include<iostream>
using namespace std;

/*
struct complex
{
	private :
		int a,b;
	public:
		void set_data (int x,int y)
		{a=x;b=y;}
		void show_data ()
		{
		cout<<"\n a ="<<a<<"\n b ="<<b<<endl; 
		}

};

int main()
{
complex c1;      //here c1 called as a variable
c1.set_data(3,4);
c1.show_data();

}

*/

class complex
{
	private :                       //here we don't need to write private , by default private hi hoga , but for understanding hum likh dete hai  
		int a,b;
	public:
		void set_data (int ,int );   //decleration of function which define outside the body of class
		void show_data ()
		{
		cout<<"\n a ="<<a<<"\n b ="<<b<<endl; 
		}

};

void complex:: set_data (int x,int y)		// here we use class membership label complex::
{a=x;b=y;} 

int main()
{
complex c1;      // ab yaha c1 variable na bol kr ese object bolege , so as like variable , object also consume memory 
c1.set_data(3,4);
c1.show_data();

}

//if agar hum class ke bahar koe member define kiya hai toh use bhi us class ka member mana ja sakata hai toh us ki bhi kuch rules hai
//pahale funtion ko class body ke andar declare karana hoga 
//or jab bahar define kar rahe hai toh function ke name or us ke data type ke beech membership label jarur lagaya jayega 
//jo ki hoga <class ka nam><do bar colon lagana>  i.e complex ::
//ab es se frk kya padta hai ki agar koe function andar define karata hai toh yeh by default inline hoga 
//but agar bahar define kiya jata hai toh use inline banane ke leye inline keyword declaration se pahale likhana padata hai 
//es ke alawa es me koe or difference nhi hota , toh hum chahe kaise bhi define kr sakate hai 
