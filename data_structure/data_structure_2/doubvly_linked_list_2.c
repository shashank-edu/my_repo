#include<stdio.h>
#include<stdlib.h>

struct node
{
struct node *prev;
int info;
struct node * next;
};

void insertstart(struct node ** s, int data);
void insertlast(struct node **s, int data);
void insertafter(struct node **s,struct node * ptr, int data);
void deletefirst(struct node **s);
void deletelast(struct node ** s);
void deletenode(struct node **s,struct node * ptr);

struct node * find(struct node ** s, int element)
{

if(*s==NULL)
return NULL;
else	
{
	struct node * t= *s;
while(t->data != element)
{
if(t->data == element)
return t;
t=t->next;	 
}
return NULL;
}

int main()
{
struct node *start=NULL;
insertstart(&start,10);
insertlast(&start, 20);
struct node * ptr;
ptr=find(&start,20);
insertafter(&start,ptr,30);
deletefirst(&start);
deletelast(&start);
ptr1=find(&start,30);
deletenode(&start,ptr1);
}

void deletenode(struct node ** s,struct node * ptr)
{
	if(*s->next == NULL)
	{*s=NULL; free(ptr);}
	else if(ptr->next == NULL)
	{
	ptr->prev->next=NULL;
	free (ptr);
	}
	else if (ptr->prev == NULL)
	{*s=ptr->next;
	free (ptr);
	}
	else
	{
	ptr->next->prev=ptr->prev;
	ptr->prec->next=ptr->next;
	free (ptr);
}
}

void deletelast(struct node ** s)
{
if(*s==null)
{printf("list is empty \n");}
struct node *t;
t=*s;
while( t->next != NULL)
	t=t->next;
	if ( (*s)->next== NULL)
	*s=NULL;
else
{
t->prev->next=NULL;
free (t);
}
}

void deletefirst(struct node **s)
{
	if(*s==NULL)
	{printf("linked list in empty \n");}
	else
{		
struct node *temp;
temp=*s;
*s=*s->next;
*s->prev=NULL;
free temp;
}

}

void insertafter(struct node **s,struct node * ptr, int data)
{
if(ptr==NULL)
{
	printf("invalid insertion \n");

}
else 
{
struct node * p,temp;
p=(struct node *)malloc(sizeof(struct node));
p->info=data;
p->next=ptr->next;
p->prev=ptr;
ptr->next=p;
if(ptr->next!=NULL)
{
ptr->next->prev=p; //check
}
}
}



void insertstart(struct node ** s, int data )
{
struct node * p;
	p=(struct node *)malloc(sizeof(struct node));
	p->info=data;
	p->prev=NULL;
	if(*s==NULL)
	{
	p->next=NULL;
	*s=p;
	}
	else
	{
	p->next= *s;
	*s=p;
	}
}

void insertlast(struct node **s, int data)
{
struct node * p= (struct node *)malloc(sizeof(struct node));
p->info=data;
p->next=NULL;
if(*s==NULL)
{
p->prev=NULL;
*s=p;
}
else
{
struct node * temp;
temp=*s;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=p;
p->prev=temp;
}
}


