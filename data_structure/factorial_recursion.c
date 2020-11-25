#include<stdio.h>
long fact(int );

long fact(int n)   //long is just like int , only difference is it can take long values
{
if (n>0)
	return(n*fact(n-1));
else 
	return(1);
}


void main()
{
	int n;
	long a;
	printf("enter a number to calculate its factorial \n");
	scanf("%d",&n);
	a=fact(n);
printf("%d \n",a);
}
