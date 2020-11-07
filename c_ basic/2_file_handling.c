#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
FILE *fp;
char s[100];
int i;
fp=fopen ("f2.txt","w");
if (fp==NULL)
{
printf("file is not open \n");
exit(1);
}
printf("enter the string \n");
gets(s);
for (i=0;i<strlen(s);i++)
fputc(s[i],fp);
fclose(fp);
}
