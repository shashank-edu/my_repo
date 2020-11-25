#include<stdio.h>
int main()
{
int x,y,fun();
printf("enter a number\n");
scanf("%d",&x);
y=fun(x);
printf("the factorial of %d is %d \n",x,y);
}

int fun(int a)
{
	int b;
if (a==1)
return (a);
b=a*fun(a-1);
}
