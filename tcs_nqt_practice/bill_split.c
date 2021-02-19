#include<stdio.h>

int main()
{
int n,k;
scanf("%d %d",&n,&k);
int bill[n];
for(int count=0;count<n;count++)
{
scanf("%d",&bill[count]);
}
int b;
scanf("%d",&b);

int index=0;
int sum=0;
while(index != k)
{
sum=sum+bill[index];
index++;
}
if(index < n)
{
index++;
while(index < n)
{
sum= sum + bill[index];
index++; 
}
}
int avg=sum/2;
if(avg == b)
{
printf("correctly calculated \n");
return 0;
}
else
{
int pay=(b-avg);
printf("%d \n",pay);
}
}




