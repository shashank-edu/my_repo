#include<stdio.h>


void TOH(int size , int beg , int aux , int end )
{
	if(size>0)
	{	
	TOH(size-1, beg, end , aux);
	printf("%d to %d \t", beg , end);
	TOH(size-1, aux , beg , end);
	}
}

int main()
{
TOH(3,1,2,3);
}
