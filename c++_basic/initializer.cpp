#include<iostream>
using namespace std;

class dummy
{
	private :
		int a,b;
		const int x;
		int &y;
		//lekin agar const variable class me banaya jaye ek member variable ke roop me 	 toh ese yaha pr toh initialize nhi kiya ja skaata 
		//kyu ki c++ me ek rule hai ki jo bhi variable hum class me bana rahe hai , toh use hum banate hue initialize nhi kr sakate 
		//kyu ki us time use memory nhi milati 
		//toh thik hai toh kya hum constructor me const variable ki value initilize kar sakate hai ?
		//pr constructor ke andar bhi const variable hum initialize nhi kr sakate  
		//bs yahi wo jagah h ki jaha pr hame initializer list ka use karana hi padega  
		// toh ek bar hum a or b ko aise initialize na kare toh chalega pr x ko toh mujhe aise hi initialize karana padega
	public:

	dummy(int &n) : a(5),b(7),x(10),y(n)  //yaha pr initializer list ko use karane ke leye ham constructor nam ke bad semi colon : laga kr variable ka nam or sath me parenthesis me us ki value initilizer kr sakate hai or aise commo se separate karate hue ham kiatane bhi variable initialize kr sakate hai   
	{}
//ab hum yeh kam constructor me bhi kr sakate the yani constructor ke body ke andar pr hum ne aisa kyu kiya 
//definelty es situation me toh hamare pass yeh option hai pr kuch situation me hamare pass aisa tarika nhi hota for ex-
//
		/*	dummy()   //jaise hum ke constructor bana dete hai dummy class ka , ab jab bhi es class ka object banega tab tab yeh a ki value initialize ho jayega
		{a=5;}
		//ab ese kam ko hum dusare tarike se bhi kr sakate hai , yani a ko yaha initialize na karate hue hum initializer list ka use karate hai
*/
};

// agar hamne variable banate time const keyword likh diya toh wo variable constant ho jayega or es variable ko initialize karana  compulsory ho jayega , toh yeh variable banate time jo value hum ne es me assign kr di toh wo value kabhi change nhi ho sakati 
//
// toh kya sirf initializer list , const variable ko initialize karana hi zaruri hai
// nhi , agar hum apane class ke andar ek reference variable bana rahe hai , as reference variable ko bhi banate time initilize kiya jata hai
// toh ese me member variable banate time initialize nhi kiya ja sakata , ese leye es ke leye bhi initializer list ki zarurat padegi

int main()
{

int m=6;
dummy d1(m);  //yaha pr actual me m ki value nhi pass kari hai m ka reference pass kr diya hai//yani n or m dono ek hi hai , hame bs m me change karana hai n khud hi change ho jayega 
}
