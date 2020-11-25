#include "stdio.h"
#define  product(a,b) a*b
void main()
{
printf("product of 3+2 and 4-6 is %d \n ",product(3+2,4-6));
// here a is replaced by 3+4 , a doesn't mean 5, a means expression 3+2 and b means expression 4-6, so product replaces as 3+2*4-6
// so as per priority law 3+8-6 =>11-6 =>5
// answer will come 5 not -10
}


















/*
#define SUM(a,b) a+b   //a time of making a function we can also  write an argument pr argument me koe data type nhi hoga and the character sequence which is going to be replace by is a+b

void main()
{
printf("sum of 3 and 4 is %d \n", SUM(3,4));  //here 3 or 4 takes the place of a,b  respectively and replace by a+b i.e 3+4
//SUM(3,4) koe function nhi hai yeh toh bs deekhane me lag raha hai kyu ki compiler se pahale yeh replace ho jayega 3+4 me 
}
 

*/

/*
# define pi 45.67
void main ()
{
printf("%f\n",pi);
}

*/
