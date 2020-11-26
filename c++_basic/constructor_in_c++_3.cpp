#include<iostream>
using namespace std;

class complex
{
	private :
		int a,b;
	public:
		complex(int x,int y)  
		{
	a=x; b=y;
		}
		complex(int k)   //parameterised constructor
		{a=k;}

		complex()    //default constructor
		{}
	/*	complex(complex c)  // ab yaha pr as because hum ek object bana rahe hai c toh fir se yahi function call hoga or yeh recursion ban gayega //toh yeh ek error hai or ese resolve karane ke leye hum object ka reference bana dege
		{
		a=c.a;
		b=c.b;
		}  */

	complex(complex &c)   //copy constructor   // here &c is a reference object , which is just another name of c1
		{
		a=c.a;
		b=c.b;
		}
};
 
int main()
{
complex c1(3,4);   // pahala wala constuctor call ho raha hai 
complex c2(6);    // dusara  wala constuctor call ho raha hai 
complex c3();      // default construtor call hoga
complex c4 =5;   // dusara wala constuctor call ho raha hai 
complex c5=c1;  //here we have to understand value of c1 value in object c5
//as c1 contain 2 value but yaha hum sirf ek comnplex type ki value pass kar raha hai
//ab wo ek ke andar 2 value hai usase fark nhi padata hum jo pass kr rahe hai sirf us se fark padata hai
//as waha ek value pass ho rahi hai toh pahala wala consturtor toh call nhi hoga
//or ab dusare define hai ki int type ka variable pass hoga but hum toh yaha complex type ka varaible pass kar rahe hai toh dusara wala
//contructor bhi nhi call hoga
//toh kya es me error ayegi , toh nhi es me koe error bhi nhi ayegi 
//ab hum ne pada th aki jab bhi object banaga toh constructor call hoga 
//or yeh wo constructor hai jo compiler bana raha hai
//pr compiler ke bare me hm ne pada tha ki yeh koe constructor nhi banayega agar hum ne ek bhi constructor banaya hai toh 
//samajahiye compiler hamari class me 2 constructor banata hai  , ek default constructor or dusare ko bolate hai copy constructor  
//agar class me koe bhi constructor nhi bana hai toh compiler 2 constructor banayega , default constructor i.e bina argument ka  or dusara copy constructor 
//jo es situation me call hoga i.e which pass complex variable
//and if ham ne apani class me koe constructor bana diya hai  , but copy constructor nhi banaya hua hai simple construtor banaya hua hai jaisa ki ham ne banaya hua hai, toh es case me default constructor nhi banayega compiler but copy construtor abhi bhi banayega 
//ab agar hum copy constructor bhi bana lete hai toh compiler koe bhi constructor nhi banayega 
}
