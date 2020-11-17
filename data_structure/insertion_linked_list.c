#include<stdio.h>
#include<stdlib.h>

struct node  //we made a node which have a data and a pointer block 
{
int data;
struct node* next;   //this is struct node type pointer which point the struct node
};

struct node* liked_list(int x, int y, int z)
{
struct node * head,* second, * third;  
head=(struct node *)malloc(sizeof(struct node));   //here we made a node by allocating dynamic memory whose address stored in head node pointer block
//as these are dynamic memory which is strored in heap
second=(struct node*)malloc (sizeof(struct node));
third=(struct node*)malloc (sizeof(struct node));

//upto here we made node now we have to linked them
head->data=x;
head->next=second;  //linked first and second node
second->data=y;
second->next=third;  //linked second and third node
third->data=z;
third->next=NULL;  // as third node is last so its point null i.e terminating the list at third node
return head;
}

void traversing(struct node *ptr)
{	printf("\n");
	while(ptr!=NULL)
	{
printf("%d \t",ptr->data);
ptr =ptr->next;
	}
printf("\n");

}

struct node* insert_at_first(struct node * ptr)
{
int m;
struct node * new_head=(struct node *)malloc(sizeof(struct node));
new_head->next=ptr;
printf("enter the element which want to store in the new head \n");
scanf("%d",&m);
new_head->data=m;
return new_head;
}

struct node * insert_at_between(struct node *ptr)
{int n,m;
	printf("enter the index where node is to insert \n");
	scanf("%d",&n);
	struct node * new_node=(struct node *)malloc(sizeof(struct node));
	struct node *p=ptr;
	int i=0;
	while(i!=n-1)  
	{
	p=p->next;
//here we didn't directly add p+n , to reach the destination address because this is not array ,in linked list address is randomly stored 
	i++;
	}
	new_node->next=p->next;  //very important line (here we make p->next me jo address store hai wo store ho jayega new_node-> next me )
	p->next=new_node;
	printf("enter the data to be stored in new node \n");
	scanf("%d",&m);
	new_node->data=m;
	return ptr;
}

struct node * insert_at_end(struct node *ptr)
{ 
	int i=0,m;
	struct node * new_node=(struct node *)malloc(sizeof(struct node));
	struct node *p=ptr;
	
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->next=new_node;
	new_node->next=NULL;
	printf("enter data to be stored in the new node \n");
	scanf("%d",&m);
	new_node->data=m;
	return ptr;
}

void main()
{int x,y,z,choice;
	struct node *ptr;
	printf("enter the data stored in the liked list \n");
	scanf("%d%d%d",&x,&y,&z);
	printf("\n");
	ptr=liked_list(x,y,z);
	traversing(ptr);
	while(1)
	{
	printf("select the insertion type \n 1.insert at beginning \n 2.insert in between \n 3.insert at end \n 4.exit \n");
	scanf("%d",&choice);
	switch(choice)
	{	case 1:ptr= insert_at_first(ptr);
		break;  
		case 2:  ptr=insert_at_between(ptr);
		break;
	
		case 3: ptr=insert_at_end(ptr);
		break;

		case 4:
			exit(0);

		default : printf("\n invalid choice \n");
	}
	traversing(ptr);
	printf("select another choice \n \n");
}
}
