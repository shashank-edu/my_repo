#include<iostream>
using namespace std;

class complex
{
	private:
		int a,b;
	public :
		complex() {}   //default constructor

		void setdata(int x, int y)
		{a=x;b=y;}
		void showdata()
		{cout<<"\n a="<<a<<"\n b="<<b<<endl;	}

		operator int()   //yaha int ()  means yeh function int type ki value return karega 
		{
		return(a);   //as c1 object ne call kiya hai casing operator ko toh a ki value yaha kis ki hogi , c1 object ki  
		}
//i.e operator keyword ke bad likhate hai hum wo data type jo casting operator karega return 
};

int main()
{
complex c1;
int x;
c1.setdata(3,5);
c1.showdata();
x=c1;   //toh agar hame non-primitive type se primitive type me convert karana padata hai toh hum use karate hai casting operator 
//es ke leye hum operator keyword ka use karate hai  
//toh ese hum es tarah se samjh sakate hai x=c1.operator int();
//yaha pr c1 ne casing operator ko call kiya, or ab casting operator jo return karega wo assign ho jayega x me 
//as x int type ka hai toh casing operator jo return karana chahiye wo bhi return type ki value honi chahiye
cout <<"\n x="<<x<<endl;
}


