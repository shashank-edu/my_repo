/* by euclid theorem */
#include<stdio.h>

int GCD(int a,int b)
{
if(a%b==0)
	return (b);
if(b%a==0)
	return (a);
if (a==b)
	return (a);

if(a>b)
return (GCD(a%b,b));
else if(b>a)
return (GCD(a,b%a));
}

int main()
{
int a,b,c;
printf("enter two numbers whose GCD is to calculate \n");
scanf("%d %d",&a,&b);
c=GCD(a,b);
printf("the GCD of %d and %d is %d \n",a ,b,c);
}
