#include<stdio.h>
int main()
{
int x=5,y,p=7,q,m=5,n,r=5,s;
y=x>4;
printf("the value of y=x>4 if x=5 is %d\n",y);

q=!p>4; //here total 3 operator are used in which ! operator have max priority because ! is a also a unary operatos , so first run !x>4 nhi hai sirf x hai i.e !x so here x value is 5 and we know ever non zero no. is true value 1 hogi but yaha NOT ! laga hai toh es ki value badal dega i.e false whose result is 0 , now second operator will run which is 0>4 which is false  so  yields 0 and now this 0 value assign to y so y also becomes 0.
printf("the value of q=!p>4 where p=7 is %d\n ",q);

n=m>4&&m<10; // here 4 operants are used in which which as relation , logic and assign operators in which relation operators have more priority then logic operator or then assign operator, here two same priority relation operators are used so we solve it by left to right but here && operator are used so it is must to check the first statement , so first run m>4 which is true , now we check second statement m<10 , it is also true thus the whole expression yield true i.e 1

printf("the value of n=m>4&&m<10 where m=5 is %d\n",n);

s=r<4&&r<10; // here pahali statement hi false hai toh directly expression false a jayega i.e 0
printf("the value of s=r<4&&<10 where r=5 is %d\n",s);

n=m>4||m<4; //here first statement is true so whole expression is direclty called as true
printf("the value of n=m>4||m<10 where m=5 is %d\n",n);

s=r<4||r<10; // here fisrt statement is false but second statement is true so as per || operator whole expression is true and yield 1
printf("the value of s=r<4||r>10 where r=5 is %d\n",s);

return 0;
}

//outcomes comes as 
//1
//0
//1
//0
//1
//1
