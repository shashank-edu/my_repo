#include<stdio.h>
int main()    	//it is just the name of block which run 
{
sum();	//here by only writing the name of the block , whole instruction in the block will run
even();   // here it is a user defined funtion as we defined the function   //here we call the written funtion so we will say its is a function call
}


int sum()	// here sum() represent the whole instruction of sum block 
{
int x,y,z;
printf("enter two number \n");
scanf("%d%d",&x,&y);
z=x+y;
printf("sum of number is %d \n",z);             
}



int even()    //here even() represent the even block // a name given to function is known as function definition
{
int x,y;
printf("enter a number \n");
scanf("%d",&x);
if (x%2==0)
printf("the no. is even\n");
else 
	printf("the no. is odd \n");
return 0;   //return will have to write in the last only because if we write return earlier then from their processor will return from the program
 //we write return<anyintege> as because we start is as int so it must be end as integer value
}
