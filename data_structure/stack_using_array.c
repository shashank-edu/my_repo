/* stack by code with harry */
#include<stdio.h>
#include<stdlib.h>
struct stack 
{
int size;
int top;
int *arr;
};

struct stack* push(struct stack *s )
{int value;
if(s->top==s->size-1)
{
printf("stack is overflow \n");
printf("\n");
}
else 
{	printf("enter the value \n");
	scanf("%d",&value);
	s->top++;
	s->arr[s->top]=value;
}
return s;
}

struct stack * pop(struct stack *s)
{
	int value;
if (s->top ==-1)
{printf("stack is underflow \n");
printf("\n");
}
else
{	
	int value =s->arr[s->top];
	s->top=s->top-1;
 
}
return s;
}

void main()
{	
//struct stack s;
//s.size=6;
//s.top=-1;
//s.arr =(int *)malloc(s.size *sizeof(int));
int choice;
struct stack * s =(struct stack *)malloc(sizeof(struct stack));
s->size=6;            //arroy operator first do dereferencing and then apply dot
s->top=-1;
s->arr=(int *)malloc(s->size * sizeof(int ));
while(1)
{
printf(" 1. push element \n 2. pop element \n 3. exit \n");
printf("please select your choice \n");
scanf("%d",&choice);

switch(choice)
{
	case 1:s=push(s);
	       break;
	case 2:s=pop(s);
	       break;
	case 3:exit(0);

	default :
	       printf(" \n invalid input \n");
	       break;
}
for (int i=0;i<=s->top;i++)
{printf("%d \t",s->arr[i]);
}
printf("\n");
}
}
