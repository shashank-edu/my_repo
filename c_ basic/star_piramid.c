#include<stdio.h>
int c=1;
int main()
{
int i,j,a,b,m;

printf("enter a number \n");
scanf("%d",&i);
j=i;
m=i;
char s[i][j];
for (a=1 ;a<=m ; a++)
	{ 
	for(b=1 ;b<=c;b++)
	{
	printf("*",s[a][b]);
	}
	printf("\n");
	c++;
}
}
