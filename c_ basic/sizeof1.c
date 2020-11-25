#include<stdio.h>
int main()
{
int x,y,z;
x=sizeof(34); //side of a in 100010 i.e 6 bits so it is 0.5 byte

	y=sizeof(23.12);
	z=sizeof('a');
	printf("%d %d %d",x,y,z);
	return 0;


}
