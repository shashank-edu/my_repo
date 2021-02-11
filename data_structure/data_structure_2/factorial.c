/* factorial by recursion */

#include<stdio.h>

int factorial(long int a)
{
if(a>=1)
{
a=a*factorial(a-1);
return a;
}
else 
return 1;
}

int main()
{
long int a,b;
printf("enter the no. whose factorial have to find \n");
scanf("%d",&a);
if(a<0)
printf("invalid input \n");
if (a==0)
printf("the factorial of 0 is 1 \n");
else 
{
b=factorial(a);
printf("the factorial of %d is %d \n",a,b);
}
}
