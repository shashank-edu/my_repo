/* here we make an array then gave user access to put the value in them */
#include<stdio.h>
void main()
{
int *p,s[5],i;
p=&s[0];
printf("enter 5  numbers \n");
for (i=0 ; i<=4 ;i++)
scanf("%d",p+i);  //also can be write it as scanf("%d",&s[i]);
for (i=0; i<=4;i++)
printf("%d \n",*(p+i));
}
