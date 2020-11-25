#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
int data;
struct node* next;
}NODE;

NODE *create_linked_list(int x,int y,int z)
{
NODE* head=(NODE *)malloc(sizeof(NODE));
NODE *second=(NODE *)malloc(sizeof(NODE));
NODE *third=(NODE *)malloc(sizeof(NODE));

head->next=second;
second->next=third;
third->next=NULL;

head->data=x;
second->data=y;
third->data=z;
return head;
}

void traverse(NODE* head)
{
	NODE *ptr=head;
	printf("\n");
	while(ptr!=NULL)
	{
	printf("%d \t",*ptr);
	ptr=ptr->next;
	}
	printf("\n \n");
}


NODE * deleting_first_node(NODE * head)
{
NODE *ptr=head;
head=head->next;
free(ptr);
return head; 
}

NODE *deleting_node_in_between(NODE * head)
{
int index,i=0;
NODE *ptr=head;
NODE *q=head->next;
printf("enter the index which has to be delete \n");
scanf("%d",&index);
for (i;i<index-1;i++)
{
ptr=ptr->next;
q=q->next;
}
ptr->next=q->next;
free(q);
return head;
}

NODE* deleting_last_node(NODE * head)
{NODE * ptr=head;
NODE *q=ptr->next;
	while(q->next !=NULL)
	{ptr=ptr->next;
	q=q->next;
	}
ptr->next=NULL;
free(q);
return head;
}

NODE* deleting_element_of_given_value(NODE *head)
{int value;
	NODE* ptr=head;
	NODE* q=head->next;
printf("enter the value which has to be deleted \n");
scanf("%d",&value);
while(q->data!=value && q->next!=NULL)
{	ptr=ptr->next;
	q=q->next;
}
if(q->data==value)
{
		ptr->next=q->next;
		free(q);
}
else if(q->data!=value)
	printf("not such value exist \n");
	
return head;
}

void main()
{
int x,y,z,choice;
NODE* head;
printf("enter the data stored in the liked list \n");
scanf("%d%d%d",&x,&y,&z);
head=create_linked_list(x,y,z);
traverse(head);
while (1)
{
printf(" 1. deleting the first node \n 2. deletion of node in between \n 3. deleting the last node \n 4.deletion of element of desired value \n 5. exit \n");
printf("select the deletion type \n");
scanf("%d",&choice);
switch(choice)
{	case 1:head=deleting_first_node(head);
	break;
	case 2:head=deleting_node_in_between(head);
	break;
	case 3:head=deleting_last_node(head);
	break;
	case 4:head=deleting_element_of_given_value(head);
	break;
	case 5: exit(0);
	default :printf("wrong input please try again \n");
		 break;

}
traverse(head);
}
}
