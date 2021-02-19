#include<stdio.h>
#include<stdlib.h>
struct node 
{
int data;
struct node * next;
};

struct node * start=NULL;

struct node * create_node()
{
struct node* new= (struct node *) malloc (sizeof(struct node));
return new;
}

void  insertion()
{
struct node * temp;
temp=create_node();
printf("enter a number to be input \n");
scanf("%d",&temp->data);
temp->next=NULL;
if(start==NULL)
start=temp;
else
{
struct node * rear;
rear=start;
while(rear->next!=NULL)
{rear=rear->next;}
rear->next=temp;
}
}
struct node *  deletion(struct node * start)
{
if(start ==NULL)
{printf("linked list is empty");}
else
{
struct node * tempt= start;
int deleted_data=start->data;
start=start->next;
free (tempt);
printf("\n%d element is deleted \n",deleted_data);
return start;
}
}

void traversal(struct node * start)
{
if(start==NULL)
{printf("linker list is empty \n");}
else
{
while(start!= NULL)
{
printf("%d \t ",start->data);
start = start->next;
}
}
printf("\n\n");
}

void reverse(struct node * start)   //reversal via recursion 
{
	{
	if(start !=NULL)
	{
	reverse(start->next);
	printf("%d \t",start->data);
	}

}
}
/*
struct node * reverse_iteration(struct node * start)  //reversal via iteration
{
static struct node * front ;static struct node *rear;
front=rear=NULL;
while(start!= NULL)
{
rear=start->next;
start->next=front;
front=start;
start= rear;
}
return start;
}
*/

int main()
{
int choice;
while(1)
{
printf("\n\n1.insertion \n2.deletion \n3.traversal\n4.revrse linked list \n5.exit\n");
printf("please select your choice\n");
scanf("%d",&choice);
switch(choice)
{
	case 1:insertion();
	       break;
	case 2:start=deletion(start);
	      break;
	case 3:traversal(start);
	      break;
	case 4:reverse(start);
	       break;
	case 5:exit(0);
	      break;
	default : printf("invalid input\n");
		 break; 
}
}
}
