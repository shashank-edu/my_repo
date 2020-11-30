					/* shallow copy  */


#include<iostream>
using namespace std;
class dummy
{

	private :
		int a,b;
	public :
		void setdata(int x, int y)
		{a=x;b=y;}
		void showdata()
		{cout<<"\n a="<<a<<"\n b="<<b<<endl;}

	void dummy(dummy &d)  //copy constructor agar hum banate toh asisa hota  //yaha kyu ki mutually data copy ho raha hai toh hum ese bolate hai 
		//shallow copy 
	{
		a=d.a;
		b=d.b;
	}
};


int main()
{

dummy d1;
d1.setdata(3,4);
dummy d2=d1;   //calls copy constructor
// copy means jab hum same class ka dusara object bana rahe hai toh pahale object ka data dusare object me copy karana ko hum copy kahatehai yeh shallow copy ka example hai 
// pr yeh copy hoti kase hai , toh yeh copy 2 tarah se hoti hai
d2.showdata(); 
dummy d3;
d3=d1;  //call assignment operator
// toh jaise hi hum operator overloading karate hai waise hi assignment operator ki overloading compiler ne khud ba khud kr rakhi hai 
// us operator ko hum copy assignment operator kh rahe hai 
}

//ab yeh copy 2 tarah ka ho skaata hai 1. deep copy , 2. shallow copy  
//toh jab hum copy karate hai tab ya toh call hota hai copy constructor , or ya toh call hota hai default assignment operator ya  (implicit copy assignmet operator ) en dono me se ek hota hai 
//
//ab jaise ki hame pata hai jaise object banata hai contructor call hota hai, ab kyu ki jasie kisi class ke 2 object banye , or dusara object banate time usi class ke object ko copy kar rahe hai toh , jo constructor call hoga wo copy constructor hoga , 
//or yeh copy constructor compiler khud ban lega , agar ham ne nhi banaya hoga 	
//ab agar hame ne pahale d3 object bana liya, fir hum ne d3 ko dinitialize kr diya , ab kyu ki d3 pahale ban chuka hai toh , compiler constructor ko call kar chuka , fir us ke bad agar hum es ki value assign kr rahe hai toh  , toh fir ab yaha pr assignment operator call hota hai
//toh by default compiler copy constructor toh banate hi hai ek assignment copy operator bhi overload karata hai
//
//
