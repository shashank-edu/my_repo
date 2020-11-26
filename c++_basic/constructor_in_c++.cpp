#include<iostream>
using namespace std;

class complex
{
	private :
		int a,b;
	public:
		complex()   //here  it is a constructor
		{
		cout<<"HELLO"<<endl;
		
		}


};
 
int main()
{
complex c1,c2,c3; //as we made a object so to check out contructor run or not we print hello
//means jaise hi object banega waise hi constructor call ho jayega 
//if what happen when we made object more than one , so the constructor functions call as many times as the object is made
}
