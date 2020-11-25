#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct stack
{
int size;
int  top;
char *array;
};

int is_full(struct stack * ptr)
{
if(ptr->top == ptr->size-1)
	return 1;
else 
	return 0;
}

int is_empty(struct stack *ptr )
{
if (ptr->top==-1)
	return 1;
else 
	return 0;
}

void  push(struct stack * ptr,char  value)
{
	if (is_full(ptr))
	{printf("stack overflow! cannot push %d to the stack\n" ,value);
	}		
	else
	{
	ptr->top++;
	ptr->array[ptr->top]=value;
	}
}

char  pop(struct stack *ptr)
{
	if(is_empty(ptr))
	{
	printf("stack underflow! cannot pop from the stack \n");
	return -1;
	}
	else
	{	char value =ptr->array[ptr->top];
		ptr->top--;
		return value;
	}
}


int parenthesis_matching(char * exp)
{

// create and intialize the stack
struct stack *sp;
sp->size=100;
sp->top=-1;
sp->array=(char *)malloc(sp->size* sizeof(char));
for (int i=0;exp[i]!='\0';i++)
{
	if (exp[i]== '(' )
	{
	push(sp,'(' );
	}
	else if (exp[i]==')')
	{
	
	if(is_empty(sp))
	{
		return 0;
	}	
	pop(sp);
	}
}
if (is_empty(sp))
{
return 1;
}
else
{
return 0;
}
}

void main()
{
char *exp;
printf("enter the expression \n");
gets(exp);
	if (parenthesis_matching(exp))
	{
	printf("the parenthesis is matching \n");
	}

	else
	{
	printf("the parenthesis is not  matching \n");
	}
}
