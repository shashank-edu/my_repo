/* fibonacci series */
#include<stdio.h>
static int count =0;
void fibonacci(int a, int b, int index )
{
int extern count;
if (count<=index)
{
count++;
int c;
c= a+b;
printf("%d ,\t",c);
fibonacci(b,c,index);
}

}

void main()
{
int a,b,index;
printf("please enter two initial value of fibonacci series \n");
scanf("%d%d",&a,&b);
printf("enter the no. of terms of fibonacci series \n");
scanf("%d",&index);
printf("%d , %d ,\t",a,b);
fibonacci(a,b,index);
}	
