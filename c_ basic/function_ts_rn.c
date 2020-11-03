/* takes something return nothing */
		#include<stdio.h>
// for example of decleration outside main
// void add(int,int);   // agar bahar decleare kare toh bolege global decleration
		void main()
		{
		void add(int,int); 
//now to declare this type of function i.e function_name(data_type, data_type)
//yaha do bar (int,int) likhane ka yeh mtlb hai jab bhi yeh function call hoga es me do int type ki value likhi jayegi ese leye hum call karaet time do varible praranthis ke andar likhate hau yani jo wada kiya hai wo ni bhana padega  
//if declere inside the called as local decleration
		int x,y;
		printf("enter two numbers \n");
		scanf("%d%d",&x,&y);
		add(x,y); 
//now here add() in the main function and add() itself is a main function now we want that , add() funtion ko call karu or add function un do no. ko add kare jo x and y me rakhe ho toh hum yeh umeed nhi kar sakate ki agar add function me c=x+y likhane se main function ke variable add lr dega kyu ki ek function dusare funtion ke variable ko acess nhi kr pata hai 
//now for add the variable in the main function we have to understand that we don't need x,y variables we only need the value of x and y variable toh agar add function x and y ko access nhi kr pa raha toh kya problem hai us ki value ko kr le 
//toh ka tariya yeh hai jab hum add() function ko call kr rahe hai toh us ke paranthasis me likh de x , y add(x,y).
//or jab hum call karate time paranthasis me kuch likhate hai toh hame define karate time bhi paranthasis me us ka decleration likhana padata hai 
//this is also called as call by value i.e function call by passing values toh x and y pass nhi ho rahe h , x and y ki values pass ho rahi hai
//
		}

		void add(int a, int b) 
//we have to write the decleration of the variable always at the time of defining or yaha int a,b nhi likh sakate jitane variable ka decleration karege utane hi variable ka data_type lagayege i.e while calling add(x,y) we pass the value of x and y jo ki copy ho jayegi a or b me 
//so yeh take something ese leye hai kyu ki yeh x and y ki value take kar raha hai 
//or agar hamane a or b declare kr diye hai toh ese andar decleare nhi karege  
//void because no return type here
//yaha jo add function hai or us ke andar jo variables banaye gaye hai ese bolate hai formal arguments or jab x and y ko call karate hai toh unhe bolege actual arguments
//here  we can also write as add(int x, int y) but we have to undersatnd the variable made in mains is different with the variable made in add
//hame dono ko ek nhi manana hai toh ese confusion ho sakata hai , ese leye hum generally alag value likhate hai 
//
		{
		int c;
//no a and b decleare here
		c=a+b;
		printf("the sum of no. %d and %d is %d \n",a,b,c);
		}

//take something means function kuch argument le raha hai
//we already know that  the variable input in a function can be only we read by that function, thus the variable of a function can't be excess by other function
//now yeh jaruri nhi ki hum variable ka decelaration main ke andar hi kare hum chahe toh use main ke pahale bhi declare kar sakate hai but agar main ke andar declare kiya toh sirf main hi us decleration ko use karega 
//or jabaki agar hum bahar decleare karare hai tab toh ab program ke andar koe bhi function use kar sakata hai
