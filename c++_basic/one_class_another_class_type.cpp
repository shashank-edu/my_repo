							/* using constructor */
#include<iostream>
using namespace std;

class product
{
	private:
		int m,n;
	public:
		void setdata(int x, int y)
		{m=x;n=y;}
		void showdata()
		{cout<<"\n m="<<m<<"\n n="<<n<<endl;	}
		
		int getM()
		{return m;}

		int getN()
		{return n;}
};



class item
{
	private:
		int a,b;
	public :

		 item () {}  //default constructor 
		void showdata()
		{cout<<"\n a="<<a<<"\n b="<<b<<endl;	}
 		item(product p)  // ab yaha pr kyu ki product nam ki class bad me bani hai pr hum ese pahale use kar rahe hai toh es ke leye hame ese pahale declare karana hoga 
		{
		a=p.getM();  // as yaha kyu ki m or  n ek private member hai product toh ab agar hum ese use kr rahe hote product class me hi toh koe error nhi ati but ab hum use kar rahe hai ese dusari class me toh error ayegi
		//toh yeh value lene ke leye hum product class me function banayege // jo ki m or n ki value return kr dega
		//ab kyu ki yeh function hum public me banayege toh hum ese item class se bhi access kr lege
		b=p.getN(); // ab yeh fir se error dega ki getN() function ka decleration bad me kiya hai toh acha yahi hoga ki hum pura product class hi es ke upar define kr de 
		}
};

/*
class product
{
	private:
		int m,n;
	public:
		void setdata(int x, int y)
		{m=x;n=y;}
		void showdata()
		{cout<<"\n m="<<m<<"\n n="<<n<<endl;	}
		
		int getM()
		{return m;}

		int getN()
		{return n;}
};
*/

int main()
{
item i1;   
product p1;
p1.setdata(3,5);
p1.showdata();
i1=p1; 
// as when we are doing conversion through constructor , toh hum ese samjh sakate hai as i1=i1.item(p1);  //as i1 call constructor and p1 pass as a argument
// pr agar hum sirf ek constructor banana dete hai or usme argument pass kar dete hai 
// pr jab i1 object banate time constructor call hoga , or ab kyu ki i1 banate time koe argument pass nhi kar raha hai
// or hum ne already ek constructor bana diya hai jis me argument pass kiya hai , toh complier apane app se ko constructor nhi banaega 
// toh i1 banate time compiler ko koe aisa constructor nhi milega jo call ho sake , toh hame khud ek constructor banana padega
i1.showdata();
}
