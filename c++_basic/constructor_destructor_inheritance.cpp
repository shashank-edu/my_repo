#include<iostream>
using namespace std;

class A    //ab agar kya hoga jab hamane parent class me khud se constructor banaya jo ki koe argument receive kar raha hoga
	private:
		int a;
	protected:
	A(int k)
	{
cout<<"pahale parent class ka constructor chalega"<<endl;
	a=k;
	}
	~A()
	{}


};

class B :public  A   //ab yaha problem yeh hai ki agar hamne parent class me bhi contructor nhi banaya toh compiler constructor banayega 
	 //or parent class ke default constructor ko hi call karane ki kosis karega 
	 //es ka mtlb ab agar chil class me constructor ham ne nhi banaya toh error ane wali hai 
	 //kyu ki child class me defalt parent contructor  ko call kar raha hai or parent class me default constructor hai hi nhi 
	 //toh ese leye error ayegi
	 //toh aagr parent class me default constructor nhi hai toh child class me constructor na keval hum ko banana padega balaki use call bhi karana padega or sath hi me  usme necessary argument bhi pass karane padega 
//ab agar galati se hum ne parent class me constructor toh banaya but hum child class me , parent class ke constructor ko call karane wali step bhul gaye 
//toh parent constructor ko call karane wali step compiler khud likh dega , but wo jab bhi likhega toh wo default  constructor ko hi call karega 
{
	int y;
	public:
	B(int x, int y):A(x)
	{
	cout<<"parent ke bad child class ka constructor chalega"<<endl;
	b=y;
	}
	~ B()   //ab yaha destructor me jaise pahale child ke destructor ko call hota hai but yaha pr child ka destrutor pura run karega fir ue ke abd parent ka destructor ko call karega	 
		// toh kyu ki yaha pr argument ka baval toh hota nhi hai , toh agar hum destructor na banaye toh bhi compiler ese khud bana lega 
		// ab yaha kyu ki child ka destructor pahale apana execution kr leta hai toh , parent ki destructor ki call wo child ke destructor ke body me karata hai 
		// toh hame yeh sab likhane ki zarurat nhi hai 
	{}
};


int main()
{

B obj(3,5);
}

/*
class A
{	
	protected:
	A()
	{
cout<<"pahale parent class ka constructor chalega"<<endl;
	}
};

class B :public  A
{
	public:
	B():A()
	{
	cout<<"parent ke bad child class ka constructor chalega"<<endl;
	}
};


int main()
{

B obj;
}

*/
