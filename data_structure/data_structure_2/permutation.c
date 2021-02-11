/* permutation using resursion */
#include<stdio.h>
#include<string.h>

void swap(char * first , char *second )
{
char medium;
medium = * first;
* first = *second;
* second = medium;
}



void permutation(char *string, int i , int size)
{
int static count;
int j;
if(i==size)
{
count ++;
printf("%d. %s \n",count,string);
} 

for(j=i;j<=size;j++)
{
swap((string+i),(string+j));
permutation(string,i+1,size);
swap((string+i),(string+j));
}
}


int main()
{
int size;
int i=0;
char string[20];
printf("enter the string \n");
scanf("%s",string);
size=strlen(string);
permutation(string,i,size-1);
}
