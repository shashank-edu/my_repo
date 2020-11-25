#include<stdio.h>
int main()
{
int x=3;  //counter variable , initialise as value 1
	do     //by this processor directly go into the body of do and perform the intruction
	{
		printf("hello\n");
		x++;  //now after performing the instruction the value of variable is increased
	
	}while(x<5); //here value of x become x+1 now here condition is checked if it is true then processorn then move to "do" the instruction again but if condition becomes false then the program will end 

return 0;

}
