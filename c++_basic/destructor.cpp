#include<iostream>
using namespace std;

class complex
{
	private :
		int a,b;
	public:
		~complex()  //here tilt symbol is attached in before the name of class so it is called as destructor  
		{cout<<"destructor chala hai"<<endl;}

};


void fun()
{
complex obj;
}

int main()
{
fun();

cout<<"this will print later after destroy of object"<<endl;
}
