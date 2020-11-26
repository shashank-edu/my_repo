/* function overloading */

#include<iostream>
using  namespace std;

int area(int,int);
float area(int);

int main()
{
	int r;
cout<<"enter radius of circle"<<endl;
cin>>r;
float A=area(r);
cout<<"\n the area of the circle having radius "<<r<<" is " <<A;
int l,b,a;
cout<<"\n enter length and breadth of rectangular "<<endl;
cin>>l>>b;
a=area(l,b);
cout<<"the area of rectangle is "<<a<<endl;
}

float area(int r)
{
return (3.14*r*r);
}


int area(int l,int b)
{
return (l*b);
}

//ek zaruri bat function ke bahot sare kam se sath ek bahot zaruri kam hai function ki call ko dhek kr us ki sahi definition ke sath bind karana 
//toh pahale compiler deekhega ki program me kitane function ka nam area hai i.e same hai , jitane area use milege wo us ke leye possible candidates hai 
//jin me se kisi ke sath us function ko  bind karana hai
//un ne dhek ki 2 area hai 
//ab 3 rule s hai jise pata yeh pata lagayega ki kon sa function ke sath ese bind karwana hai yeh 3 rule ek ek compiler check karata hai 
//or agar pahale rule deekhate hi agar use pata chl jata hai ki use kis ke sath bind karana hai toh wo 2,3 ruleko nhi check karega 
//leking agar 1st rule fail hota hai toh 2nd rule ko deekhega or agar 2nd rule fail hua toh 3rd rule ko deekhega 
//pahala rule hai :- exact match i.e jitane version available hai un me se kon sa version exact match kr raha hai
//ab yaha dhek pa rahe hai ki area of circle me keval ek value pass ho rahi hai balaki area of rectangle me 2
//toh decleration se use pata chl raha ki kon sa exact match kr raha hai
//toh funtion ki overloading solve hoti hai function ke arguments ko dhek kr 
//but agar funtion ke nam same hai or uske arguments bhi same hai but us ke return type alag hai toh kya exact match ho payega , toh nhi  ho payegi or  error ayegi 
//funtion overloading ki rule hai ki function ke nam same hone chahiye but us ke arguments different hone chahiye 
//
//now if this rule fails then we check 2nd rule i.e hum pahale type ko promote karate hai i.e char ko int me covert karate hai or float ko double me , or fir se matching karwae jayegi agar ab koe match kr jata hai toh use bind kr dege
//
//and if 2nd rule also fail , tab 3rd  rule deekha jata hai i.e type conversion 
//es mtlb hua ki koe bhi primitive type koe bhi dusare primitive type me convert ho sakataa hai i.e int , char me convert ho sakata hai, char -float me , float  int me , ya int double me 
//or agar es ki madat se resolve hota hai toh thik hai warana ayegi error 
