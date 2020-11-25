/* in this we read the context of a file by the help of fgets */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	int i;
char s[50];
FILE *fp;
fp=fopen("f2.txt","r");
if (fp==NULL)
{	printf("file not found");
exit(1);
}
while(fgets(s,10,fp) !=NULL)
{
printf("%s",s);


}
fclose(fp);
}
