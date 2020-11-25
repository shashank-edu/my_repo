/* here we convert the inflix expression to equivalent postfix */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stack  
{
int top;
int size;
char *array;
};

int is_empty(struct stack *sp)
{
if (sp->top==-1)
	return 1;
else 
	return 0;
}

char stacktop(struct stack *sp)
{
return sp->array[sp->top];
}
void  push(struct stack *sp, char operant)
{
sp->top++;
sp-> array[sp->top]= operant;
}

char pop(struct stack *sp)
{
	if (is_empty(sp))
	{
	printf("stack underflow! cannot pop from the stack \n");
	return -1;
	}
	else
	{		
	char value;
value=sp->array[sp->top];
sp->top--;
return value;
}
}

char * infix(char * s)
{
printf("enter the expression \n ");
__fpurge(stdin);
gets(s);
return s;
}

int precedence(char ch)
{
	if(ch == '*' || ch== '/')
		return 3;
	else if(ch == '+'||ch =='-')
	       return 2;
	else 
	return 0;	

}

int is_operator(char ch)
{
if (ch== '+' || ch== '-'||ch=='*'||ch == '/')
	return 1;
else 
	return 0;
}

char * infix_to_postfix(char * infix)
{
int l ,i=0,j=0;
l=strlen(infix);
char * postfix=(char *)malloc((l+1)*sizeof(char));
struct stack *sp =(struct stack *)malloc(sizeof(struct stack));
sp->top =-1;
sp->size=l+1;
sp->array=(char *)malloc(sp->size *sizeof(char));
while (infix[i]!='\0')
{
if (!is_operator(infix[i]))
	{
		postfix[j]=infix[i];
		i++;
		j++;
	} 	
else 
{
	if (precedence(infix[i])>precedence(stacktop(sp)))
		{	push(sp,infix[i]);
		i++;

		}
	else 
	{	postfix[j]=pop(sp);
		j++;
	}
	
}
}
while(!is_empty(sp))
{
 postfix[j]=pop(sp);
 j++;
}
postfix[j] ='\0';
return postfix;
}

void main()
{

char *s;
char *p=(char *)malloc(sizeof(char));
s=infix(p);
p=infix_to_postfix(s);
puts(p);
	
}
