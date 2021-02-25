#include<stdio.h>

void swap(int * a, int *b)
{
int temp=*a;
*a=*b;
*b=temp;
}

/* bubble sort */

int main()
{
int size;
printf("enter the no. of element\n");
scanf("%d",&size);
printf("enter the element of array\n");
int arr[size];
for(int count =0;count<size;count++)
{
scanf("%d",&arr[count]);
}
int size_1=size;
for(int count=0;count<size-1;count++)
{
for(int count_1 =0;count_1 < size_1-1;count_1 ++)
{
if(arr[count_1]>arr[count_1+1])
	swap(&arr[count_1],&arr[count_1+1]);
}
size_1--;
}
for(int count =0; count<size;count++)
printf("%d\t",arr[count]);
printf("\n");
}



/* modified bubble sort  */
/* 						//not working properly
int main()
{
int size;
printf("enter the no. of element\n");
scanf("%d",&size);
printf("enter the element of array\n");
int arr[size];
for(int count =0;count<size;count++)
{
scanf("%d",&arr[count]);
}
int size_1=size;
for(int count=1;count<=size-1-count;count++)
{int flag =0;
 for(int count_1 =0;count_1 < size_1-1;count_1 ++)
{
if(arr[count_1]>arr[count_1+1])
{	
swap(&arr[count_1],&arr[count_1+1]);
flag =1;
} 
}
if(flag == 0)
	return 0; 
}

for(int count =0; count<size;count++)
printf("%d\t",arr[count]);
printf("\n");
}

*/
