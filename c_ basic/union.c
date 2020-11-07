#include<stdio.h>

union item
{
int x; float y; char z;
};

void main()
{

union item b;
b.x=89;
printf("%d\n",b.x);    //here we do is as x value is print and function ends then the memory allocated to next function
//so that is why we use one by one of the function because union call max space as  4 bytes and if we printf all the variable simultaneouslt then the result yield wrong value because data type does't carry enougth memory to allocate all of the variable siomultaneously
b.y=23.4;  //yaha x ki value overwrite ho gayi hai y ki value se toh agar if we want to print x value after that we can't be able to that because x variable hi overwrite ho gaya hai y variable se 
printf("%f\n",b.y);
b.z='a';
printf("%c\n",b.z);
}

/*
union ka jayada tar use low level programming me hoti hai jab ki structure ka use high level programming me kiya jata hai
*/
