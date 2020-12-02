#include<iostream>
#include<cstring>
using namespace std;

class student    //yaha agr hum student class ka object banate hai toh keval es me 2 variable hoge i.e name or roll no. 
{
	private:
		int rollno;
		char name[20];
	class address
		{
			private:
				int houseno;
				char street[20];
				char city [20];
				char state[20];
				char pincode[8];
			public:
				void setaddress(int h, char *s , char * c, char * st, char * p)
					 {
					 houseno=h;
					 strcpy(street,s);  //here we use strcpy to copy whole string here first argument address is passed where string has to copy and second argument address from where string has to copy 
					 strcpy(city,c);
					 strcpy(state,st);
					 strcpy(pincode,p);
					 }
				void showdata()
				{cout<<"\nhouse no.\t"<<houseno<<"\nstreet\t"<<street<<"\ncity\t"<<city<<"\nstate\t"<<state<<"\npincode\t"<<pincode<<endl;}
		
		};
		address add; //toh jab tak hum address class ka object nhi banayege tab tak address class me rakhe variable ko memory nhi milegi 
			 //ab es ka mtlb hai student class me 3 variable hai ,	roll no, name and add;
		public:
		void setrollno(int r)
		{rollno=r;}
		void setname(char *n)
		{strcpy (name,n);}
		void set_address(int h, char *s , char * c, char * st, char * p)
		{
		add.setaddress(h,s ,c,st,p);
		}
		void show_student()
		{
		cout<<"STUDENT DATA"<<endl;	 
		cout<<"name \t"<<name<<endl;
		cout<<"roll no.\t"<<rollno<<endl;
		// ab kyu ki address ke private member ko sirf address ke member hi access kr payege jab ki yeh calss student class ke andar bani hai 
		//and student class ke member yeh adhikar hai ki yeh apane class ke private member ko use kare 
		//toh jaisa ki address class bhi private member me bani hai or usi ka ek object hai add toh yeh ese bhi call kr sakata hai 
		//lekin yeh eske andar ke private data ko access nhi kr sakataa , kyu ki yeh us ke bahar ka fuinction hai hum address class ke andar ek function bana dege show data jo ki hum bahar se us class ke object se access kr sakate hai
		add.showdata();
		}


};

int main()
{
student s1;
s1.setname("shashank");
s1.setrollno(100);
s1.set_address(33,"kalusarai","ncr","delhi","201108");
s1.show_student();
}

