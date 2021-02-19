#include<stdio.h>

int main()
{
int size;
scanf("%d",&size);
int arr[size];
for(int index=0;index<size;index++)
scanf("%d",&arr[index]);

if(size<3)
{
printf("false \n");
return (0);
}


int count=0;

while(count+1< size && arr[count] < arr[count+1])
{
count++;
}

if (count == 0 || count ==size-1)
{
printf("false");
return 0;
}
while(count+1 < size && arr[count] > arr[count+1])
{
count++;
}

if(count == size-1)
{
printf("true \n");
return 1;
}
else
{
printf("false \n");
return 0;
}
}
