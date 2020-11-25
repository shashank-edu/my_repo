/* here we are see the use of static storage class  */
#include<stdio.h>
void f1();
void main()
{
f1();
f1();
}

void f1()
{
static int i; //yaha kyu ki static data type hain toh pahale se hi i=0 hai toh no need to specify it
//and yaha i ka variable tab tak rahega jab tak program end nhi ho jata toh f1();function ke call karane pe ek variable banega i , fir us ki value band jayegi as 1 then function end ho kr f2() call hoga toh ab dobara i variable nhi banega kyu ki pahale se hi i=1 bana hua hai ab us ki value band jayegi i=2 and then print ho jayega 
i++;
printf("i=%d \n",i);

}


/*
void f1()
{
int i=0;  //yaha abhi automatic storage type hai  toh i me garbage value hai , so hame kuch na kuch value rakhan padega 
//ab jaise pahala function f1() call hoga toh ek variable banega i, and function f1() ke end hone ke bad wo variable destroy ho jayega or f2() ke call karane pr dobara ek fresh variable bnega
i++;
printf("i=%d \n",i);
}

*/
