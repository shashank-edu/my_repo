#include<stdio.h>

typedef struct date
{
unsigned int d:5; //here we write max calculated value i.e 31 having of 5 bits 
unsigned int m:4;
unsigned int y;  //we don't specify anything here because we can't specify any year which contain max binary bits
}DATE;
//now by using bit field memory be allocated by the block of 4-4 bytes only so here we don,t modify year so its take 4 bytes
//now a 4 bytes of block assign i.e 32 bits , now memory assign start of first 4 bits assign to date and next 5 bits assign to month 
//now i.e 11 bits used , and remaning bits are remained empty as assignment of memory always be done on 4 bytes as we use int data type,i.e jab tak data 32 bits cross nhi karata hai tab tak use memory ese block me mil jayegi 
//thus by data field now memory allocate in ram is 8 bytes , while before it was 12 bytes


/*
typedef struct date
{
unsigned d;  //as we know date never exceeds 31 and if do binary of 31 comes out to be 11111 i.e we need only 5 bits to store date 
//but we gave here 4 bytes i.e 32 bits  so yahi wastage ko hum kam kr sakate hai 
unsigned m;  // month never be more than 12 , binary is 1100 i.e 4 bits only
unsigned y;
}DATE;
*/



void main()
{
DATE d1={8,11,2020};
printf("size of d1 = %d \n",sizeof(d1));
}
