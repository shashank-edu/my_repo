/* here we are using fwrite function which works on binary mode */
#include<stdio.h>
#include<stdlib.h>
typedef struct book
{
int bookid;
char booktitle[50];
float book_price;
}BOOK;

void main()
{
FILE *fp;
fp=fopen("abc.txt","wb");
BOOK b1;
printf("enter book id \n");

__fpurge(stdin);    //in place of fflush function we can also use __fpurge(stdin) funtion to clear the buffer
scanf("%d",&b1.bookid);
__fpurge(stdin);
printf("enter book title \n");

gets(b1.booktitle);

__fpurge(stdin);
printf("enter book price \n");
scanf("%f",&b1.book_price);
fwrite(&b1,sizeof(b1),1,fp);  //as here whole data is present in b1 so we pass the address of b1
fclose(fp);
}
