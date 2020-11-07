/* we make a book   */
#include<stdio.h>
struct book
{
int bookid;
char title[20];
float price;
};


struct book input()    //input value is going to assign in b1 and b1 having data type book so input also return struct
{
struct book b;
printf("enter bookid ,title ,price \n");
scanf("%d",&b.bookid);   
//as scanf and gets both take data as as input and this value is taken by input buffer , so agar input buffer bhara hua hoga toh yeh fresh input nhi magega
//yaha hum pahale input buffer khali hai or jab hum ne ese input dediya toh yeh bhar gaya toh ab jab yeh gets pr ayega toh input nhi magega , 
//or gets ki help se buffer khali ho kr scanf ("%f") chal jayega toh ab ese ke solution ke leye we use 
//fflush(stdin) toh yeh gets function keleye buffer khali kar dega 
//fflush is used to clear the buffer 
// and accept the next string 
fflush(stdin);
gets(b.title);	
scanf("%f",&b.price);
return(b);
}

void display(struct book c)
{
printf("\n%d %s %f\n ",c.bookid,c.title,c.price);
}

void main()
{
struct book b1;
b1 = input();
display(b1);
}
