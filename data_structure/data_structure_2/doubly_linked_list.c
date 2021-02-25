#include<stdio.h>
#include<stdlib.h>

struct node 
{
struct node * prev;
struct node * next;
int data;
};

static struct node *head=NULL;
static struct node * tail;

struct node * node_creation()
{
struct node *temp= (struct node *)malloc(sizeof(struct node ));
return temp;
}

struct node * insert_start(struct node *head)
{
struct node * temp=node_creation();
printf("enter the value of element \n");
scanf("%d",&temp->data);
temp->next=head;
temp->prev=NULL;
head=temp;
return head;
}

struct node *  insert_end(struct node *  tail )
{
struct node * temp=node_creation();
printf("enter the value of element \n");
scanf("%d",&temp->data);
tail->next=temp;
temp->prev=tail;
temp->next=NULL;
tail=temp;
return tail;
}

void insert_node(struct node * head)
{
int index,count=0;
printf("enter the index no. where item is inserted \n");
scanf("%d",&index);
struct node * temp=node_creation();
struct node * traverse=head;
struct node * traverse_tail;
while(count<index)
{
traverse=traverse->next;
}
traverse_tail=traverse->next;
traverse_tail->prev=temp;
temp->next=traverse_tail;
temp->prev=traverse;
traverse->next=temp;
}


void insertion()
{
//struct node * tail,*head;
struct node * new_node=node_creation();
printf("enter the value of element\n");
scanf("%d",&head->data);
new_node->prev=NULL;
new_node->next=NULL;
if(head==NULL)
{
	head=new_node;
	tail=head;
}
else
{
struct node * temp=head;
tail->next=new_node;
new_node->prev=tail;
tail=new_node;
}
printf("1.insert at start \n2.insert at end\3.insert at any node\n");
	printf("please select your choice \n");
	int choice;
	scanf("%d",&choice);
switch(choice)
{
	case 1:head=insert_start(head);
	       break;
	case 2:tail=insert_end(tail);
	       break;
	case 3:insert_node(head);
		break;
	default :printf("invalid input");
		 break;
}

}	 		

void delete_start()
{
struct node * temp;
temp=head;
head=head->next;
head->prev=NULL;
free(temp);
}

void delete_end()
{
struct node * temp =head;


}

void delete_node()
{


}

void deletion()
{
int choice;
printf("1.delete at start\n2.delete at end\n3.delete at any node\n");
scanf("%d",&choice);
switch(choice)
{
	case 1:delete_start();
		break;
	case 2:delete_end();
	       break;
	case 3:delete_node();
	       break;
	default :printf("invalid input");
		 break;

}
}

void traverse()
{
while(head!=NULL)
{
printf("%d\t",head->data);
head=head->next;
}
printf("\n\n");
}


int main()
{
int choice;
printf("1.insersion \n2.deletion \n3.traverse \n4.exit\n");
scanf("%d",&choice);
while(1)
{
switch(choice)
{
	case 1:insertion();
	       break;
	case 2:deletion();
	       break;
	case 3:traverse();
	       break;
	case 4: exit(0);
		break;
	default : printf("invalid input");
		  break;
}
}
}

