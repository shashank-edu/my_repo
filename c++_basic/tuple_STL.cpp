#include<iostream>
#include<tuple> // tuple function use karan ke leye hame yeh header file bhi add karani padati ha
using namespace std;

int main()
{

tuple <string, int , int> t1;
t1=make_tuple("shashank",24, 33);
cout<<"value in 3rd position "<<get<2>(t1)<<endl;
cout<<"value in 2rd position "<<get<1>(t1)<<endl;
cout<<"value in 1rd position "<<get<0>(t1)<<endl;

}



