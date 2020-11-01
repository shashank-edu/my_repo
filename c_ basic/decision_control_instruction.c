#include<stdio.h>
int main()
{
int x,y;
    printf("enter a number");
    scanf("%d",&x);
    printf("%d ",x);
    if (x<0)
    {
    printf("is negative number \n");
    }
    
    else
    {
    printf("is non negative number \n");
    }

    printf("enter a another no. \n");
    scanf("%d",&y);
    y>0?printf("the no. is positive"):printf("the no. is non positive \n");




    return 0;

}


