#include<iostream>
using namespace std;

class complex
{
	private:
		int a,b;
	public :
		complex() {}   //default constructor
		complex(int x)  //this constructor call hoga jab object me dusare type ki value assign hogi
		{a=x; b=0;}

		void setdata(int x, int y)
		{a=x;b=y;}
		void showdata()
		{cout<<"\n a="<<a<<"\n b="<<b<<endl;	}

};

int main()
{
complex c1;
int x=5;
c1=x;  //es me error ayegi kyu ki x ek int type ki value hai or c1 , complex type ka hai toh yeh convert nhi ho pa raha
//toh es ke leye hum ek constructor banayege, 
//but ab tak hum janate the ki constructor tabhi call hota hai jab object banata hai 
//but constructor tabhi call hote hai jab bhi object me dusare type ki value assign hoti hai
//tab aise me object  ke leye wo constructor call ho jayega jo int type ki value leta hai 
//so this line means now // c1.complex(x);
//
c1.showdata();
}




