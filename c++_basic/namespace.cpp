#include<iostream>  //ab yeh file include karane se , ab namespace hamare program me available ho gaya hai 	 
// ab std nam ka namespace toh exist karata hai , toh hum ese usebhi kr sakate hai 
// or use use kaise karana hooga jaise hum myspace likh rahe hai , a use karate time 
// pr agar hum asie nhi lihana chahte toh hum likate hai using namespace std;	 
using namespace std;
//or agar sirf hum yeh line likh de pr iostream wali file ko include na karwaye 
//toh jab hum hum es file ko include nhi karege tab tak std name ka namespace ayega hi nhi program me , wo code hi nhi ayega 
//toh ab es line ke bad es namespace me declare function ko use karane ke leye hame bar bar namespace ka nam likhae ki jarurat nhi padegi 	  
namespace myspace
{
int a;
int f1();
		class A
		{
			public:
				void fun1();

		};

}  

int myspace ::f1()   //yaha hum ne f1() define toh kiya pr yeh kaise pata chalega ki yeh wo f1() hai jo myspace ke andar declare hai toh es ke leye hum
	//namespace ke name or scope resolution opeartor lagate hai ::
{
	std::cout<<"HELLO F1"<<endl;  // ab yaha cout bhi toh predefined object hai toh ese bhi toh declearation ki jaruarat hai , toh es ka declearation kaha hai 
// es ka decleration bhi toh ek namespace me hoga , toh wo name space ka name hai std;
// toh hame std ko include karana padega 
// a yeh std ek file me bana hua hai , jis ka nam hai iostream (yaha iostream.h nhi bol rahe hai )
return 0;
}
// ab jab hame fun1() define karana hai hai toh, yeh ek class ke andar hai or agar koe function class ke andr declare hota hai or bahar define hota hai toh us class ka nam or scope resolution opearaor se hum ese class ka member function bana saket hai
// or ab kyu ki hame ese myspace ka part bhi banana hai toh ek us me hum namespace ka name or scope resolution laga dete hai
void myspace::A::fun1()
{cout<<"HELLO FUN1"<<endl;}

using namespace myspace; //toh agar hum myspace ke sath bhi karate hai toh hame bar bar my space likhane ki jaruart nhi hai 
// lekin agar koe ek same function ka nam dusare namespace ke andar bhi define hai toh yeh zaruri ho jata hai ki us function ko call karte time us ke pahale namespace ka name or scope resolution lagaya jaye ::
//

int main()
{
a=5;
f1();
A a1;
a1.fun1();
// myspace:: a=5;
// a=5;  //ab aagar hum aisa lihate hai toh es me ayegi error yeh galat hai kyu ki a ka jo scope hai wo namespace ke nam se hi accessible hoga 
// yani jo a hai wo main function ka member nhi hai ,mtlb main function ke andar nhi bana hai 
// ya a koe global varibale bhi nhi hai 
// yani a ka apana ek limited scope hai , or us scope ke andar hi wo access hoga 
// toh yaha pr hame kya karana hota hai ki hame pahale us scope ka nam likhana hota hai myspace or us ke bad hame scope resolution operator lagana hota hai toh scope ko resolve karege 
// aisa kr ke hum a ko access kr payege
//ki kahana ka mtlb yeh hai ki jo bhi upar decleration kiye gaye hai yeh sare ke sare ke group me hai or us ko hum ek scope bol rahe hai 
//or us ka nam hai myspace 
//or agar hame es group ke kisi bhi member ko access karana hai toh hame es group ka nam likhana padaega or fir scope resolution opearator ko use karege 
//jis se ki hum scope ko resolve karege yani us limitation ke bahar hum ese use kr sakate hai 	 
//or agar hame ese tarah function ko call karana hai
//pr function ko call kr ke koe fayada hi nhi hai jab tak wo define na ho 	 
}
