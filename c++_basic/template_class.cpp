#include<iostream>
using namespace std;

template <class Y> class arraylist
{
	private:
		struct controlblock
		{
		int capacity;
		Y *  arr_ptr;
		};

	controlblock *s;
	public :
	arraylist (int capacity)
	{
	s=new controlblock;
	s->capacity=capacity;
	s->arr_ptr = new Y[s->capacity];
	}

	void add_element (int index , Y data )
	{
	if (index>=0 && index <= s->capacity-1)
		s->arr_ptr[index]=data ;
       	else 
	cout<<"\n array index is not valid "<<endl;	
	}
	
	void viewelement (int index, Y &data)
	{
	if (index>= 0 && index<=s->capacity -1)
		data =s->arr_ptr[index];
	else
		cout<<"\n array index is not valid"<<endl; 
	}

};

int main()
{
float data;
arraylist <float >list1(4);  //hamane object banate time 4 ese leye pass kiya kyu ki hamane banata hai ek constructor toh wo demand kr raha hai , ek argument ki //jo hi array ki capacity bata raha hai

list1.add_element(0,5.27);
list1.viewelement(0, data);
cout<<"value in the array is "<<data<<endl;
}


//ab agar hum yeh sare funtion int ke leye na kr ke float ke leye karana ho toh hame yeh sab dobara likhana padega , bs us me data type kr dege float
//ro hame asia nhi kara padega agar hum template ki help se class banaye  
//toh or sath hi me hum jab object banayege toh hum anguar bracket me bas likhana hoga ki yeh int hai ya float

