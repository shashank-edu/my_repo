#include<stdio.h>

int main()
{
    int element_1=0,element_2=1,size,sum=0;
    scanf("%d",&size);
    int count_even=0, count_odd=0;
    if (size<5 || size> 20)
    {printf("invalid number \n");
    return 0;
    }
for(int count =0;count <size;count ++) 
{
    printf("%d\t",element_2);
    sum=element_1+element_2;
    element_1=element_2;
    element_2=sum;
 if(sum%2 == 0)
 count_even++;
 if(sum%2 == 1)
 count_odd++;
}
printf("\n");
    printf("%d\n%d\n",count_even,count_odd);
}
