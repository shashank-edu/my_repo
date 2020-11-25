/* function we made to swap the argument */
#include<stdio.h>
void main()
{
int a,b,t;
void swap_2(int *, int *),swap(int , int); 
//very important to understand the decleration (as only we don't write the valueof variable )
printf("enter two numbers  a and b\n");
scanf("%d%d",&a,&b);
/* here we have to do swap but not like this here now we use a fuction name swap
t=a;   //first a value is assign to t
a=b;   //here a value change to value of b
b=t;   // here now value b take the value of t i.e value of a 
//thus by this we can swap two numbers */
swap_2(&a,&b);  
//here we are going to make a swap function which calls the swap function 
//here we actaully pass the address of a and b instead of value of a and b 
printf("a =%d and b=%d ",a,b);
}


/*
void swap(int x,int y)
{
int z;
z=x;
x=y;
y=z;
//here we swap the x and y but swaping this x and y can changed the value of a nand b 
}
*/

void swap_2(int *x ,int *y) //*x and *y because here we pass the address thus we have to make pointer variable
{
int t;
t=*x;    //*x means a actually we here passing the value of a indirectly
*x=*y;   // so here we are not changing the value of x and y actually we changing the value of a and b
*y=t;  
//here t=*y cant be write because constant can be write in the left side at the time of assigning of variable 
//contant should be always in the right side



}
