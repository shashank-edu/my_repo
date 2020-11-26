 /* default arguments */

#include<iostream>
using namespace std;

int add(int,int,int =0);   //default argument , agar 3 variable pass nhi hue toh use 0 mana jayega
//es me rule yeh bhi hai ki agar agrument me kisi value ko default set karwate hai toh use ke age sabhi variable me default value set karani padegi 
//i.e int add(int,int=0,int=0);

int main()
{
int x,y,z,m;
cout<<"enter two number"<<endl;
cin>>x>>y;        
z=add(x,y);  		//hum ne yaha 2 value pass ki hai toh us ke leye hum ne at the time of decleration we said 2 value pass hogi 
cout<<"the sum of "<<x<<" and "<<y<< " is "<<z<<endl;
//but C++ hame facility deta hai ki agar aisa ho ki wo funtion use karana me 2 toh pass kr hi rahe hai sath me wohi function 3 ya us se jayada ya kam ke leye hi kam kare toh yaha ata hai  
//default argument ka use
//es ke jaise hum ne function 3 value ke leye declare kiya hai or agar us me 3 nhi 2 value pass kare toh by default 3rd value ko 0 man liya jaye , us ke leye at the time of decleration 3rd value me assign 0(=0) likh dete hai 
//that means agar es me 3rd value pass na ho toh use zero man liya jaye ab yeh jaruri nhi hai sirf 0 hi likha jaye 
//koe or value bhi likh sakate hai but as per addition 0 value suits here , agar koe or value likh di toh us ki value wohi mani jayegi

cout<<"enter three numbers"<<endl;
cin>>x>>y>>m;
z=add(x,y,m);
cout<<"\n the sum of three no's is "<<z<<endl;
}

int add(int x, int y, int m)
{
return (x+y+m);
}


