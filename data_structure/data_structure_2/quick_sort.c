#include<stdio.h>



void swap(int *a,int *b)
{
int temp=*a;
*a=*b;
*b=temp;
}

int partion(int arr[], int lower_bound,int upper_bound)
{
int pivot=arr[lower_bound];
int start=lower_bound,end=upper_bound;

while(start<end)
{
while(arr[start]  <= pivot)	  
start++; 
while(arr[end] >pivot)
end--;
if(start<end)
swap(&arr[start],&arr[end]);
}
swap(&arr[lower_bound],&arr[end]);
return end;
}


void quick_sort(int arr[], int lower_bound,int upper_bound)
{
if(lower_bound<upper_bound)
{
int location=partion(arr,lower_bound,upper_bound);
quick_sort(arr,lower_bound,location-1);
quick_sort(arr,location+1,upper_bound);
}
}



int main()
{
int size;
printf("enter the no. of element\n");
scanf("%d",&size);
int arr[size];
printf("enter the elements\n");
for(int count =0; count < size ; count ++)
{
scanf("%d",&arr[count]);
}
quick_sort(arr,0,size-1);
for(int count=0; count<size; count++)
printf("%d\t",arr[count]);
printf("\n");
}

