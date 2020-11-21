/* here the system is incomplete  i have to update it */

#include<stdio.h>
#include<stdlib.h>

struct queue
{
int size;
int front_index;
int back_index;
int  *array;
};

int is_full(struct queue *sp)
{
if (sp->back_index==sp->size-1)
	return 1;
else 
	return 0;
}

void  enqueue(struct queue * sp)
{
if(is_full(sp))
{
printf("queue is full! cannot insert the value \n");
}
else
{
int value;
printf("please enter the value of element \n");
__fpurge(stdin);
scanf("%d",&value);
sp->back_index++;
sp->array[sp->back_index]=value;
}
}

int is_empty(struct queue * sp)
{
if (sp->back_index==sp->front_index)
	return 1;
else 
	return 0;

}

int  dequeue(struct queue * sp)
{
	int a=-1;
if(is_empty(sp))
	printf("queue is already empty cannot dequeue further \n");
else
{
sp->front_index++;
a=sp->array[sp->front_index];
}
return a;
}


void main() 
{
int choice,value;
struct queue  sp;
sp.size=10;
sp.array=(int * )malloc(sp.size *sizeof(int));
sp.front_index=-1;
sp.back_index=-1;
while(1)
{
printf("please select your choice \n");
printf(" 1. enqueue \n 2. dequeue \n 3. exit \n");
scanf("%d",&choice);
switch(choice)
{	case 1:enqueue(&sp);
	       break;
	case 2:value=dequeue(&sp);
	       break;
	case 3:exit (0);

	default :
	       printf("invalid input please try again \n");
	       break;
}

printf("the updated queue is \n");
{for (int i=sp.front_index;i!=sp.back_index;i++)
	printf("%d \t",sp.array[i]);
}
printf("\n");
}
}
