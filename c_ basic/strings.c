/* string */

#include<stdio.h>
void main()
{
void input_by_user(),input_1(),input_2();
input_1();
input_2();
input_by_user();
}

void input_1()
{
		char s[15]={'s','h','a','s','h','a','n','k','\0'};  
//here at last of value assign we put 0 i.e null variable,
//we always write null character as backslach zero i.e \0
		int i;
		for(i=0;i<=10;i++)
		printf("%c",s[i]);
		printf("\n");
}

void input_2()
{
		/* char s[15]={'s','h','a','s','h','a','n','k','\0'};  */
		char s[15]="shashank";  
//here we also don't need to write single individual character in single colon , we also can do is write the whole character in a double colon and also now we don't need to write null character here , as it automatically assign
		int i;
		for(i=0;s[i]!='\0';i++)   
//here we make the condition as such loop will at time when it reaches null value
		printf("%c",s[i]); 
		printf("\n");
}

void input_assinging_2()
{
		char s[15]={'s','h','a','s','h','a','n','k','\0'};
		int i;
		/*printf("%s",s[i]); */
//yaha hum ek ek bar print ki jagah ek hi bar me print karwa dete hai  //here if we don't want to apply the loop ,
		puts(s); 
//here we can also use puts () , put is used only to print the value of stream and with put line also changes itself
		/* printf("\n"); */  
//we don't use printf to change line because , put itself changes the line

}
void input_by_user()
{
		int x,i,m;
		char s[50]; 
//here we take assumed value because we don't know how much digit user enter
		printf("enter your name \n");
	/*	scanf("%s",s);     */
//here we write  s only and &s because , name of the array itself represent the address of first variable of array 
//i.e s -> s[0], here also can be write as scanf("%s",&s[0])
//as we put two words having space in between , so scanf() understand that space means the data was end thus only prints first word
//i.e space, enter or tab es ke leye delemeter hai , (so for this we use a alternative gets() ) 
		gets(s);  
// we use gets () for multi word process , space es ke leye delimiter nhi hai enter es ke leye delimiter hai 
	/*	for(i=0;i!='\0';i++)	
		printf("%s",&s[0]);  */
//to show here we write s[0]
		puts(s);
//either we can write s or &s[0] both are same thing
}


