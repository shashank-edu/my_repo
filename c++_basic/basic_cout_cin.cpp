#include<iostream>   //here io means input output
using namespace std;   //as cout and cin is defined in the standard namespace in iostream 
//that means jo operation define hai std ke andar us ke leye hame bar bar std:cout likhane ki jaruarat nhi hai sirf cout se bhi kam chl jayega 

int main()
{
int x;
std: cout<<"enter the side of square"<<endl; 	
// cout<<"enter the side of square"<<endl;
cin>>x;
int s=x*x;
cout<<"area of square having side "<<x<<" is "<<s<<endl;
return 0;   //this represent success full termination of program 
}
