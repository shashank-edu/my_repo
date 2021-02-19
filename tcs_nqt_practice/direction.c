#include<stdio.h>

int main()
{
int x_axis=0,y_axis=0,steps,count=0,distance=0;
scanf("%d",&steps);
while(count != steps)
{
if(count < steps) //0<6 //4<6
{
distance +=10;  //10 //50
x_axis +=distance; //(10,0) //-20+50 =30 -> (30,-20)
count++; //1 //5
}
if(count <steps)
{
distance +=10;  //20 //60
y_axis +=distance;  //(10,20) // -20+60=40 -> (30,40)
count++; //2
}
if(count < steps)
{
distance+=10;  //30
x_axis -=distance;// 10-30=-20 -> (-20,20)
count++; //3
}

if(count<steps)
{
distance +=10;  //40
y_axis -=distance; //20-40 = -20 -> (-20,-20)
count++; //4
}
if (count<steps)   //add later 
{
distance +=10;
x_axis +=distance;
count++;
}
}
printf("output (%d,%d) \n",x_axis,y_axis);
}
