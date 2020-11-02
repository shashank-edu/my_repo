#include<stdio.h>
#include<stdlib.h> // here we use different library to use program exit
int main()
{
int choice,x,y,z,p,q,b; //here we write int variable outside the loop because no need to create variable again and again

while(5)   //here 5 means a constant , and constant is always positive , now is it always true so to end this loop we make a another case to end this	
{
	printf("\n select your choice \n 1. addition \n 2. odd-even \n 3. print n naural numbers\n 4.exit program \n");
	scanf("%d",&choice);
	switch(choice)
		{
			case 1:
				printf("\n enter two numbers \n ");
				scanf(" %d%d",&x,&y);
				z=x+y;	
				printf("\nthe sum of %d and %d is %d \n",x,y,z);
				break;

			case 2:
				printf("\n enter a number \n");
				scanf("%d",&p);
				if(p%2==0?printf("\n %d is even number \n",p):printf(" %d is odd number ",p));
				break;

			case 3: 
				printf("\n enter a number \n");
				scanf("%d",&q);
				for(b=1;b<=q;b++)
				printf("\n %d ",b);
				break;

			case 4:
				exit(0);  // here we use exit to end this program and 0 is written which indicates that it terminate normally i.e without having any abnormality
			default :
				printf("\n invalid choice \n");
		}
	}
}
