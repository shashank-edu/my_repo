#include<iostream>
using namespace std;

void fun()
{
static int x;    //ese memory tabhi mil jayegi jab program start hoga or end tak rahegi jab tak program end nhi hota
int y;     //ese memory tabhi milegi jab fun() function call hoga or fun() function khatam hote hue hi yeh memory release ho jayegi 
//agar initialize na kara jaye toh y me garbage value hogi 
//or x me 0 hoga 

}
