#include<stdio.h>
#include<stdlib.h>
struct arrayqueue
{
int front,rear;
int capacity;
int * array;
};


struct arrayqueue * create_queue()
{
printf("enter the capacity of queue\n");
int capacity;
scanf("%d",&capacity);
struct arrayqueue * ptr =(struct arrayqueue  *)malloc(sizeof(struct arrayqueue));  //if dynamic memory can't allocte it return NULL thus we check
if(!ptr)
return NULL;
ptr->capacity =capacity;
ptr->front=ptr->rear=-1;
ptr->array=malloc(ptr->capacity* sizeof(int));
if(!ptr->array)
return NULL;
return(ptr);
}

int  is_empty(struct arrayqueue * ptr)
{
if(ptr->front == -1)
	return(1);
else
	return 0;
}

int is_full(struct arrayqueue * ptr)
{
if((ptr->rear+1)%ptr->capacity == ptr->front)
	return 1;
else
	return 0;
}


int queue_size(struct arrayqueue * ptr)
{
return((ptr->capacity - ptr->front + ptr->rear +1)%ptr->capacity);  //number of block filled with element
}	

void enqueue(struct arrayqueue *ptr)
{
if(is_full(ptr))
printf("overflow \n");
ptr->rear=(ptr->rear +1)% ptr->capacity;
int data;
scanf("%d",&data);
ptr->array[ptr->rear]=data;
if(ptr->front == -1);
ptr->front=ptr->rear;
}

int dequeue(struct arrayqueue  * ptr)
{
int data =-1;
if(is_empty(ptr))
{printf("queue is empty \n");
return -1;
}
else
{
data=ptr->array[ptr->front];
if(ptr->front == ptr -> rear)
ptr->front=ptr->rear=-1;
else 
ptr->front=(ptr->front +1)%ptr->capacity;
}
printf("%d is dequeued\n",data);
return data ;
}


void deletequeue(struct arrayqueue * ptr)
{
if(ptr)
{
if(ptr->array)
{
free(ptr->array);
}
free(ptr);
}
}

void traverse(struct arrayqueue * ptr)
{
int count =ptr->front;
for((count+1)%ptr->capacity; count <= ptr->rear; count++)
	printf("%d \t",ptr->array[count]);
printf("\n");
}

int main()
{
struct arrayqueue *Q =create_queue();
while(1)
{
printf("1. enqueue\n2. dequeue\n3. delete queue \n");
int choice;
scanf("%d",&choice);
switch(choice)
{
	case 1:enqueue(Q);
	       break;
	case 2:dequeue(Q);
	       break;
	case 3:deletequeue(Q);
	       break;

	       default :printf("invalid input \n");
		break;

}
}
}
