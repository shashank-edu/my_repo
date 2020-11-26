#include<iostream>
using namespace std;

struct book
{
	private:
int book_id;
char book_title[40];
float book_price;
	public :
void input ()    
{
cout<<"enter book id , title and price of book"<<endl;
cin>>book_id>>book_title>>book_price;  

if (book_id<0)                             //ese me yeh bola gaya hai ki book id ki value kabhi negative nhi hogi 
book_id=-book_id;
}
//koe bhi value member variables ke andar kaya ho sakati hai jo ki valid rahe policy ke against na ho
// toh es ki jankari  structure banane wale ko hogi toh use yeh  dhayan me rakhana hoga hai en variable ki value kabhi corrupt na ho 
// c language me aisa ko tarika nhi tha jis se data ki security ki ja sake or use corrupt hone se bachaya ja sake 
// agar ek bada program c language me  banayege  or team me kam hoga toh bahot chances hai ki ek log ko toh malum hoga ki book_id ki kya value hai or kya honi chahiye but dusare programmer ko nhi malum
// toh us ne kuch galat coding kr di or book id ke andar jo value ani thi wo galat ho gayi 
// toh yaha pr bhi aisa ho sakata tha agar hum if condition nhi lagate toh 
// but agar main banane wale ko nhi malum ki structure me kya hai or us ne input () function use karane ke bajaye , diretly likh diya ki b1.input = -100;
// toh ab hum ese corrupt hone se nhi bacha pa rahe 
// toh es ke leye hum yeh karege ki struture variable ko , structure body ke bahar se koe bhi use hi na kr paye 
// yani koe agar likhe b1.book_id toh error a jaye , or agar aisa kr paye hum toh data ko secure kr lege 
// i.e variables ke andar value sirf input function se hi jayegi
// c language me koe tarika nhi tha es galati ko rokane ka but c++ kahati hai ek tarika hai
// toh hum structure body ke andar ek access specifier laga dete hai 
// jo ki 3 tarike ke hote hai private , protected , public
// toh agar private likh du toh es ka mtlb hoga ki structure ke body ke bahar se access nhi ho payege keval uske andar se hi access ho payege 
// but agar ek bar private specifer likh diya toh us ke bad sare members private ho jayege  input function bhi private ho jayega toh 
// us me ke or access specifier laga dege , public , jo member public hote hai wo bahar se access ho sakate hai 
//
void display()  
{
cout<<"\n book id "<<book_id<<"\n  book title "<<book_title<<"\n book price "<<book_price<<endl;
}

};

int main()
{

book b1;
b1.input();    
b1.display();
return 0;
}


