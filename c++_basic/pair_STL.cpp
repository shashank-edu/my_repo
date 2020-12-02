#include<iostream>
using namespace std;

class student
{
	private:
		string name;
		int age;
	public:
		void setstudent (string s,int a)
		{name =s; age=a;}
		void showstudent()
		{cout<<"\nstudent name "<<name<<"\nage "<<age<<endl;}
};

int main()
{
pair <string , int > p1; // here we made a object p1 or class pair or in angular bracket we declare the type of data to be liked each other
pair <string , string> p2;
pair <string , float> p3;
pair <student , int> p4; // yaha hum koe non-primitive data type bhi pair kr sakate hai ,//yaha student ke non-primitive data type hai jo ki hame banni hai 
p1=make_pair("shashank",24);  //yaha pr hum pair me value insert karane ke leye ke keyword use karate hai make_pair() or sath me us ke usi sequence me argument pass karate hai as hamane object banate time declare ki hai 
p2=make_pair("india","newdelhi");
p3=make_pair("book",45.67);
student s1;
s1.setstudent ("rachit", 17); 
p4=make_pair(s1,56);
 
cout<<"element of first pair "<<p1.first<<"\t"<<p1.second<<endl;
cout<<"element of second pair "<<p2.first<<"\t"<<p2.second<<endl;
cout<<"element of third pair "<<p3.first<<"\t"<<p3.second<<endl;
cout<<"element of forth pair "<<p4.second<<endl;  //es me yaha pr error ayegi kyu ki yaha pr non-primitive data type ki value show karani hai
//toh hum asia karege ki p4.first se jo bhi value return ho rhi hai use kahi store kr lete hai fir use print karawa lege
student s2= p4.first;
s2.showstudent();

}

