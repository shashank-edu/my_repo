#include<iostream>
using namespace std;

class A
{
	public :
		void f1()
		{}

		void f2()
		{}
};

class B : public A
{

	void f1()     //method overriding 
	{}
	void f2(int x)   //method hiding
	{}
//hum ne parent class me ek function banaya , or usi nam ka function and pura prototype same ho child class me bhi
//arguments bhi same hai toh es bolate hai method overridding 
//agar hum ne parent class me funcntion banaya hai f2 or usi name ka agar child me bhi function banate hai ,but argument me antar hota hai 
//toh ese bolate hai method hiding
//
};


void main()
{
B obj;
obj.f1(); //B
// as because class A inherit ho raha hai class B me toh yaha pr 2 f1() function hai toh compiler ab kis function ko call karega 
// toh yaha pr ek important concept hai early binding ka 
// ab jaise hamne obj.f1() likha toh yeh compiler ki duty hain ki kon sa f1 chalega 	 
// or jo version chalana chahiye use kr diya jayega es ke sath bind , yeh kam compiler ka hai or ese ko bolate hai hum early binding
// ab yeh early binding compiler karata kaise hai 
// toh complier jis function ko object call kr raha hai , us object ka type dekhata hai , jaise es ka type B hai 
// toh yeh B class me ja kr deekhega ki koe f1() nam ka function exist karata hai ki nhi , agar karata hai toh wo es ko bind karega es call se 
// es ka mtlb parent class me jo f1() hai us ko toh yeh deekhega hi nhi 
// es leye yaha pr B class waha version chalega 
obj.f2();  //error 
// ab agar f2() function call hota hai as obj class B ka hai toh compiler class B me ja kr f2() function ko dhudata hai 
// or es me ek rule hota hai ki agara child class me jo function dhuda ja raha hai wo nhi mil raha hai toh wo parent class me bhi ja kr dudata hai 
// ab yaha pr compiler ko f2() nam ka function child class me mil gaya hai arguments bhale hi match nhi kr rahe hai pr 
// complier ese hi bind kar dega , or complier parent class nhi jata hai , f2() ko dhudane 
// ab fir yeh deeekhega kyu ki f2() ke arguments match nhi kr rahe haib toh wo ese error bol dega 
obj.f2(4);  //B
// ab yaha pr kyu ki function or argumemts dono match kra rahe hai toh yeh funtion successfull run kr jayega , child class ki binding ke sath
// agar  yeh dono function chl jate toh hum ese function overloading bol sakate the , as function overloading bolata hai 
// name same hone chahiye , or arguments alag hone chahiye 
// toh funtion overloading ke juda ek important rule samane ata hai ki 
// agar do funtion jis ka name same hai but arguments me antar ho or jis ka ek version parent me ho or dusara child class me toh yeh function overloading nhi kahalayega 
// i.e function overloading tabhi hoga jab dono function ek hi class me ho

}

/* here check when we will have to do method overrinding and method hiding */


class car
{
		public :
		void shiftgear()
		{}

		void f2()
		{}
};

// yaha hum chahate hai ki car ka object shift gear ko change kare toh hum ne ese public bana liya
// ab kyu ki sportcar is a car , or es me bahot sare features match karate hai toh class car ko hum en inherit kar liya sportcar me
// ab kyu ki shiftgear ka tarika car ka alag hai as compared to sportcar
// and if we don't make any function in child class toh jab bhi hum shiftgear ko call karege toh wo car ka shiftgear access ho jayega 
// or jis ka result child class ke variable me store ho jayega , ab yaha , shiftgear function parent class ka chl raha hai pr hum nhi chahate ki 
// parent class ka shiftgear function child ke object ko accessible bhi ho toh hum method overring ki help se same nam ka function bana lege jis me 
// coding alag hogi 
//aise hi method overhinding me hame argument pass karana pad raha hai , ki jo secure kr raha hai a  ki child wala function hi call hoga
//or agar kuch coding galat hogi toh error a jayegi or hame pata chl jayega   	 
class sportcar : public car
{
	public :
		void shiftgear()   //method overriding
		{}

		void f2(int x )
		{}
};


int main()
{
sportcar obj;
obj.shiftgear();


}

