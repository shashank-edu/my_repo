#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
float path[8]={800,600,750,900,1400,1200,1100,1500};
char busstop[8][3]={"TH","GA","IC","HA","TE","LU","NI","CA"};
char source[3],destination[3];
scanf("%s%s",source,destination);
float fair=0;
int str,des;

for (int count =0; count<8;count++)
{
if(strcmp(source,busstop[count]) ==0 )
	str=count;
if(strcmp(destination,busstop[count])  == 0)
	des=count;
}
if(str == des)
{	printf("INVALID INPUT \n");
	return 0;
}
else 
{
int i=str+1;
while(i != des+1)
{
fair +=path[i];
i=(i+1)%8;

}
fair = (float) fair / 200;
printf("%.1f INR\n",ceil(fair));
return 0;
}
}
