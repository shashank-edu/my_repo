#include<stdio.h>
int main()
{
int x=4,y=6,z,m,n,p;
	z=x>5?4:y;
printf("%d\n",z);

z=x>5?1,2,3:4,5,6;  //agar condition sahi hue toh 2 expression me colan : ke pass wali value assign hogi or agar condition galat hue toh 3 expression me colan : ke pass wali value assign hogi i.e either 3 or 4 , but here condition is wrong so 4 value assign ho jayegi
printf("%d\n",z);

printf("now we apply condition and see input simultaleously\n");
printf("enter two numbers\n");
scanf("%d %d",&m,&n);
printf("the greater number is %d\n",m>n?m:n);

m=x>y?n=9:(p=10);  // here we use cant be able to use m=x>y?n=9:p=10 so we use paranthis
printf("%d\n",m);


return 0;

}
