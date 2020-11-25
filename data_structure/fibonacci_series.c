#include<stdio.h>
int a=0;
int fib(int n)
{
extern int a;
int y;

if (n==1||n==2)
	return(1);
else 
	return(fib(n-1)+fib(n-2));
}

void main()
{int n,m,i;
printf("enter term no. \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
m=fib(i);
printf("%d \n",m);
}
}
