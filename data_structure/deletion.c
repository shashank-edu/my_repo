#include<stdio.h>

void display(int arr[],int size)
{
for(int i=0;i<size;i++)
	printf("%d \t",arr[i]);
printf("\n");
}

int delection(int arr[],int size,int capacity, int index)
{
for (int i=(index);i<size;i++)
{arr[i]=arr[i+1];
}
return 1;
}


int main()
{
int arr[50]={2,4,5,6,8,9,10};
int size=6, capacity=50,index,y;
display(arr,size);
printf("enter the index which has to be deleted \n");
scanf("%d",&index);
y=delection(arr,size,capacity,index);
if(y==1)
{
printf("deletion is sucessfull \n");
size--;
display(arr,size);
}
}
