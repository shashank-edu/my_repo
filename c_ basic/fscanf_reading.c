/* here we try to read from a file by the help of fscanf and enter printf the data on the monitor */
#include<stdio.h>
#include<stdlib.h>
void main()
{
int a,b,c,d;
FILE *fp;
fp=fopen("3.txt","r");
if (fp==NULL)
{	printf("file not found");
exit(1);
}
fscanf(fp,"%d,%d,%d",&a,&b,&c);
d=a+b+c;
printf("the sum of %d,%d and %d is %d \n",a,b,c,d);
fclose(fp);
}
