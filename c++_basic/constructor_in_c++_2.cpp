#include<iostream>
using namespace std;

class complex
{
	private :
		int a,b;
	public:
		complex(int x,int y)   //agar hame contructor me kuch arguments bhi pass karane ho   // parameterised constructor
		{
		a=x; b=y;
		}
//but ab yeh constructor call kaise hoga kyu ese x or y ki value chahiye hogi 

		complex(int k)    //parameterised constructor
		{
		a=k;
		}

		complex()   //default constructor 
		{}
};
 
int main()
{
complex c1(3,4), c4;   //agar hame object banate time contructor funtion me value pass karani hai toh hum object ke bad parenthasis laga kr values mention karege
//or agar aisa ho ki hame ek or object banana hua pr us me keval ek hi value pass karani ho, toh es ke leye hum ek or contructor bana sakate hai jis me sirf ek hi value initialize ho rahi ho
complex c2(8);

//ab contructor me ek tarika or hai value pass karane ka
complex c3=complex(7,8);
//bs likhane ka tarika alag hai , baki mtlb toh ek hi hai 
}


// or ab yaha kyu ki 2 version present hai contructor ke toh ese bol rahe hai constructor overloading 
// i.e fuinction overloading i.e function ke nam same hai but arguyment me fark hota hai 
// es me ek bat bilkul saf hai ki agar object banaga toh constructor call hoga , but agar hame ne koe contructor nhi banaya or us ke bad hum object bana rahe hai , toh bhi constructor call hoga , but wo default constructor hoga or use kahate hai implicit default constructor kyu ki use ham ne nhi compiler ne banaya hai 
// but agar compiler constructor bana raha hai toh hame kyu nhi dhik raha , kyu ki compiler banata hai object file , or hum dhek rahe hai souyrce file toh , object file me costructor ki entry ho rahi hai 
// ab esme khas bat kya hai ki yeh  ko compiler constructor bana raha hai es me koe argument pass nhi hota i.e zero paramenter or us ki body me coding bhi kuch nhi hoti 
// leking hota yeh hai kli jab hum koe object banate hai toh us ka yeh constructor call ho jata hai 
// kyu ki compiler jo constructor banata hai wo takes nothing nature ke hote hai toh 
// normally jab hum object banate hai toh koe error nhi ati , but jab hum us me argument pass kaarte hai toh us me error ati hai 
// or rule yeh ki class me agar hum ne ek bhi constructor bana liya jo take somthing nature ka hai toh ab  compiler koe constructor nhi banayega 
// es ka mtlb ab hamare pass takes nothing nature ka ek bhi construtor nhi hai 	, toh ab agar hum  object banayege jis me koe value pass nhi ho rahi ahi toh wo ab error dega 
// toh es ke leye hame khud constructor banana padega jo takes nothing nature ka hi or us ke body me kuch na ho toh ese bolate hai defaut constructor
