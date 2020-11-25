/* here we input data by user and store that string into file by help of fputs() */
#include<stdio.h>
#include<stdlib.h>

void main()
{
char s[50];
FILE *fp;
fp=fopen("f2.txt","a");
if (fp==NULL)
{	printf("file not found \n");
exit(1);
}
printf("enter string \n");
gets(s);   //fgets funtion takes string from file , but gets function takes string from user i.e from input
fputs(s,fp);
fclose(fp);
}
