#include<iostream>
using namespace std;

class book
{
	private :
		int bookid;    //this is instance member variable 
		static char booktitle;   // this is static member variable or class variable  //ese boloate hai variable ka decleration karana
	public :
		void set_id()
		{
		cin>>bookid;
		cout<<bookid<<endl;
		}

/*		void set_bookid()    //as this is a instance member function so we can access it by object //but agar koe object hi na banaya ho toh 
			//hum ese access bhi nhi kr payege 
		{
	cin>>bookid;
	cout<<bookid<<endl;
		}      */
//toh es ke leye hum laga dege static before the funtion
 static void set_booktitle()    //so it becomes static member funtion 
 {
 cin>>booktitle;
 cout<<booktitle<<endl;
 }
//static member function ki khas bat yeh hai ki yeh keval static member ko hi access kr pate hai 
//kyu ki yeh function bina object ke bhi call ho sakate hai 	 
// agar object na ho toh sirf hame <class ka nam>::<function ka nam likhana hoga>i.e book::set_booktitle();
// eska mtlb hum static member funcntion ko bina member ke call kr sakte hai  
};

// char book::booktitle="s";   //jab hum ese define karege tabhi ese memory milegi 
//agar chahe toh at the time of definition ese me value assign kr de warana esme by default 0 hoga
//lekin es variable ki memory object pr depend nhi karati ese leye ese class variable kaha jata hai instance varaible nhi kaha jata 
//instance variable ka matlb hi hota hai jo instance ko belong kare i.e object
//but yeh instance ko belong nhi karata 

int main()
{
book b1,b2;   //es me account class ka ek object banaya hai b1 , jis ke andar ek hi variable hai bookid 
//static keyword ke bana varaible object ka part nhi hota , es ka mtlb aagar hum ek bhi object  nhi banate book class ka tabhi static keyword se 
//bana variable exist karata 
//halaki c++ me static keyword se bana varaible ko declare bar kr dene se ,es varaible ko memory nhi milati  
//es ko class ke bahar define bhi karana padat hai 
//aagr hum ek or object bana de b2 toh es ke leye bhi bookid ek variable hoga 
//but as member variable doesn't depend on object hence pure program me sirf ek hi booktitle variable banega
//toh ab agar hum ne koe object nhi banaya tabhi static member variable ban jayega toh ese access kaise karege?
//agar static member variable , public hota toh hum 
//book:: booktitle = "s";
//yeh likh kr access kr lete pr yaha yeh private hai toh 
//toh eske leye hum ek function bana lege
//b1.set_booktitle();
book :: set_booktitle();
return 0;
}
