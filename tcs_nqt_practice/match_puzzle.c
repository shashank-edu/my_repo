/* armstrong number */

#include<stdio.h>
#include<string.h>

int main()
{
int lower,upper;
scanf("%d",&lower);
scanf("%d",&upper);

if(lower<=0 || upper<=0)
{
printf("wrong input \n");
return 0;
}

else
{
for(lower ; lower <= upper ; lower++)   
{
	int digit =0;
	int n=lower;  //151
	while(n != 0)    
	{
	n=n/10;//15//1//0.1
	digit++;  //1//2//3
	}
	int count=lower; //count -> 151
	int sum =0;
	int remainder=0;
	while(count != 0)   ///151 //15 //1
	{
	int product=1;  //move later
	remainder=count%10;   //1//5  //1
	for(int i=0;i<digit;i++) //0<3 //0//1//2//3   -> //0//1//2
	{
	product =product * remainder; //1*1*1 // ->1*5->5*5->25*5->125 
	}
	sum =sum + product; //0+1=1 //1+125->126
	count=count/10; //151/10 ->15 ->15/10 ->1
	}
	if(sum == lower)
	{
	printf("%d \t",sum);
	}

}
printf("\n");
}
}
