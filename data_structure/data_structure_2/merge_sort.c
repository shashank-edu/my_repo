#include<stdio.h>
#include<math.h>

void merge(int a[],int lb,int mid , int ub )
{
int b[ub+1];
int i=lb,j=mid+1,k=lb;	 
while(i <= mid && j<=ub)
{
if(a[i] <= a[j])
{
b[k]=a[i];
i++;
k++;
}
else
{
b[k]=a[j];
k++;j++;	 
}
if(i > mid)
while(j<= ub)
{
b[k]=a[j];
j++;k++;
}
else
while(i<= mid)
{
b[k]=a[i];
i++;k++;
}
for(k=lb;k<=ub;k++)
a[k]=b[k];
}
}


void merge_sort(int a[],int lb , int ub)
{
if(lb<ub)
{
int mid= ceil((lb+ub)/2);
merge_sort(a,lb,mid);
merge_sort(a,mid+1,ub);
merge(a,lb,mid,ub);
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
merge_sort(arr,0,size-1);
for(int count=0; count<size; count++)
printf("%d\t",arr[count]);
printf("\n");
}


