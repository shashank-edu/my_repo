#include <stdio.h>

/*
int main()
{
int i,e;
scanf("%d %d",&i,&e);
fflush(stdin);
float interior[i],exterior[e];
for(int count =0; count < i;count ++)
{
    scanf("%f",&interior[count]);
    fflush(stdin);
}
for(int count=0;count < e ;count ++)
{
    scanf("%f",&exterior[count]);
    fflush(stdin);
    
}
int index_int=0;
float sum_int=0;
while(index_int < i)
{
    sum_int +=interior[index_int];
    index_int++;
}
float sum_exter=0;
int index_exter;
while(index_exter< e)
{
    sum_exter +=exterior[index_exter];
    index_exter++;
}

float total=(sum_int *18) + (sum_exter * 12);

printf("total estimated cost : %0.1f INR \n",total); 
    
}
*/


#include <stdio.h>

int main()
{
int i,e;
scanf("%d %d",&i,&e);
fflush(stdin);
float external=0,internal=0;
float cost_extern=0,cost_intern=0;
for(int count =0; count < i;count ++)
{
    scanf("%f",&internal);
    cost_intern= cost_intern+internal;
    fflush(stdin);

}
for(int count=0;count < e ;count ++)
{
    scanf("%f",&external);
    cost_extern=cost_extern+external;
    fflush(stdin);

}

float total=(cost_intern *18) + (cost_extern * 12);

printf("total estimated cost : %0.1f INR \n" ,total);

}


