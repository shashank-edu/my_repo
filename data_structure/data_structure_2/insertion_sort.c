								/* insertion sort */
#include<stdio.h>

void swap(int *a, int * b)
{
int temp = *a;
*a=*b;
*b=temp;
}

void insertion_sort(int arr[], int size)
{
int i,j, temp;
for(i=1;i<size;i++)
{	temp=arr[i];
for(j=i-1;j>=0 && temp<arr[j];j--)
	arr[j+1]=arr[j];
arr[j+1]=temp;	
}
}
/*
void inserstion_sort(int arr[], int size)
{
int temp;
for(int count =0;count < size; count++)
{
temp=arr[count];
int count_1=count;
for(count_1;count_1<size;count_1++)
{
if(!(temp < arr[count_1]))
{

swap(&arr[count],&arr[count_1]);
continue;			
}
}
}
}
*/
int main()
{
int size;
printf("enter no. of element \n");
scanf("%d",&size);
int arr[size];
printf("insert the element\n");
for(int count =0;count < size; count++)
scanf("%d",&arr[count]);
insertion_sort(arr,size);
for(int count=0;count<size;count++)
printf("%d\t",arr[count]);
printf("\n");
}
