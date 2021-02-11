/* printing all binary string */
#include<stdio.h>
#include<stdlib.h>


void binary_string(int index ,int size, char arr[])
{
if(index==size)
printf("%s \n",arr);
else
{
arr[index]='0';
binary_string(index+1,size, arr);
arr[index]='1';
binary_string(index+1,size,arr);
}
}


int main ()
{
int size;
printf("enter the size of array \n");
scanf("%d",&size);
char arr[size+1];
arr[size+1]='\0';
binary_string(0,size , arr);
}



/*
void binary_string(int size , char arr[])
{
if(size<1)
{
printf("%s \n",arr);
}
else 
{
arr[size-1]='0';
binary_string(size-1,arr);
arr[size-1]='1';
binary_string(size-1,arr);

}



}


int main ()
{
int size;
printf("enter the size of array \n");
scanf("%d",&size);
char arr[size+1];
arr[size+1]='\0';
binary_string(size , arr);
}
*/
