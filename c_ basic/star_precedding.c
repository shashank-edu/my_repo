#include<stdio.h>

int main()

{

int x=1,y,j=1,k=1,l;
printf("enter number of lines \n");
scanf("%d",&y);
if (y>=1)
	{
	
	printf("*\n");

		for(j; j<=y&&(x+1) ; j++)
		{
		printf("*");
		x++;
		}
	printf("\n");

	
	

}
 else

	printf("invalid number \n");

	
	
return 0;
}
