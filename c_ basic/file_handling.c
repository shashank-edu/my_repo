#include<stdio.h>
#include<string.h>  //to consider strlen(); command
#include<stdlib.h>   //to consider exit(); command
int  main()
{
	int i;
char s[]="hello students";
FILE *fp;
fp=fopen("f1.txt","w");
//abhi fopen me na keval file ko represnt krane wale input buffer ko banaya balaki file type ke variable ko banaya jis ke andar buffer pointer ne input buffer ko point bhi kiya yani sara headache wala kam kr diya fopen() function ne or badale me kya return kiya address kis ka , yeh file type ke address return kiya fopen function ne toh yeh ab return kr raha hai toh es address ko kisi pointer me rakahan padega or as file type ka address pass kar raha hai tohn ese file type pointer me hi rakhana padeaga 
//now file pointer ke through sab kuch access ho jayega 
//or agar f1.txt nam ki file exit nhi karati hai toh nayi file create ho jayegi , or agar exist karati hai toh wohi file open ho jayegi 
//lekin us ke andar ka pura content pahale erase ho jayega or yeh kyu hota hai us ke bare me file opening mode me bataya jayega 
//so hame check karana hai ki file open ho payi hai ya nhi , toh us ke leye agar file open nhi ho payi hai kisi bhi reason se toh fp<pointer>
//me a gaya hoga null
//so agar hum check kar le pointer me null hai ya nhi toh pata chl jayega ki file open hue hai ya nhi 
if(fp==NULL)         // NULL should be written in capital letters only
{
	printf("null =\n");
exit(1);
}


for(i=0;i<strlen(s);i++)
fputc(s[i],fp);  //now yeh fputc ka headache hai ki kaise pointer ko handle kr ke kaise input buffer me writing perform karega 
//hame bs yeh karana hai ki bs fputc ko wo charecter dena hai jo buffer me write karwana hai 
//ab loop ki help se har ek charecter pass hoga or input buffer me write ho jayega
fclose(fp);  
//fclose ke andar bhi pointer pass karwana padega 
//as we know earlier jiase hi input buffer full ho jata hai , wo data file me move kr deta hai or fir se khali ho kr dobara write ke leye teyar ho jata hain
//but agar jab hamara input buffer pura barana na ho toh fclose() function ki madat se hum forcefully yeh buffer wala data file me write karawate hai 
//fclose function se na hi kebal file me data chala jayega balaki yeh buffer jo memory le raha tha wo bhi release ho jayegi or yeh file type ka variabole bana hai yeh bhi realease ho jayegaa 
//or ab pointer kisi bhi variable ko point nhi kr raha hoga
//or fclose function ko call karane ke bad hum kuch or write nhi kr sakate 
}
