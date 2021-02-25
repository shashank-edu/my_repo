#include<stdio.h>
#include<string.h>

int main()
{
char * a={"a"};
char *b={"z"};

char *string;
scanf("%s",string);
printf("%s",string);
int size=strlen(string);
for(int count=0;count<=size;count++)
{
for(int count_1=0;count<=1;count++)
{
if(!strcmp(a[count_1],string[count]))
	printf("%c",b[count_1]);

}
}
}
