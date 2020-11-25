
#include<stdio.h>
int main()
{
int x=7,y;
x--; //x=x-1 post decrement //x=6
printf("%d",x);
--x; // x=x-1 pre increment // x=5
printf("%d\n",x);

y=x--; // x=x-1 i.e 4 here y is a assingment operator which always have more priority then post increment which have least priority 
printf("%d %d\n",x,y); //now it print 4 5 -space beacuse we gave space between %d %d
// here first  the value of x is assign to y i.e what ever be the value of x now become value of y and then run increment operator so x value is decrease by 1 and their in no decrement in the value of y   
// x=4
y=--x;
printf("%d%d",x,y); // now as --x is a pre decremant which i also a unary operator so its priority is more than assignment operator thus 
// the value of x is decresed first then the decreced value is assign to y. thus this will print 33 //x=3
return 0;
}
