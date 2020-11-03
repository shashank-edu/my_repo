/* take nothing return something */
#include<stdio.h>
int main(void)
{
int a,add(void);
a=add(); 
// now here jo function ki value return ho rahi hai wo waha a jayega jaha add() function call kiya gaya hai 
// mtlb jaise add() hat kr ab  yaha c ki value a gyi hai 
//so to use this value we make a variable 
// main can use the value of c as per their choice
printf("the sum is %d\n",a);
return 0;
}

int add(void)
{
int x,y,z;
printf("enter two numbers \n");
scanf("%d%d",&x,&y);
z=x+y;
return(z);
//return key word ke zariye hum ek hi value sirf return karwa sakate hai 
//toh agar main aisa likhuga return(a,b,c) here last me value hai here c wo return ho kr chali jayegi or error kuch bhi nhi ayega
//hum chahe toh return ke bad paranchis na lagaye but fir hame space dena padega like , return c;
//return ke bad paranthis lagana jaruri tab hota hai jab hum koe expression likhate hai like return(x+y);
//but agar hum aise likhe return x+y , toh sirf x ki value return ho kr chale gayegi 
//most important return key word ki madat se na keval value return hoti hai balaki control bhi return ho jata hai es ka mtlb return key word ke bad controller waha chala jayega jaha se ese call kiya hai or jo bhi return function ke bad likha hoga use ignore kr dega because it became an unreachable code 
}

//here in add block as this function is return type of it return the value which is obtained from the result of instruction 
//here we are not directly use this value we return the value of the function to from where it is called i.e in main now main chahe toh print kare ya rakhe rahe main ne add se kam kaha un ne kr diya ,ab wo kam ka result ko main ko dedega , yaha main kyu ki worker hai main ka toh result directly return kr dega ab main use jaise bhi use kare 
//so i.e why hum prinf() nhi likhege add() function me or es ki jagah hum likh dege return key word
//ab return ke bad hum paranthis me likh dete hai (c) es ka matlab c ki value return ho rahi hai (c nhi return ho raha hai )
//as because we return (c) and c funtion is of int type toh jab hum funtion ko define karege toh likhege int 
