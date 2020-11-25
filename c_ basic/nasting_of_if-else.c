#include<stdio.h>
int main()
{
int x,y,z;
printf("enter three numbers \n");
scanf("%d%d%d",&x,&y,&z);

if (x>=y&&y>=z) //here if x is not greatest then program move to else 
{
printf("%d \n",x);
}
else
{
	if (y>z)  //here we already know x is not biggest integer thus no need to compare x so from y>=x&&x>=z so we write as y>z only
	printf("%d",y);
	else
		printf("%d",z);

}
}

