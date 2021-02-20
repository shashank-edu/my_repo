#include<stdio.h>


int main()
{
int size;
scanf("%d",&size);
int arr[size];
for(int count=0;count<size;count++)
{
scanf("%d",&arr[count]);
}
for(int i=0 ;i< size;i++)
{int j;
for( j = i +1; j < size ; j++)
{
if(arr[j] > arr[i])
	break;
}
if(j == size)
printf("%d\t",arr[i]);

}
printf("\n");
}


/*
int main()  //not correct approach
{
int size;
scanf("%d",&size);
int arr[size];
for(int count =0; count <size; count++)
{
scanf("%d",&arr[count]);
}
printf("%d\t",arr[size-1]);

int length=size-1;

while(length != 0)
{
if(arr[length] < arr[length-1])
{
while(arr[length] < arr[length-1] && length != 0)
{
length--;
}

if(arr[length] > arr[length-1])
{	printf("%d\t",arr[length]);
	length--;
}
}
else
length--;
}
printf("\n");
}

*/
