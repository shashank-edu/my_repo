#include<stdio.h>
int main()
{
int x,y,z,p,q;
x=3>4; //here first run relational operator i.e > then run assignment operator , so here statement is false thus the value will be 0
printf("value of x=3>4 is %d\n",x);

y=3<=4; // here statement is true thus answer will come 1 
printf("value of y= 3<=4 is %d\n",y);

z=4!=3; // 4 is not equal to 3 which is true thus result yield 1
printf("value of z= 4!=3 is %d\n",z);

p=5>4>3; // here their is two same priority operator thus , operator run from left so first run 5>4 i.e true so es ka result 1 ho gaya now second operator will run i.e 1>3 // 1 because 5>4 true and its value gets replaced by 1 so as a whole result yield 0
printf("value of p= 5>4>3 is %d\n",p);

q=5>4<3;  //here 5>4 true so result yield 1 not  1<3  true , thus as a whole statement is true thus result yields 1
printf ("value of q= 5>4<3 is %d\n",q);

return 0;



}
