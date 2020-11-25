/* here we use float as a data type */
#include<stdio.h>
void main(void)
		{
		int y,x[10],sum=0;
		 float avg; //here we apply float because average will also come in decimals
		printf("enter 10 numbers \n");
		for(y=0 ;y<=9 ;y++)	
		scanf("%d",&x[y]);
		for( y=0 ;y<=9 ; y++) 
		sum=sum + x[y];
		avg=sum/10.0; //why here 10.0 because agar dono value integer me hogi toh answer bhi integer me hi ayega and it is necessary action to perform
		printf("the sum of avg is  %f \n",avg);
// as because here avg is in float so it is necessary to use %f instead of %d
		}
