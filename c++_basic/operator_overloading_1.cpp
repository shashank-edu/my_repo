#include<iostream>
using namespace std;

class complex
{
	private :
		int a,b;
	public:
		void set_data(int x, int y)
		{a=x;b=y;}
		void show_data()
		{
		cout<<"a = "<<a<<" \nb = "<<b<<endl;
		}
		complex add(complex c2)
		{
		complex temp;
		temp.a=a+c2.a;
		temp.b=b+c2.b;
		return temp;
		}
		complex operator +(complex c2)
		{
		complex temp;
		temp.a=a+c2.a;
		temp.b=b+c2.b;
		return temp;
		}

};



 

int main()
{
complex c1,c2,c3,c4;
c1.set_data(3,4);
c2.set_data(6,7);
c3=c1.add(c2);
c4=c1.operator +(c2);
c4=c1+c2;
//ab kya hum es me add funtion hata kr sum likh sakate hai ha likha skaate hai magar jaha add function declare kiya hai waha bhi change karana padega
//or ab kya es ka badal ke + rkh sakate hai nhi rkh skaate kyu ki ek rule hai function me nam pe hum alphabet , digit and underscore ke alawa kuch or nhi laga sakate toh + allowed nhi hai 
//but c++ yeh kahata hai ki agar kisi operator sysmbol ko as na function name use karana chahate hai toh kr sakate hai but shart etani hai ki hum uske pahale operator keyword likhe 
//but yad rahe hum un hi operator ko as an function name use kr sakate hai jo c language me ek valid opeartor tha 
//lekin jab hum function ka nam aisa koe operator symbol rakhate hai toh ek or khas bat samane ati hai aise kisi function ko hum bina . lagaye bhi call kr sakate hai 
//yani c1 ke bad . and operator bhi na likhe , or paranthesis bhi na lagaye tabhi call hoga
//ab hum janate hai yah c4=c1+c2; as + ka ek meaning toh already c language me tha wo yaha pr bhi hai , ab hum ne + ka naya meaning bana diya hai jo tabhi workout hoga jab es ke opearants complex type ke objects hoge or kabhi nhi 
//toh + ki ek or nayi definition hum ne ban di
c3.show_data();

}


