#include<stdio.h>
#include<string.h>
void display(int arr[], int n)
{
for (int i=0;i<n;i++)    //traversal i.e visiting each and every element atleast ones
	{
	printf("%d \t",arr[i]);
	}
printf("\n");
}


int sorted_insertion(int arr[],int size, int element , int capacity, int index)
{

	if(size>=capacity)
	{
	return -1;
	}
for (int i=size-1;i>=index;i--)   //code for insertion
	{
	arr[i+1]=arr[i];
	}
arr[index]=element; 
	return 1;
}

int main()
{ 
int arr[100]={7,8,12,27,88};
int size= 5,element,capacity=100,y,index;
printf("enter the index no where element to be inserted (index starting from 0)\n");
scanf("%d",&index);
display(arr,size);
__fpurge(stdin);
printf("enter element to be inserted \n ");
scanf("%d",&element);
y=sorted_insertion(arr,size, element, capacity,index);

if(y==-1)
{printf("array is overflow \n");
}
else if(y==1)
{printf("insertion is successful \n");
size++;
display(arr,size);
}
return 0;
}
