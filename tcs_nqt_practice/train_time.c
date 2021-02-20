#include<stdio.h>
#include<string.h>

int main()
{
	char * RS[]={"PANVEL","KHANDESHWAR","MANSAROVAR","KHARGHAR","BELAPUR","BELAPUR","NERUL"};
	float journey_time[]={0,4,5,3,4,5,3};
	float train_time[]={7.30, 8.2, 12.45, 13.30, 14.44, 15.50, 9.15, 10.20, 23.59, 17.33, 19.20};
	printf("enter time in float \n");
	float current_time;
	scanf("%f",&current_time);
	printf("enter current place \n");
	char *curr_place;
	scanf("%s",curr_place);
	int station_number=0;
	int total_journey_time =0;
	for(int i=0;i<7;i++)
	{
	if(!(strcmp(RS[i],curr_place)))
	station_number =i;
	}

	for(int i =0;i<=station_number;i++)
	{
	total_journey_time += journey_time[i];
	}

	int total_train=0;
	for(int i=0;i<11;i++)
	{
	if(total_journey_time + train_time[i] >= current_time)
		total_train++;
	}
	if (total_train !=0)
		printf("%d\n",total_train);
	else
		printf("invalid input \n");

}
