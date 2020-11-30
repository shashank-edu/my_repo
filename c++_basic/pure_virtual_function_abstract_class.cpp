#include<iostream>
using namespace std;

class person
{
	public:
		void f1()
		{......}
		virtual void fun()=0;   //do nothing function  //pure virtual function
	//	void fun();  //agar hum chahate hai ki es function ki definition na du  , toh hum es ki body na likh kr semi colon ; laga de 
		//toh mana jayega ki hamane decleration kiya hai function fun(); ka 
		//jis ko sayad hum class ke baahar membership label laga kr define karege 
		//toh hum kh skaate hai fun(); function ek member function hai jis ko bahar define kiya hai
		//or agr hum ese define hi na kare , na andar or na hi bhar , toh yeh do nothing function hoga pr asia karane ke leye us functionke bad assign = 0; likhana hoga 
//ese compiler ko pata chl jayega ki yeh do nothing function hai or es ki definition na andar hogi na bahar hogi 
//ab agar class me esa function hai jis ki koe definition hi nhi hai or ab hum jab ek class ka object bana kr es function ko call kare tab kya hoga 
//ab yeh obvious si bat hai ki agr yeh do nothing function ko call karega toh yeh galat hai 
//kyu ki fun funtion define hi nhi hai toh aise funtion ko call karana hi illegal hona chahiye 
//toh ese leye c++ me es function ke call hone pr rok lagane ki kosis kari 
//yani un hone asie rule banye ki ese function ko call hi na kr sake 
//but agar hum us class ka object banate hai toh hum us function ko bhi call kr sakate hai 
//toh rule yeh banaya gaya ki hum person class ka object hi nhi bana sakate , or agar aise class ke object hi nhi banene toh do nothing function call bhi nhi ho sakege 
//
//pr hum aise bhi toh kh sakte hai ki hum person class ki child class toh bana sakte hai 
};


class student :public person
{
	public:
		virtual void fun()=0;   //again we make pure virtual function 


};
//ab es me kya hoga koe person class ka koe object nhi bana sakata pr us ke child ka toh bana sakata hai
//or agar student class ka object bana lega toh bhi toh fun(); function ko call kr lege 
//toh fir agar hame function ke call ko rokana hai toh ke naya rule 
//toh agar hum aisi class jisme ki aisa function present hai jo do nothing nature ka hai or agar us class ke hum chid class banate hai 
//toh yeh compulsory hai ki hum us function ki overriidng kare 
//mtlb hum child class me dobara fun function banaeye ,or use bakayada code bhi kariye yani us ko define bhi karana hoga 
//toh us class ki child class banana hai agr hame aisi class ka use karana hai jis me koe do nothing nature ka function present ho
//pr hamane virtual class ke bare me pada tha , ki agar base pointer yani parent class ka pointer agar , child class ke object ko point karate hai
//or pointer ki help se hum overrinde function ko call karate hai like fun();
//toh early binding ki wajah se parent call wala fun(); function chl jayega kyu ki pointer parent class ka hai 
//es ka mtlb abhi ek or tarika hai ki hum parent class me present do nothing function ko call kr sakate hai 
//es tarike ko bhi rokana tha toh ese leye hame early binding ko bhi rokana tha 
//or ese leye fun(); function ko banana pada virtual
//toh es koe tarika nhi bacha ki do nothing function ko call kiya jaye toh ab es function ko bolate hai  pure virtual function 	 
//toh abstract class kya hoti hai toh c++ me es ka javab pucha ja raha hai toh hum javab dege 
//ki wo class jis ke andar pure virtual function present hai wo class abstract class ho jati hai 
//or aisi class ka kabhi bhi object nhi ban sakata
//or ab agar hame us function ki overriding nhi karani hai toh fir se use virtual function ban dijiye
//ha ab ese yeh bhi hoga ki ab child ka bhi object nhi ban payega 
//toh dono me se ek kam karana hi padega ya toh override krke ese define  kr de ya dusara agar hum fir se ese virtual function bana de 
//
//  
