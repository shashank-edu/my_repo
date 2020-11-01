#include<stdio.h>
int main()
{
int x,y,z;
printf("enter 3 numbers \n");
scanf("%d%d%d",&x,&y,&z);
printf("%d \n",x>y?y>z?x:z:x>z?y:z);

}
