/* stack using array */
#include<stdio.h>
#include<stdlib.h>
int overflow(int size , int  top)
{
if (size == top)
	return 1;
else 
	return 0;

}

int underflow(int top)
{
if (top == -1)
	return 1;
else 
	return 0;

}

int push(int  * stack , int * top, int size)
{
int top_1=* top;
if(overflow(size, *top))
{
	printf("stack is overflow \n");
	return 0;
}

else 
{
*top = *top+1;
int data;
printf("input value of element \n");
scanf("%d", &data);
stack[*top]=data;
return 0;
}
}


int pop(int * stack ,int * top, int size )
{
if (underflow(*top))
	printf("stack is underflow \n");
else 
{
int pop_element;
pop_element= stack[*top];
*top=*top-1;
printf("%d element is poped out \n",pop_element);
return (pop_element);
}
}

void traverse(int * stack , int *top)
{
if(!underflow(*top))	
for(int count=0; count <=* top ; count++)
{
printf("%d \t", stack[count]);
}
else
printf("stack in underflow \n");
printf("\n");
}


int main()
{

int size,top,choice;
printf("enter the size of stack \n");
scanf("%d",&size);
top=-1;
int stack[size];
while(1)
{	
printf("1. push \n2. pop \n3. traverse \n4. exit \n");
printf("please select the operation \n");
scanf("%d",&choice);
switch(choice)
{
	case 1:push(stack, &top, size);
	       break;
	case 2:pop(stack, &top , size);
		break;
	case 3:traverse(stack, &top);
	       break;
	case 4:exit(0);

	default : printf("invalid input \n");
		  break;

}

}
}
