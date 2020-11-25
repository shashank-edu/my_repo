/* store information of date */

#include<stdio.h>

struct date
{
int d,m,y;
}d2,d3;  
//here we can also make varible like this and this variable will me consiber as global variable  ,, //d2 is a variable having data type date
//and each variable of it are consuming 6 bytes of memory
 	
struct date d1; 
//we can also make data type outside the function as a global variable which can be use on whole function
//here struct is keyword , date is a data type and d1 is a variable


void main()
{
struct date today; //now here we want gave user the option to assign the value
printf("enter today's date \n");
scanf("%d/%d/%d",&today.d,&today.m,&today.y);
printf("date = %d/%d/%d",today.d,today.m,today.y);  
//imporatant as we writing / in between so user also have to sepearate is by / while entering input
}




/*
void main()
{
struct date today,d1;
today.d=06;  
//if we want to initialize the variable later as because we didn't make d variable independently so we have to use dot operation
today.m=11;
today.y=2020;

d1.d=today.d;    //here copy the data present in variable today to another variable d1 here we do manually assign each variable we can do this work as like we do in  array or strings
d1.m=today.m;
d1.y=today.y; 

d1=today;   //as like array data is assign as same sequence  as today have bacause both the varauible is of same data type date ,so that is why it is possible to assign the value directlty
}

*/


/*
void main()
{
struct date today={6,11,2020};  
//we can initialize the value as at the time of definition also as same as we initialize the array , in currly bracket separated by commas
//or yaha pr bhi assignation of value is happen in sequence as the sequence we write at the time of defining
//or agar defininf me alag alag type ke data type hote toh hame wohi order fallow karana padeaga jaise ki structure bananya gaya hai 
}

*/


/*
void main()
{
int x;  
//here we use data type and made a variable as like this we make varaible of non primitive data type 
struct date today; 
//here we use  date as a data type and make variable today 
//but ek rule hota hai jab bhi use defined data type use karate hai toh us ke pahale struct key word likhana jaruri hai 
}

*/

/*struct date
{
int d,m,y;
}d2,d3;  
*/
//here we can also make varible like this and this variable will me consiber as global variable  ,, //d2 is a variable having data type date
//and each variable of it are consuming 6 bytes of memory
 	
struct student
{
int rollno;
char name[20];
int age;
};
