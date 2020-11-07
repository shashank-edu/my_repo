/* types of memory allocation */

#include<stdio.h>
void main()
	/*

{
int a; 
// here a is the example of static memory allocation 
//static memory allocation means at the time of compilation memory kitani consume hogi variables ke nam pe es ka decision ho jana 
//i.e decleration statement ke zariye jo varaible banate hai wo SMA ke example hai 
float b;  //SMA
char x[10];   // SMA
//SMA hi kyu kahate hai because at the time of compilation hame pata chl jata hai when ever be the program will run it will take that amount of memoryand also the time and the destroy of memory is also fixed at the time of decleration , so if we want any memory in between so this we cant do because destroy hona pahale se hi tay hai so that is why is called statis memory allocation

}


//DMA - es me run time pe hi decide kiya jayega ki kitani memory allocate honi hai toh compiler ko pahale se nhi paha rahega ki kitani memory allocate hone wali hai run time pe ,DMA wale variable ka kuch nam nhi hota sirf address hote hai or hum sirf address ki help se es access karate hai 
//
// agar hame user se data input karwanan hai toh hame pata hai pahle se hi user 10 variable input karega, toh hum pahale se 10 variables bana dege toh yeh statis memory allocation 
//or agar hame nhi malum user kitani values enter karata hai or jo bhi wo values enter karata hai hame store karana hai or use run karana hai, so to allocate dynamic memory we call 4 funtions
//
*/
 /* DMA */
/*
{

malloc();  
//agar fun es function ko call kar rahe hai toh yeh toh ek action statementhai, decleration statement nhi toh jab compiler ese padega toh use nhi pata chl payega ki kitane variables bana rahe hai ya ni at time of compilation
//malloc function jab run hoga , yani at the time of run tab memory block creat hoga 
//
}
*/

syntax of malloc function

//here we are going to pass an argument which is the size of malloc function
{
	float *p;
 p=(float*) malloc(6);   
//i.e here 6 is not the no. of variable it means each variable made by malloc consume 6 bytes i.e we pass the size of the variable
//here we don't tell the data type of the function  
//but here hame toh pata hai ki es me kya pass hoga yani , integer ya charecter ya real value
//let say es me real value pass hogi , toh address ko es me se pass karane ke leye hum ek float type ka pointer bana lete hai or use equate kr dete hia malloc(6) block ke
//yani ek 6 bytes ka block banaya malloc se or us ka address p me pass kr diya 
*p=3.4   
//by this we assign the value in the varible made by malloc
//malloc always return block type pointer because hame nhi pata hota yeh kon sa data type return kr raha hota hai 
//but yaha  malloc is void type pointer and p is float type pointer , asal me hona yahi chahiye ki agar p float type ka pointer hai toh es me float type ka hi address pass hona chahiye so
//we do type_cast the value which came from the malloc
//type cast means us ka ham ne roop badal diya hai , us ka jo type hai badal diya hai thodi der ke leye
//(float*) se float type ka address return karege jo bhi malloc bhejega wo 
}
