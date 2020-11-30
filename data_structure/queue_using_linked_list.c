/* here we are using FIFO in queue i.e first in first out */
#include<stdio.h>
#include<stdlib.h>
struct queue
{
int front;
int rear;
int value;
struct queue * next;
};


int is_full(struct queue * head)
{ 
	if (head->front == head->rear && head->front !=-1 )
	{
	printf("queue overflow \n");
	return 1;
	}
	else 
		return 0;
}

int is_empty(struct queue * head)
{
	if(head->front == -1)
	{
	printf("queue underflow \n");
	return 1;
	}
	else 
		return 0;
}

struct queue *  enqueue(struct queue * head)
{
if (!is_full(head))
{	printf("please enter the value of item \n");
		int a;
	scanf("%d",&a);
	if (head->rear==-1)
	{
	head->front++;
	head->rear++;
	head->next =NULL;
	head->value=a;
	}
	else
	{
	head->rear++;
	head->next=(struct queue *)malloc(sizeof(struct queue));
	head=head->next;
	head->value=a;
	}
}
printf("\n");
}
int dequeue (struct queue * head)
{
	if(!is_empty)
	{
	int * ptr = &head->front;
	head->front++;
	free(ptr);
	}
}

void traversing(struct queue * head)
{
do{
printf("\n%d \t",head->value);
head=head->next;
}while(head!=NULL);
}


void main()
{
struct queue * head=(struct queue *)malloc(sizeof(struct queue));
struct queue * front =NULL;
struct queue * rear=NULL;
struct queue * ptr=head;
head->front=-1;
head->rear= -1;
head->next=NULL;
while (1)
{
printf("please select your choice \n ");
printf("1. enqueue \n2. dequeue \n3. display \n 4. exit \n");
int x;
scanf("%d",&x);
switch (x)
{
	case 1:ptr=enqueue(ptr);
		break;
	case 2:dequeue(head);
	       break;
	case 3: traversing(head);
		break;
	case 4: exit (0);

	default:printf("invalid input \nplease select again \n\n\n ");
		break;


}
printf("\n\n\n");
}
}
	
