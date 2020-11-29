#include<stdio.h>
#include<stdlib.h>

struct circular_queue
{
	int size;
	int f;
	int r;
	int * arr;
};

int is_empty (struct circular_queue * q)
{	if (q->f==q->r)
	return 1;
	else 
	return 0;
}

int is_full (struct circular_queue *q)
{
if ((q->r+1)%q->size == q->f)
	return 1;
else 
	return 0;
}


void enqueue (struct circular_queue *q)
{ 
if (is_full(q))
{printf("queue overflow \n");}
else
{	q->r=(q->r+1)%q->size;
	printf("enter the value of element to be stored \n");
	scanf("%d",&q->arr[q->r]);
}

}
int dequeue(struct circular_queue *q)
{

if(is_empty(q))
	printf("queue is empty \n");
else

	q->f=(q->f+1)%q->size;
	int a =q->arr[q->f];	
	return a;
}

void display(struct circular_queue *q)
{
int i=q->f;
while(i != q->r)
{
printf("%d \t",q->arr[i]);
i=(i+1)%q->size;
}
printf("%d \n",q->arr[q->r]);
}

void choice(struct circular_queue *q)
{
while (1)
{
int a;
printf("please select your choice \n");
printf("1. enqueue \n2. dequeue\n3. display\n4. exit\n");
scanf("%d",&a);
switch(a)
{	case 1: enqueue(q);
	break;
	case 2: dequeue(q);
		break;
	case 3: display(q);
		break;
	case 4: exit(0);
	
	default:
		printf("invalid input please try again \n\n\n");

}
}
}


int main()
{

int s;
printf("please enter the size of queue \n");
scanf("%d",&s);
struct circular_queue cq;
cq.size=s;
cq.f=cq.r=0;   // yaha pe hum front and rear index ko zero hi rakhate hai kyu ki jab bhi hum is_full check karege toh abhi bhi q->f =-1; nhi ho payega agar ek bar start ho gaya ek es bad
cq.arr=(int* )malloc(cq.size*sizeof(int)); 
choice(&cq);
return 0;
}
