#include<stdio.h>

void display(int array[],int size)
{
for (int i=0;i<size;i++)
	printf("%d \t",array[i]);
printf("\n");

}

int search(int array[],int element,int size) 
{
for(int i=0;i<size;i++)
{
if(array[i]==element)
{return i;
}
}
return -1;
}


int main()
{
	int array[]={2,5,8,3,83,56,78,23};
	int size=(sizeof(array)/sizeof(int)) ,capacity=100,element,y;    //here we use the trick to calculate the size of array 
	display(array,size);
	printf("enter the element to be search \n");
	scanf("%d",&element);
      y= search(array,element,size);
      if(y==-1)
	      printf("element is not present in array \n");
     else
      printf("the element %d is found  index no. %d \n",element,y);

      return 0;

}
