#include<stdio.h>
int main()
{
int x,y,z,a;
float q;
char w;
double e;

x=sizeof(q);  //here float replaces with the variable of float
printf("size of float is ");
printf("%d bytes\n",x);

y=sizeof(x); // here int replaces with the variable of int
printf("size of int is ");
printf("%d bytes\n",y);

z=sizeof(w); // here char replaces the variable of char
printf("size of char is %d bytes\n",z);

a=sizeof(e); // here double replaces the variable of double
printf("size of double is %d bytes\n",a);

return 0;
}
