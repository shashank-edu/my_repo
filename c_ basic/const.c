#include<stdio.h>
void main()
{
const int x=5;
int * const p=&x ;  
//i.e const pointer 
//yaha pointer is const toh ++p me error ayega balaki ++(*p) run ho jayega


/* const int *p; */  
// yaha pointer constant nhi hai pointer to const hai yani ++(*p) error ayega

 /*  int *p;    */
/*  p=&x;      */  
//in const pointer we can define the value later
printf("x=%d \n",x);
++(*p);    //yani *&p i.e nothing but x but we not writing it direclty x so we can do increase in the value of x with the help of pointer 
printf("x=%d \n",x);
}
