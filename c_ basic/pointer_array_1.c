#include<stdio.h>
void main()
{
	int a[5];
	void input(int *),display(int *),sort(int *);
printf("enter 5 numbers \n");
input(a); 
printf("\n");
display(a);
sort(a);
printf("\n");
display(a);
}

void input(int *p)
{
int i;
for(i=0;i<=4;i++)
	scanf("%d",p+i);
}

void display(int *p)
{
int i;
for (i=0;i<=4;i++)
	printf("%d \n",*(p+i));
}

/* sorting */

void sort(int *p)
{
int m,n,i;
for (n=1;n<=4;n++)
{
	for(i=0;i<=3;i++)
if (*(p+i)>*(p+i+1))
{
/* swap */
m=*(p+i);
*(p+i)=*(p+i+1);
*(p+i+1)=m;
}
}

}
