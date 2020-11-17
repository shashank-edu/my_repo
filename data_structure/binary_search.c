#include<stdio.h>
void display(int array[],int size)
{
for(int i=0;i<size;i++)
	printf("%d \t",array[i]);
printf("\n");
}

int binary_search(int array[],int size,int element)
{int low, mid, high;
	low =0;
	high=size-1; 	
	while(low<=high)       // means high becomes less than low as because high=mid-1, tab hame element nhi mil raha hai 
	{	mid=(low+high)/2;
	if (array[mid]==element)
		return mid;
	if (array[mid]<element)
		low =mid+1;   // mid+1 because mid wala element nahi hai ham ne pahale hi check kr liya hai  
	if (array[mid]>element)
		high=mid-1;  //mid-1  same reason as mid+1
}
return -1;
}

int main()
{
int array[]={2,5,6,12,15,17,22,23,32,45,67,69,74,82,87,96,100,104,108,117};
int size=sizeof(array)/sizeof(int);
int element,y;
display(array,size);
printf(" enter the element which is to be search for \n");
scanf("%d",&element);
y=binary_search(array,size,element);
	if (y==-1)
		printf("the element %d is not found in the array \n",element);
	else
		printf("the element  %d is found on index no. %d \n",element,y);
return 0;
}
