/* here we gave option to the user to input value in the string */
#include<stdio.h>
void main()
{
	int i;
char s[3][10];
printf("enter three strings \n");
for(i=0;i<=2;i++)
/* gets(&s[i][0]);  this also can be write it as */ gets(s[i]);
for(i=0;i<=2;i++)
printf("\n%s",s[i]);

}
