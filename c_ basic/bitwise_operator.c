#include<stdio.h>
 int main()
{
int x,y,z,p,q;
x=23&56; //use of and operator
printf("value of & operator of 23 & 56 is %d\n",x);

y=23|56; //use of or operator
printf("value of or operator of 23|56 is %d\n",y);

z=23^56; //use of XOR operator
printf("value of XOR operator of 23^56 is %d\n",z);

p=56>>2; //here we use right shift operator
printf("value of >> operator of 56>>2 is %d\n",p);

q=56<<3; // here we use left shift operator
printf("value of << operator of 56<<3 is %d\n",q);

return 0;
}
