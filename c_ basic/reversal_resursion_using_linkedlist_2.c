#include<stdio.h>
#include<stdlib.h>
#include<string.h>
static int b=0;
int c=1;
struct linkedlist
{
int data;
struct linkedlist * next;
};

struct linkedlist* add(struct linkedlist * ptr)
{
	struct linkedlist * head =ptr;
	printf("please enter the value to be stored \n");
	int i;
	scanf("%d",&i);
	if(b==0)
	{
	ptr->data=i;
	ptr->next=NULL;
	b++;
	}
	else
	{	
	ptr->next =(struct linkedlist *)malloc(sizeof(struct linkedlist));
	ptr=ptr->next;
	ptr->data=i;
	ptr->next=NULL;
	}
return ptr;

}


void traversing(struct linkedlist * ptr)
{
do
{
printf("%d \t",ptr->data);
ptr=ptr->next;
}while(ptr != NULL);
printf("\n");
}


struct linkedlist * reversal(struct linkedlist * ptr)
{
while(ptr!= NULL)
{
ptr=ptr->next;
reversal(ptr);
}
printf("%d \t",ptr->data);

/*
struct linkedlist * head;
head->next=NULL;
while(ptr ->next != NULL)
{
head=ptr;
ptr=ptr->next;
ptr->next=head;
}
printf("HELLO \n");
traversing(ptr);
*/
}



/*
struct linkedlist *  reversal(struct linkedlist * ptr,int  a,int b,int c,int d,int e,int f)
{
struct linkedlist * head=ptr;
ptr->data=f;
ptr=ptr->next;
ptr->data=e;
ptr=ptr->next;
ptr->data=d;
ptr=ptr->next;
ptr->data=c;
ptr=ptr->next;
ptr->data=b;
ptr=ptr->next;
ptr->data=a;
return head;
}

*/


void main()
{
struct linkedlist *head=(struct linkedlist *)malloc(sizeof(struct linkedlist));
struct linkedlist *ptr=head;
int a;
while(1)
{
printf("please select the option \n");
printf(" 1. add item\n 2. display \n 3. reverse traversing \n 4. exit \n");
scanf("%d",&a);
switch(a)
{
	case 1:ptr=add(ptr);
	       break;
	       
	case 2:traversing(head);
	       break;
	case 3: reversal(head);
		break;
	case 4:exit(0);
	
       	default:
		printf("invalid input \n please select again");
}

}
}
