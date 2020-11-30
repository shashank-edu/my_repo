				/* by using casting operator */
#include<iostream>
using namespace std;

class item
{
	private:
		int a,b;
	public:
		void showdata()
		{cout<<"\n a="<<a<<"\n b="<<b<<endl;}
		
		void  setdata(int x,int y)
		{a=x;b=y;}

};


class product
{
	private:
		int m,n;
	public:
		void setdata(int x, int y)
		{m=x;n=y;}
		void showdata()
		{cout<<"\n m="<<m<<"\n n="<<n<<endl;}

		operator item()
		{
			item temp;
			temp.setdata(m,n);
			return temp;
		}
};


int main()
{
item i1;   
product p1;
p1.setdata(3,5);
p1.showdata();
i1=p1; //now as we are converting it as a casting operator
//so on casting operator , hum assign ke right side wali class me casting operator function banate hai
//toh ese hum aise bhi samajh sakaate hai i1=p1.operator(); 
i1.showdata();
}
