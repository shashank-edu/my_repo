/* here to try the use of external storage class */
#include<stdio.h>
void f1();
void main()
{
extern int x;   // as the system runs from the first to last line of main so as the global varible define later and the processor process the line fist in the main function 
//thus it will give error and say undeclared
//so to we the global variable we here write entern int x; only to tell that here we using an global varible so that processor first access that variable then proccess further in the main function
//by writing extern int x; we are not defing a variable we are just linking the variable which already define in the program 
printf("%d \n",x);
f1();
printf("%d \n",x);
}

int x;   // this time we define a global variable here 

void f1()
{
x++;
printf("%d \n",x);

}







/*
int x;
//global variable here we didn't write extern
void f1();
void main()
{

printf("%d \n",x);
	f1();
printf("%d \n",x);   //as value of global variable increases as f1() calls
}

void f1()
{

	 int x=5;    //now if bahar global x ko or wohi variable agar anadr bana ho toh kam ata hai rule of proximity, i.e andar wala treat hoga as an variable
	 //so we dont need to define another varaiable if global variable has to used
x++;
printf("%d\n",x);

}

*/
