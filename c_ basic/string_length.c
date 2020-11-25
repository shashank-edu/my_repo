/* here we calculate the  length of the string */
#include<stdio.h>

int length(char *);
char* reverse(char *);

int length(char *p)  //here charecter is passing thus data type will be char
{
int i;
for (i=0;*(p+i)!='\0';i++);
return(i);
}



char* reverse(char *p)   
//char* means hum waha pr address return karwayege 
//p ke andar hai address us string ka jis hame reverse karana hai 
{
int i,l;
char t;
for(l=0;*(p+l)!='\0';l++);
for(i=0;i<l/2;i++)
{
t=*(p+i);
*(p+i)=*(p+l-1-i);
// here (p+l-1-i) -1 because p+l is null charecter so we have to swap p+l-1 charecter
*(p+l-1-i)=t;

return(p);  //p is the address of string as because er return address here so data type also should be a special charecter as (char*)
}

}

void main()
{
printf("%d \n",length("computer")); 	
printf("\n %s",reverse("computer"));
}

