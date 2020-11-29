/* supercar is a  car */

#include<iostream>
using namespace std;
/*
class car
{
	private :
		int gear;
	public:
		void increamentgear()
		{
		
		if(gear<5)
			gear++;
		}
};

class supercar : pubic  car    //ab hamane yaha pr public class ka hi use kiya kyu ki increamentgear funtion ka increment hai wo hame supercar me bhi access karana hai , or jaisa ki hum janate hai ki agar visibility mode public hota hai toh parent class ka public member , child me public or protected member child me bhi protected ban jata hai 
// or private member available toh hote hai child class ke leye but assesible nhi hote // ese khali usi class me member access kr pate hai 
// ab kyu ki agar hum protected visibility mode ka use karege toh parent ke public member bhi child ke leye protected ban jayege , toh child apane object se use use nhi kr payega 
// ab kyu ki (is a )relationship me ek chij common hai ki , jo parent jo services de raha hai i.e member function , child bhi yahi chahate hai ki hum bhi wohi services de 
// but ab private inheritance or protected inheritance kyu karana chahiye 
{};

*/

/* when we do private inheritance and protected inheritance ?  */

class Array
{
	private:
		int a[10];
	public:
		void insert(int index,int value)
		{a[index]=value;
		}

};

class Stack : public Array
{
	int top=0;
	public:
	void push (int value)
		{
		insert(top,value); 	
		}
};


int main()
{
Stack s1;
s1.push(5);  //es tarah hum ne 0 index me 5 value rkh diya 
s1.index(2,56);   //ab hum ese aise bhi toh likh sakate the , ese kya hai index 2 pe directlty 56 a gaya , but yeh toh stack ke rule ke khilaf hai
//kyu ki stack me 0 se end tak ek ek kar ke line se value enter hoti hai
//or asia es leye kr liya kyu ki hame ne direct insert function ko call kr liya , ab kyu ki yeh public member hai parent ka 
//or public inheritance karane se wo child me bhi public ho jate hai toh yeh chij galat ho gayi 
// toh es ke leye hum private or protected inheritance ka use karege
// or ek or bat hum yeh nhi bol sakate ki stack is a  array, but stack is implemented by array;
// toh (is a )relation ka hamara logic bhi nhi lag raha  yaha  
}

