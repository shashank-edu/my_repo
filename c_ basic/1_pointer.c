#include<stdio.h>
void main()
{

void pointer_1(),pointer_2();
pointer_2();
}


void pointer_1()	
{
int x=5;
printf("\n%d",x);
printf("\n%u",&x);
printf("\n%d\n",*&x);   //here (*&x) it works as a dereferencing, where * is operator and &x is the operant

}

void pointer_2()
{
int x=5,*j;
j=&x;
printf("\n%d and %u",x,j);   //here j can be replaced by &x
printf("\n %d %u",*j,&x);  //here *j => *&x so tell value of x i.e dereferencing
printf("\n %u \n",*&j);   //here &j , tells value of address of j and *&j value of j stored in address of j , so (*&j) also can be written as j simply 
/*
 * answer will come as 
 * 5 and <address of x>
 * 5 <address of x>
 * <address of x> */

}


