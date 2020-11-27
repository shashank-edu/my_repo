#include<iostream>
using namespace std;

class A
{
	public :
	void fun()
	{........}
	void food()
	{.........}

};

class B
{
friend void A:: fun();   // yeh ek galat decleration hai yeh syantax error nhi hai balaki , lekin ek logical mistake hai 
//pr jis tarah se hum ne decleration kiya hai fun() ka , es se yeh toh samajh a  raha hai ki fun() class B ka friend hoga 
//liken yeh fun() class A ke andar jo hai wo wala fun yeh nhi pata chl raha 
//es me aisa bhi toh ho sakata hai ki ek fun() or ho jo kisi bhi class ka member na ho
//ho sakata hai ek or koe class ho or us ke andar bhi fun() function bana ho 
//pr es ko dhek ke aisa lag raha hai ki yeh wo fun function hai wo jisi bhi class ka function nhi hai yai yeh jo bahar bana hai 
//but hame banana hai jo class A ka fun() hai wo class B ka friend hai
//toh es ko aisa batane ke leye hame scope resolution operator lagana padega <name of class>::<function name>
//yeh scpoe ko resolve kar raha hai jo yeh bata raha hai ki yeh A class wala fun hai 
//toh yeh hame likhana padata hai return type or function name ke beech me 
//or agar hum yeh nhi lagate hai toh yeh mana jayega ki yeh wo wala fun hai jo kisi bhi class ka function nhi hai 
friend void A:: food();
// ab agar ek or hai toh fir se wohi tarika use karege 
// but agar hame class A me present sare ke sare funtion ko class B ka friend banana hai 
// toh ek ek kr ke bhi bana sakate hai pr es ke leye ek or tarika bhi hai toh hum likhege
friend class A;
// but agar class A me 10 function hai or hame 9 function ko class B me friend banana hai toh hum aisa nhi likhege
// tab hame ek ek kr ke bhi sab ko declare karana padega 
};

void fun()
{

}
