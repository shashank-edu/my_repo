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
{	while(ptr!=NULL)
	{
printf("%d \t",ptr->data);
ptr =ptr->next;
}
printf("\n");
}
void main()
{int x,y,z;
	struct node *ptr;
	printf("enter the data stored in the liked list \n");
	scanf("%d%d%d",&x,&y,&z);
	printf("\n");
	ptr=liked_list(x,y,z);
	traversing(ptr);
}

