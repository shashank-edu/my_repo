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


int  peek(struct stack *s)
{int i;
	printf("enter the position from top to know the value of it \n");
	scanf("%d",&i);
if(s->top-i+1<0)
{	printf("invalid position of the stack \n ");
	printf("\n");
	

}
printf( "the value of stack in position %d is %d \n",i,s->arr[s->top-i+1]);
}


void main()
{	
//struct stack s;
//s.size=6;
//s.top=-1;
//s.arr =(int *)malloc(s.size *sizeof(int));
int choice,value;
struct stack * s =(struct stack *)malloc(sizeof(struct stack));
s->size=6;            //arroy operator first do dereferencing and then apply dot
s->top=-1;
s->arr=(int *)malloc(s->size * sizeof(int ));
while(1)
{
printf(" 1. push element \n 2. pop element \n 3. peek an element \n 4. exit \n");
printf("please select your choice \n");
scanf("%d",&choice);

switch(choice)
{
	case 1:s=push(s);
	       break;
	case 2:s=pop(s);
	       break;
	case 3:peek(s);
	       break;

	case 4:exit(0);

	default :
	       printf(" \n invalid input \n");
	       break;
} 
printf("\n \n \n the new value of stack is \n");
for (int i=0;i<=s->top;i++)
{
	printf("%d \t",s->arr[i]);
}
printf("\n \n\n ");
}
}
