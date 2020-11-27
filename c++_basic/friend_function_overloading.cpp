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
		
		friend complex operator + (complex, complex);  
};

		complex operator +(complex b1, complex b2)
		{
		complex tempt;
		tempt.a=b1.a+b2.a;
		tempt.b=b1.b+b2.b;
		return tempt;
		}

int main()
{
complex b1,b2,b3;
b1.set_data(3,4);
b2.set_data(5,6);
b3=b1+b2;   // hum yaha chahte hai ki yeh + operator ko hum as an friend function define kare toh kyun kyu ki friend function member nhi hota class ka
//toh hum ese andar define nhi kr sakate , andar sirf es ka decleration ayega 
//toh friend function banane ke bad es ka explanation change ho jayega b3=b1+b2;  b3= b1.operator(b2) abhi tak hum yeh bol rahe the but es ke bad
//ab hum bolege + function call hua , or us me c1 and c2 as an argument pass hue
//i.e c3= operator + (c1,c2);
//ab asia kyu hai , ki pahale caller object tha , and + operator i.e binary operator ko apana kam karane ke leye chahiye 2 opearant toh pahale jo caller object tha wo or sath me ek argument pass karana padata tha 
//but friend as a non-member function so it has no object , or hame abhi bhi 2 operant chahiye binary operator ko perform karane ke leye 
//toh es leye hame 2 argument pass karane padege
b3.show_data();
}
