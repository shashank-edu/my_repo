#include<iostream>
using namespace std;

class A
{

	private :
	       int a;	
	protected:
	       void set_value(int m)
	       {
	       a=m;
	       }

	       void show_value()
	       {
	       cout<<"\na ="<<a<<endl;
	       }
};

class B :public A
{

	public:
		void set_data(int x)
		{
		set_value(x);
		}

		void display()
		{
		show_value();
		}
};


int main()
{

B obj;
// obj.set_value(5)  //yeh galat hai kyu ki as visiblity mode public hai child class ka , as protected member of parent call become protected member
// of child class , and class we know we can not access protected member of user 1 i.e object of that member  
obj.set_data(5);  
obj.display();
}
