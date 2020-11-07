#include<stdio.h>
enum boolean  //here false =0 and true =1
{
false,true
};

int even_1(int x)
{
if (x%2==0)
	return(1);
else 
	return(0);
}

/* here we can also write the above written program as */
/* by writting as using emulator reablility of program increase */
enum boolean even_2(int x)
{
if (x%2==0)
	return(true);
else 
	return(false);
}


void main()
{
int x,y;
printf("enter a number \n");
scanf("%d",&x);
y=even_1(x);
if (y==1)
	printf("even number \n");
else printf("odd number \n");
y=even_2(x);
if(y==true)
	printf("even number \n");
else printf("odd number \n");

}
