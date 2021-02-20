#include<stdio.h>
#include<string.h>
int main()
{
char arr[50];
int correct=0;
for(int i= 0 ; i<5;i++)
{
scanf("%s",arr);
if (strlen(arr) != 10)
{
continue;
}
int count=0;
for(int m=0 ; m<10; m++)
{	

while(arr[m] == "1"||"2"||"3"||"4"||"5"||"6"||"7"||"8"||"9")
{
count++;
}
}
if(count == 10)
correct++;
}

printf("\n%d\n",correct);
}
