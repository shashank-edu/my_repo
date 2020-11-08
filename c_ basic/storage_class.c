#include<stdio.h>

void main()
{
int x=5;  //here no storage class is mention so default taken as automatic 	
printf("%d \n",x); // here print 5
{
int x=2;       
// ab yaha ek block le andar dusara block hai pr as we the storage class in automatic so the scope the variable only upto the on its brakets it can,t enter another block ,abhi ese koe fark nhi padata block ke andar block bhi ho toh 
printf("%d \n",x);
//but printf toh bahar wale vartiable ko access kr sakta hai 
//toh es ke leye ek rule hai rule of proximity
//jo pass wala variable hoga wo print karega
//here print 2
//or agr andar koe x nam ka varaible na ho toh printf bahar wala variable print kr dega because printf access kr sakata hai bahar wale variable ko 
}
printf("%d \n",x);  //ab jab andar wala variable destroy ho gaya hoga kyu ki wo variable sirf apane block jaha pr bana hai wohi tak valid hai 
}
