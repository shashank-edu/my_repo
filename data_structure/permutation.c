/*  here we do permulation combination of a string entered by the user */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

static int count;
void swap(char *x,char *y)
{
char k;
k=*x;
*x=*y;
*y=k;
}

void permutation(char *s,int i, int n)
{
int j;
if (i==n)
{
count++;
printf(" (%d) %s \n",count,s);
}
else 
{
for(j=i;j<=n;j++)
{
swap((s+i),(s+j));
permutation(s,i+1,n);
swap((s+i),(s+j));
}
}
}

void main()
{int size;
	printf("enter no of character \n");
	scanf("%d",&size);
	char *s=(char  *)malloc(sizeof(char)*size);
	printf("enter string \n");
	__fpurge(stdin);
	gets(s);
	permutation(s,0,strlen(s)-1);
}


