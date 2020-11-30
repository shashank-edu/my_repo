#include<iostream>
using namespace std;
void fun();
{
throw 4;
}

int main()
{
cout<<"WELCOME"<<endl;
try
{
throw  5;//throw ke age hame koe constant likana hai , yeh number bhi ho sakati hai, float type ki value bhi ho sakati hai, or string bhi ho sakati hai
throw "hello";
throw 4.56;	
fun();
cout<<"\n in try"<<endl;
//pr yeh cout chalega nhi kyu ki try block me 2 line likhi hai , or pahali line me throw likha hai , or jab throw ke bar chl gaya toh try block ke bache hue statement execute nhi hoge 
//
}

catch(double  e)  //so jo throw keyword me hum ne value throw ki thi wo "e" me a jayegi
{
cout<<" Exception no: "<<e<<endl;
}
 catch(int e)  //so jo throw keyword me hum ne value throw ki thi wo "e" me a jayegi
{
cout<<"second catch block Exception no: "<<e<<endl;
}
catch (...)
{cout<<"in argument only 3 dot is present"<<endl;

}
cout<<"last line"<<endl;

}

//es me jab bhi try keyword likhege toh hame catch bhi likhana padega or agr catch likhate hai , toh try bhi likhana chahiye 
//pr hum throw aise hi likh skaate hai , ab jab kyu ki koe catch use handle nhi kr raha hai , toh automatically ek terminate nam ka function hai wo call ho jata hai , ab wo terminate function abort function ko call karta hai , jis se ki hamara program end ho jata hai i.e forcefully program wohi end kr dega
//ab agar hamane throw karate time hamane koe or data type throw kiya but catch karate time dusara data type mention kiya toh hoga wohi , terminate function call hoga , or program abort ho jayega 
//pr agar ek se jayada catch block hai or wo program kisi bhi catch block ke data type se agar match kr jati hai toh us catch block me jo code likha hoga wo run ho jayega 
//or agar ek bar jo catch chl gaya toh us ke bad jo catch likha hai use deekhege bhi nhi 
//ab ek hi try block me ho sakata hai ki hum bahot sare throw statement bhi likhe
//or agar ham ne 3 throw block likha hai , or tino alag alag data  type hai toh hum
//but this type ko catch should always be on the last or all other catch 
// or yeh jaruri nhi hai ki hum throw try function ke andar hi likhe hum ese kisi functin ke and bhi likh sakate hai or wo function ko try ke andar likh dege
