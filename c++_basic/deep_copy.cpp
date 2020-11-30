#include<iostream>
using namespace std;
class dummy
{

	private :
		int a,b, *p;
	public :
		dummy ()
		{ p=new int; }    // by this we had a new block and p usko point kar raha hai kyu ki p  me es ka address chala jayega
		void setdata(int x, int y ,int z)
		{a=x;b=y;*p=z;}   //jab bhi hum pointer ke age * laga dete hai toh yeh wo variable bn jata hai jis ko pointer point kr raha hota  
		//but yeh block member variable nhi hai kyu ki yeh block dummy ke object ke bahar bana hai leki yeh control andar seho raha hai 
		// or jab hum ek or object banate hai or sath me data copy karane ki kosis karate hai   
		void showdata()
		{cout<<"\n a="<<a<<"\n b="<<b<<endl;}

	void dummy(dummy &d)
	{
		a=d.a;
		b=d.b;
	//	p=d.p;  yaha hum yeh line nhi likhege baalaki es ki jagah
		p=new int; //hum ek dusara block banalege
		*p=*(d.p);  // or d.p ki value ese assign kr dege i.e us block ki value   // toh yeh deep me ja kr copy hua hai 

	}  
	//ab jab ek object ki value dusare object me copy hogi toh correspondingly copy hogi , aagr copy constructor ham ne nhi banaya hai toh yej
	// compiler bna raha hai , or agar copy constructor compiler bana raha hai toh yeh shallow copy kr raha hai 
	// ab es se kya ho raha hai , ki d1 me a ki value 3 hai toh d2 me a ki value 3 ho gayi
	// toh b ki value 4 hai toh d2 me b ki value  4 ho gayi 
	// but ab kyu ki pointer me ek block ka address rakha hai , toh wo same address ab object b2 ke pointer me bhi a jayega 
	// mtlb ab ek hi block ko 2 pointer point kr rahe hai 
	// toh agar d2 koe change karega value me block ki toh yeh d1 me bhi deekhega , toh yeh toh share hone laga
	// pr hum toh ek different copy chahate hai block ki
	// toh ab yeh jaruri h0o jata hai ki ab copy constructor hum khud banaye
	//
};


int main()
{

dummy d1;
d1.setdata(3,4,5);
dummy d2=d1; 
d2.showdata(); 
dummy d3;
d3=d1; 
