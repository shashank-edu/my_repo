/* take something return something */
#include<stdio.h>

void main(void)
{
int a,b,c,d,add(int,int);
printf("enter three numbers \n");
scanf("%d%d%d",&b,&c,&d);
a=add(b,c)+d;
printf("the sum of there numbers is %d \n",a);
}


int add(int b ,int c)
{
int z;
z=b+c;
return (z);
}
