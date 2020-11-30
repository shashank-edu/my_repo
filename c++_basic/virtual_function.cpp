#include<iostream>
using namespace std;

class A
{
	public:
		virtual void f1()   //virtual function ,  to tell compiler that its has to perform late binding
		{}

};

class B :public A
{
	public :
		void f1()   //function overriding 
		{}

};


int main()
{
A *p, a1;
B obj;

p=&obj;   //yaha hum pointer jo parent class ka hai, child class ke object ka address contain kr raha hai 

obj.f1();   // run  f1()  contain in class B beause hum class B ke object f1() ko call kar raha hai
//lekin jab hum parent class ke pointer ko call karate hai , or us ke through methods ko call karate hai toh kahani thodi different  ho jati hai 
p->f1();
//yaha pr hum ne parent pointer ke through f1() function ko call kiya 
//ab yaha pr f1() ko call koe kisi class ki object se nhi kr rahe hai balaki pointer se kr rahe hai 
//or yeh bhi hum janate hai function ki call ko dhek kr usaki sahi version ko bind karane ka kam compiler karata hai or es ko early binding kahate hai
//ab early binding abhi bhi hogi jab hum pointer ke dawara call kr rahe hai
//but ab problem kya hai ki jab early binding hoti hai , or compiler yeh kam kr raha hai toh ese yeh nhi malum ki pointer me addressn kis ka rakha hai
//ese leye compiler ke sahi version ko dhudane ke leye 	yeh nhi jan payega ki pointer ke andar a1 ka address hai ya obj ka 
//kyu ki compile time pe address nhi pata chalge ki address kya hai , kyu ki address tabhi allocate hote hai jab program run kar raha hota hai
//toh compiler time pe toh , pointer ka type hi keval samajh me a skata hai  , kyu ki pointer ka type decleration me fix ho chuka tha , 
//or yaha pointer ka type hai A
//es ka mtlb early binding karate time compiler pointer ke type ko deekhega na ki us ke content ko 
//toh funtion ko agar call object ke dawara kiya jata hai toh object ke type ko deekhate hai 
//but agar pointer ke dawara funtion ko call kiya jata hai toh pointer ke type ko deekahte hai 
//toh ese wajah se kyu ki pointer A type ka hai toh compiler A class me jayega or dhudega ki waha koe f1() nam ka function hai kya or agr hai toh 
//wo use ke sath bind krdega  or ese wajah se es bar parent class wala f1() chl jayega 	
//ab yaha yeh toh galat hai na kyi ki pointer ke andar toh hum ne class B ke object ka address contain karawaya , pr compiler ese nhi deekhega 
//or run kar dega parent class wale f1() ko 
//toh yeh overriding ki problem hai kyu ki hum overriding karate hi ese leye hai ki jo latest definition ho wo run kare pr yaha aisa nhi ho raha 
//toh es ka solution yahi hai ki early binding na hone diya jaye kyu ki early binding se hi , compiler pointer ka type dhek kr parent class ke f1()
//function ko bind kar raha hai 
//toh hona yeh chahiye ki late binding ho, i.e run time pe binding ho i.e run type pe binding kiya jaye
//run time pe ese leye kyu ki tabhi pata chl payega ki pointer me content kya hai 
//toh ab yeh bat compiler ko kaise samajhaye ki early binding nhi karana hai or ese late binding hone dena hai 
//late binding ko hum dynamic binding bhi bolate hai 
//toh aisa karane ke leye hum jo parent me function bana rahe hai usb ke peeche virtual keyword likh dete hai 
//yeh virtual keyword likh dene se ab yeh funtion virtual funtion ho gaya hai or compiler ko yeh samjh a gaya hai ki funtion ki late binding karani hai   // toh ese yeh hoga ki pointer ke type ko aadhar nhi mana jayega us ke content ko dhek kr binding hogi 
//ab kyu ki parent class me hamane f1() ko virtual funtion declare kr diya hai toh child me hame , virtual keyword likhane ki jarurat nhi hai
//halaki child me bhi f1() function , virtual function hi hai  
}
