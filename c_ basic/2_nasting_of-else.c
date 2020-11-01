#include<stdio.h>
int main()
{
int x,y,z;
printf("enter 3 numbers \n");
scanf("%d%d%d",&x,&y,&z);
	if (x>y)
		{
		if(y>z)                    //here x>y alredy known and if y>z the we can write it as x>y>z and if z>y .. 
		printf("greatest no. is %d \n",x);
		else
		printf("greatest no. is %d \n",z);
		}

	else                              //i.e here y>x
		{
		if(x>z)                   // and is x>z then this expression is written as y>x>z
		printf("greatest no. is %d \n",y);
		else
		printf("the greatest no. is %d \n",z);
		}
 }

//this funtion is more better than previous one because here only 2 function is running 
