#include<stdio.h>
int main()
{
int x=1,y;

while(x<=5)
{
	printf("enter a number \n");
	scanf("%d",&y);
	if(y<4) // break ka use waha hota hai jab hum pata toh ho kitani bar instruction run karwana hai but hum yeh bhi chahate ho kuch kuch special jagah pr loop ruk jaye
		break; //if y<4 the then the program will break in between or jaise hi program break hoga processor loop ke block se turant nikal jayega or bahar wale instruction run karwa dega 
	x++; 
	
}
x==6?printf("end normally \n"):printf("applied break\n"); //yani ki jab with out break apply hue program normally end hota hai toh use normally end kahate hai 

}

