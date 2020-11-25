/* takes nothing return nothing */
#include<stdio.h>
void main() 
// yaha main  function bhi kuch return nhi kr raha hai toh main function ya return_type likh sakate hai void
	{
	void add(void); 
//function decleration
//yaha paranthasis me agar kuch bhi na likhe toh bhi error nhi ayega but function confuse rahega toh hum bata hi dete hai ki yeh take nothing type hai 
//yeh function decleration compiler ke leye hota hai ki yeh es word ka mtlb samajh jaye  
	add();
//as we use function add() here in the function of main so hame es ka decleration bhi main me hi karana hoga
//from here we call the function //funtion call karate wakat bhi bracket khali rahege 
//decleration karate time 3 chij likhi jati hai 1 return_type (here add function ka data type hamane likha hai void toh sab se pahale hum likhage void fir us ke bad function ka nam the paranthsis (void); paranthasis ke andar bhi hum likh  rahe hai  voids jis se yeh pata chl raha hai es function me kuch bhi argument pass nhi ho raha hai yeh takes nothing ka hai  so the line is written is called a function decleration or prototype)
	}

	void add()        
//here we write void because function is return nothing
//void ek data type hai yeh yaha represent kar raha hai ki function kuch bhi return nhi karega
//this function is now defined here 
//waha add function takes nathing faetures ka hai, or jab koe function takesn nothing nature ka ho toh us function ke paranthis (<emply>) empty nature ke hoge agar takes something nature ka hota toh hum es ke andar kuch variables define kar rahe hote 
	{
	int x,y,z; 
//as we are using variables in this function , we here we declared it  by int x,y,z; which declared that it is a variable 
//also as because we use variable in this function , the decleration of this function is also to be done in this function also
	printf("enter two numbers \n");
	scanf("%d%d",&x,&y);
	z=x+y;
	printf("the sum of no. %d and %d is %d \n",x,y,z);
//here we are not writing return because we are now see return nothing
//return means add function ko jis ne call kiya hai use kuch value lautana
//yaha add function ko call kiya h main ne  kaha se kiya hai main se 
//yani add() function agar kuch return karega toh wapas wohi a gayega jaha se call hua hai
//
//or agar koe function return nothing hai toh us ke nam ke age likha jata hai void
	}

/* har function me agar bracket khali ho toh yeh takes nothing features ka hai or agar , bracket ke andar kuch define kiya jata hai toh wo takes something nature ke hai */
// as whatever is written in the program compiler should have to undersatnd the meaning of every word but compiler ko generally key word ko mtlb hi pata hai or baki har word us ke leye naya hai us ka meaning hame declare karana padata hai tab ja kr wo us ka meaning samajh pata hai 
// and jo function predefined hote hai us ki definition library file me hoti hai jab ki us word ka decalarion header file me hota hai ]
//
// #include<conio.h> //console input output ->deceration present of clrscr() ,getch(),
// <stdio.h> // means standard input output  //for printf(), scanf(),
// function call karate time hum return_type nhi likhate function define karate time or function declare karate samay hame return_type likhana padata hai or jiasa hum declare karate hai waisa hi define karate hai 
