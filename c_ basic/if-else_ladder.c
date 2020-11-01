#include<stdio.h>
int main()
{
int x;
printf("enter your marks \n");
scanf("%d",&x);
	if (x>=90)
		printf("A grade \n");
	else if (x>=80)  //here we come in this stage because marks is not >=90 thus we don't need to write (x>=80&&x<90) we can simply write it as (x>=80) 
		printf("B grade \n");
	else if (x>=70)    // and this same follow here also so we remove &&x<80
		printf("C grade \n");
	else 
		printf("D grade \n");

return 0;
}

//here 90<= A
//     80<=b<90
//     70<=c<80
//     70>a
