/* here we are going to write in the file with the help of fprintf */
#include<stdio.h>
void main()
{
FILE *fp;
fp=fopen("3.txt","w");
int a,b,c;
printf("enter two numbers \n");
scanf("%d",&a);
__fpurge(stdin);
scanf("%d",&b);
c=a+b;
fprintf(fp,"the sum of %d and %d is %d",a,b,c);
fclose(fp);

}
