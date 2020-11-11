#include<stdio.h>
int GCD(int , int );

int GCD(int a, int b)
{
	if(a==0||b==0)
	{
	if (a>b)
		return (a);
	else
		return(b);
	}

if (a>b)
GCD(a%b,b);
else if (b>a)
GCD(a,b%a);
else
	return(a);
}



void main()
{
int x,y,z;
printf("enter two numbers \n");
scanf("%d%d",&x,&y);
z=GCD(x,y);
printf("the greatest common divisor of %d and %d is %d \n",x,y,z);
}
