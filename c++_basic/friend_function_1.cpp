#include<iostream>
using namespace std;

class complex
{
	private :
		int a,b;
	public:
		void set_data (int x, int y)
		{a=x;b=y;}
		void show_data()
		{cout<<"a = "<<a<<"\nb = "<<b<<endl;}

		friend void fun(complex);   //agar yeh function ko declare karate waqat friend keyword likh diya jaye toh yeh friend function mana jayega
		//friend function class me keval declare hota hai , or es ko bahar define karana padata hai
};

void fun(complex c1)   //ab decleare kaarte time nahi hum yaha dobara frined likhege na hi membership label kagaye ge 
{
// cout<<"sum is "<<a+b;  //toh yeh bhi galat hai kyu ki friend fuction ko class ke private memeber ko access kaarne ka adhikar hai pr direclty nhi 
// ab directly kyu nhi kyu ki yeh a or b kis object ke hai yeh pata nhi chalega c1 ke hai ya c2, c3 ke hai , kyu ki es ka koe caller object nhi hai 
// toh es ke leye hum es me argument pass karege us ke leye hame declare karate hue or define karate hue batana padega 
cout<<"sum is "<<c1.a+c1.b; //toh hum private member ko toh access kr pa rahe hai but direclty nhi kr pa rahe hai 
}

int  main()
{

//ab deekhate hai yeh function call kaise hoga
complex c1,c2,c3;
// c1.fun();   //yeh galat hai kyu ki fun member function nhi hai toh es ka caller object bhi nhi ho sakata hai , toh object ke bina hi call hoga yeh
fun(c1);

}
