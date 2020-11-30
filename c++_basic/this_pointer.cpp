#include<iostream>
using namespace std;

class box
{
	private:
		int l,b,h;   //yeh ek instance variable hai jo puri class access kr sakati hai
	public :
	
		void set_dimension(int l,int b,int h)   // yaha l,b,h ek local variables hai 
		{
		this->l=l;   //ab yaha 2 l varibale hai lekin hum janate hai , by default jo varible jayada local hota hai use jayada preference milati hai //toh yaha dono l ka mtlb yeh local variable hoga , yani jo function ka variable hai 
// toh es ke leye hum use kar sakate hai this pointer ko 
// as this caller object ke address ko represent karata hai toh , i.e caller object ke member variable ko
// toh es se name conflict ki problem solve ho gayi 
//toh yeh this variable ka kayi sare me se ek use hai
		this->b=b;
		this->h=h;
		}	


		
		
		/*void set_dimension(int x,int y,int z)
		{
		l=x;
		b=y;
		h=z;
		}	
*/
		void show_dimension()
		{
		
		cout<<"\n l ="<<l<<"\n b ="<<b<<"\n h ="<<h<<endl;	
		}	
};

int main()   
{
box *ptr, smallbox;  //yaha hum yeh chahte hai ki hum pointer ki help se value set kare
ptr =&smallbox;

ptr->set_dimension(3,4,5);  //waha pointer kyu ki smallbox ka hai toh yhe set_dimention bhi smallbox ka hi hoga 
ptr->show_dimension();
/*	
box smallbox;
smallbox.set_dimension(3,4,5);
smallbox.show_dimention();
*/

}	
