#include<stdio.h>

void swap(int * a, int *b)
{
int temp=*a;
*a=*b;
*b=temp;
}

void selection_sort(int arr[],int size)
{
for(int count_1=0;count_1<size;count_1++)
{
int *min=&arr[count_1];
for(int count=count_1;count<size;count++)
if(*min>arr[count])
{
swap(min,&arr[count]);
}
}
}


int main()
{
int size;
printf("enter the no. of element\n");
scanf("%d",&size);
int arr[size];
for(int count=0; count < size; count++)
{
scanf("%d",&arr[count]);
}
selection_sort(arr,size);
for(int count =0; count< size; count++)
printf("%d \t",arr[count]);
printf("\n");
}
