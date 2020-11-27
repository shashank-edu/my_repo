#include<iostream>
using namespace std;
class B;   //forward decleration
class A
{	private:
	int a;
	public:
	void set_data(int x)
	{a=x;}
	friend void fun(A,B);  //yaha pr class B kyu ki badme bana hai toh compiler samjh nhi pa raha hai ki yeh B kya hai toh es ke leye
	//hum class B ka forward decleration kar dege Class A se pahale
};

class B
{
	private:
		int b;
	public:
	void set_data(int y)
	{b=y;}

	friend void fun(A,B);
};

void fun(A a1, B b2)    //yeh ek aisa friend function hai jo dono class ke private member ko ek hi sath use kr raha hai 
//toh agar kabhi aisi situation ati hai ki hum ek se jayada class ke priavte member ko ek sath use karana hai toh yeh kam sirf friend function kr sakata hai 
//yeh friend function ka pahala faida hai , kul 3 fayade important hai 
{
cout <<"sum is "<<a1.a+b2.b<<endl;

}


//friend function chahe toh private declare kare ya public declare kare ese koe fark nhi padega kyu ki yeh ek non member function hai 
// or hum ne phichale lecture me yeh bat samajhi thi ki agar friend function me agar koe argument pass nhi karate hai toh yeh etana meaning full nhi rahega 
// kyu ki es function ko call karane ke leye koe caller object toh ho ga nhi toh hum direclty use nhi kr payege class ke member ko
// toh es ke leye hame argument pass karana jaruri hai 

int main()
{
A a1;
B b2;
a1.set_data(5);
b2.set_data(3);
fun(a1,b2);


}
