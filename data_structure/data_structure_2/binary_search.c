#include<stdio.h>

int  binary_search(int a[],int size,int item)
{
int l=0,u=size-1;
while(l<=u)
{
int m=(l+u)/2;
if(item == a[m])
{	printf("search successfully \nitem is on %d index \n",m);
	return 0;
}
else if(item > a[m])
l=m+1;

else
u=m-1;

}
printf("search unsuccessful \n");
}





int main()
{
int a[]={3,11,12,25,35,47,54,56,66,77,89,90};
int item =89;
binary_search(a,12,item);
}
