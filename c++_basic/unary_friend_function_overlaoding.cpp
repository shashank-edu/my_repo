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
		
/*		complex operator -()    //if we have to define it as a member function
		{
		complex temp;
		temp.a=-a;
		temp.b=-b;
		return temp;
		}     */

		friend complex operator - (complex);  

};

		complex operator -(complex b1)
		{
		complex temp;
		temp.a=-b1.a;
	        temp.b = - b1.b;
	       	return temp;	       
		}

int main()
{
complex b1,b2;
b1.set_data(3,4);
b2=-b1;   //b2= b1.operator -();
// after making friend function it is defined as b2=operator -(b1);
b2.show_data();
}
