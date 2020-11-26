/* function call by passing object and returning object */
//here we are adding two complex numbers

#include<iostream>
using namespace std;

class complex
{
	private :          
		int a,b;
	public:
		void set_data (int ,int ); 
		void show_data ()
		{
		cout<<"\n a ="<<a<<"\n b ="<<b<<endl; 
		}
		complex add(complex c2)
		{
		complex added_value;
		added_value.a=a+c2.a;   //as here c1 call add function so c1 function's variable access directly and as we pass c2 so by dot  operator we access c2 data
		added_value.b=b+c2.b;
		return (added_value);
		}

};

void complex:: set_data (int x,int y)
{a=x;b=y;} 

int main()
{
complex c1,c2,c3;  
c1.set_data(3,4);
c2.set_data(5,6);
// c3=c1+c2;     //agar hum es tarah se 2 complex no. ko add karane ki kosis kr rahe hai toh yeh galat hai
//ab yeh galat kyu hai ese samajahate hai 
//c1 and c2 dono ka type hai complex , + operator operation perform karega addition ka lekin
//compiler ko har operator ka meaning already pata hota hai i.e har operator ki coding operator ko malum hai 
//operants ko dhek ke compiler decide karata hai ki konsi wali conding es me bind honi chahiye 
//ab jab compiler deekhega ki operator ke dono operants int type ke hai toh wo + ki kon si coding chalayega use pata hai , or agar float ke case me hai toh bhi use pata hai ki kon si conding chalani hai 
//lekin operator ke dono operants primitive type k nhi hote i.e int , char , float , double
//but agar non primitive type ke hote hai jaise ki jab bhi hum koe naya data type banate hai 
//toh jab bhi compiler deekhega non primitive opearants toh compileer un ko operate karane wali definition nhi janata hai ese leye wo eror dega 
//yani c1 or c2 ke beech + likhana error dega kyu ki compiler ese resolve nhi kr pa raha hai 
//yani compiler ko nhi ata ki c1 or c2 ko kaise add karana hai 
//but age hum ek chapter padege operator overloading us me padege class ke andar kaise es ki definition likhi jaye taki yeh line workout ho 
//toh fil hal hum es ka ek dusara tarika use karate hai hum es ka ek function banate hai 
//or es function ko class me member function ke roop me banana padega ab aisa kyu 
//kyu ki agar hum member funtion ki strength ho soche toh member function ko yeh adhikar hota hai ki wo class ki kisi bhi chij ko use kar sakate hai
//ab kyu ki a or b private hai toh , ese bahar se access nhi kiya ja sakta or add ke leye ese access karana jaruri hai toh ese andar hi banana padega 
 c3=c1.add(c2);   //here c1 object call add function by passing c2 , and the value return from it will be stored in c3
c3.show_data();
}
