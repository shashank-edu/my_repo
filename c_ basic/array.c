#include<stdio.h>
void main(void)
		{
		int c;
		printf("enter a no. for which avg of whole no. is find \n");
		scanf("%d",&c);
		int x[c],sum=0,avg;
//by [<no.of variable needed>]this we can make desired no. of variables 
//es me yeh hua ki es me 10 alag alag variables bane or yeh sab variables memory me ek sath gaye or yeh sare ke sare ek hi name se access ho jayege
//i.e a group of variables or yeh pure group ka nam hai (a) but en sab ka individual koe nam nhi but en sab ka position no. hai jin ko hum index bhi bolate hai 
//as because in c language we start the no. from 0 thus first variable index no. will be 0
//[] square bracket always used in array, agar hum variable assign karte samay x[5 ] likhate hai tah es ka mtlb hota hai ki we made 5 different variable and if (i.e in decleration statement) and if we use any where else (action  statement) then we consider it as a variable of index 5 on group a.

		printf("enter %d numbers \n",c);
		for(int y=0 ;y<=(c-1) ;y++) //here because we have to put value in a[0] first i.e why we write 0 instead of any other no.
		scanf("%d",&x[y]); //to enter a 10 value we apply a loop in scanf
		for(int a=0 ;a<=(c-1) ; a++) 
		sum=sum + x[a];
		avg=sum/(c); 
		printf("the sum of avg of %d is %d \n",c,avg);
		}
