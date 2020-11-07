#include "stdio.h"
#define action(a,b)  a##b+a*b
void main()
{
printf("%d \n",action(3,4)); 
//here  a means 3 and b means 4  ,, and a##b means 34 ,so a##b+a*b =>34+3*4 => 34+12 =>46
}











/*
#define country india
void main()
{
#if country==pakistan
	printf("pakistani rupees");
#elif country==nepal
		printf("nepali rupees");
#elif country==bangladesh
		printf("taka");
#else
	printf("indian rupees");
	
#endif
}
*/
