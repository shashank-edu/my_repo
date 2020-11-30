#include<iostream>
using namespace std;

template <class Q> Q big (Q a, Q b)   //hum yaha pr ek se jayda place holder bhi bana sakate hai , jab hum argument me alag alag type ki value  pass kar rahe hote hai
// like -> template <class A, class B>  A big (A x, B y);
{

if(a>b)
	return a;
else 
	return b;
}

/*
double  big (double a, double b)
{

if(a>b)
	return a;
else 
	return b;
}
*/

int main()
{
cout <<big(4,5)<<endl; 
cout<<big(5.8,3.2)<<endl;   // toh yaha pr yeh appropriate nhi hai ki 5.8 jab a me jayega ,as kyu ki a ek int type ka variable hai toh data loss ko kr sirf 5 bachega 
//toh hum yaha chahate hai agar different type ki agar value pass karu toh koe dusara function call ho , that means hame yaha karane padegi overloading
//toh es ke leye hame pahale wala function dobara banana padega but keval data type me antar kr dege
//toh agar hame overloading sirf es leye krani padati hai ki coding toh same hai or no. of argument bhi same hai , lekin data type fe fark hai 
//toh aise me hum alg alg khub sare version banane ki siwaye , i.e function overloading karane ki banajaye 
//ek single version  bhi function ka bana sakate hai jo etana gernalized ho ,  ki alag alag type ki value bhi pass kr ke es version ko call karate hai
//toh yeh zarurat ke mutabik apane app ko dhal lega 
//toh hame aisa ek hi function banana hai , jo ki aisa kr pate hai template ki help se  	 
// or aisa karane ko hi hum kahate hai function template banana , toh jis function ko hum generalized banana chahate hai 
// toh es me hum function ke age template likh dete hai or sath me angular bracket  me class or us class ka nam likhe dete hai jaise
// template <class Y> Y big (Y a, Y b); now here Y is treated as data type which customized their self as the function and argument demands
// yani jab hum function ko call kaarte time int type ki value pass kr rahe hi  toh Y hojayega int 
// and jab double type ki value pass karege toh Y ho jayega double
}
