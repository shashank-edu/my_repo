#include<stdio.h>
#include<unistd.h>  //fork() function include in unistd.h header file
void main()
{
if (fork() && fork())   //yaha pahale pahale fork se 1 child process create ho jayega 
{
	fork();
}
printf("hello \n");
}
