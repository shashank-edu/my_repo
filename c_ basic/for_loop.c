#include<stdio.h>
int main()
{
int x;

for (x=3;x<10;++x)  //in for loop 2 semi colon ; lagana compulsory hota hai , jab for instruction run karega toh pahale expression 1 execute hoga i.e initialization section, fir expression 2 i.e control section, and if expression true hai toh processor block me ja kr program run kar dega of fir .
{	printf("hello \n");

}        // now after perform the task of written in block then the processor will go to the third expression and run that command i.e flow condition will run the , then we again come to condition ie expression 2 yani ki exrpression 1 i.e initializing section sirf ek hi bar chalega the this loop will continue till the false condition occur return 0;
}
