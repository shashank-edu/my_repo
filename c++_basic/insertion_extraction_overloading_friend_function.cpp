#include<iostream>
using namespace std;

class complex
{
	private :
		int a,b;
	public:
		void set_data (int x, int y)
		{a=x;b=y;}
		void show_data()
		{cout<<"a = "<<a<<"\nb = "<<b<<endl;}
		friend ostream & operator <<(ostream & , complex);   // yaha ostream cout object ka return type hai i.e output stream
		//or as because hum yaha object nhi bana sakate es leye hum reference bana dege yani hum reference le kr karege 
		friend istream & operator >>(istream  & , complex &);  // yaha cin ka data type hai istream i.e input stream
		// yaha complex ka bhi reference banana padega kyu ki hame actural argument me changes karwane hai 
};


ostream& operator <<(ostream & dout, complex c)
{
 cout <<"\n a="<<c.a<<"\n b="<<c.b<<endl;
 return dout;
}	

istream& operator>>(istream & din , complex & d)  //here &d is just another name of 
{
cin>>d.a>>d.b;
return din;   // yaha return sirf ek ke leye karwa rahe hai ki es ki cascating ban sake 

}

int main()
{
complex c1;
cout<<"enter a complex no."<<endl;
 cin>>c1; 
// yeh hame error degi , yeh error kyu degi toh pahale es line ko explain karate hai 
// cin kya hai cin ek object hai or >> yeh ek extraction operator es ka member funtion hai 
// mtlb cin jis class ke andar define kiya hoga , usi class ke andar hi define kiya hoga >> extraction operator
// es ko hum dusari tarah se bhi likh sakate hai like 
// cin.operator >>(c1);  or es me c1 as an argument pass hua 
// toh jab hum dot nhi lagate . toh hame operator bhi nhi likhana hota or hame parenthesis bhi lagana zaruri nhi hai toh it becomes cin>>c1;
// or ab hame yeh bhi samajhana chahiye ki cin jis class ka object hai us class me  extraction operator >>  ke ek se jayada operator bane hue hai 
//jaise kabhi hai int type ka variable likhate hai, kabhi float type ka toh kabhi char type ka ;
//es ka mtlb extraction operator me pass hone wala argument alag alag hai 
//or yeh  tabhi munkin hai ki jis class me extraction operator ke ek se jayada version bane hoge or sabhi me arguments me fark hoga 
//yeh arguments primitive type ke hisab se bane hoge 
//but non primitive type jis hum user define data type bhi kahate hai us  ka argument lene ke leye  aisa koe version nhi hoga 
//toh ese leye yeh line me ayegi error 
cout<<"entered value "<<endl;
cout<<c1; //toh yaha bhi wohi bat ho rahi hai , hum c1 pass kar rahe hai insertion operator me 
//incresion operator ke bhib bahot sare version bane hoge primitive type ke leye
//but non-primitive type ke leye , aisa koe argumrnt receice karane wala function nhi bana hoga 
//toh es ke leye hum friend function bante hai 
//cout<<c1; toh es ka mtlb yeh tha ki cout ke class ka object hai jis ne insertion operator ko call kiya or us me ko c1 complex type ki value pass kar raha hai , yani hum le kr chl rahe hai ki jis class ka cout object hai waha pr << increment operator me ek aisa version bhi hoga jis me complex variable bhi define hai, but aisa nhi hai
//toh toh yeh likhana cout.operator <<(c1); yeh galat hai kyu ki aisa koe incremental operator exist nhi karata jo complex value le 
//so hum aisa object se us ko access bhi nhi kr sakate 
//toh es ke leye hum ek function define karege  , ley say hum ek friend function define kr rahe hai
//toh friend function ek non member function hai , jis ke kisi object se access nhi kiya ja sakata  
//ab << increment operator kyu ki 2 operant leta hai toh , as because yaha koe object nhi hai toh cout ko bhi as an argument pass karana hoga
//toh hum cout<<c1; ko define aise karege as << increamet operator call hua or usme  cout and c1 as an argument pass hua like
//operator<<(cout,c1); toh yeh cout<<c1; ek hi bat hai but yeh valid tabhi hoga jab ese as a friend function define karege
//ab es me cout kyu pass kar rahe hai ki lihane wala ese cout<<c1; waise likh sake 
//ab friend function me return type kya hoga toh , cout jis type ka function hai toh wohi return type hona chahiye 
//kyu , kyu ki ho sakata hai hum cascading kare(i.e multiple use of input and output operator in one statement i.e either << or >> )
//toh pahale cout<<c1 process karega or us ka result jo bhi return ho kr ayega cout<<c1 ki jagah lelega toh ab baha <return variable> <<c2;
//so c2 tabhi execute hoga jab <return varaible> bhi proper operator ho kyu ki hame yaha print karwana hai toh return type bhi cout ka hi hoga
//toh cout object ka return type hai ostream
 
}
