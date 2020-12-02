#include<iostream>
using namespace std;

class A
{
int a;
	public:
void f1(){}
 virtual ~ A() {}
};

class B :public A
{
int b;
void f2(){}
 ~B(){}
};


int fun();

int fun()
{

A *ptr=new B;  //as hamane yaha object banaya hai B class ka toh hame , pointer bhi kis ka banna chahiye B class ka 
//ab kyu ki inheritance ke case me parent class ka pointer , child class ke object ka address contaion kr sakta hai
//but yeh pointer B class ke object ke leye un hi member ko invoke karwa sakata hai jo originally A class me bane ho because due to early binding
ptr->f1();  //correct
ptr->f2();  //error

//ab kyu ki fun() function end hote hue pointer ki memory ho jayegi release but yaha kyu ki B class ka object dynamically bana hai toh yeh apane app es ki memory release nhi hogi 
//toh es kyu delete keyword ki help se release karewana padega 
delete ptr; // toh yaha ptr likhane se ptr nhi delete ho raha hai ,balaki ptr jis ka address contain kiye hai wo delete ho raha hoga 
//but yaha problem yeh hai kyu ki yaha pr class B ka object destroy ho raha hai or as we know jab koe object destroy hone wala hota hai toh us se pahale destructor call hota hai , toh yaha pr bhi destructor call hoga class B ke object ke leye
//toh child class se jude agar pointer hai or yeh external resource ko point kr rahe hai toh , toh external source ki memory release karane ka kam yeh destructor kar dega ,
//or sath hi child class ke destructor ka apana kam karane ke bad parent class ke destructor ko kar leta hai call , jis se ki parent ka destructor bhi execute ho jaye 
//i.e class B block me jo member jo originally parent class ko belong karate hai ,un se related jo bhi kam hoga wo parent class ka destructor karega 
//but afsos aisa  nhi ho raha kyu ki early binding ho rahi hai , jis me compiler decide karata hai kon sa function call hona chahiye 
//toh delete ptr wali line me compiler deekhega ki yeh class A type ka hai toh yeh seedhe class A wale destructor ko kar dega bind 
//B class ka yeh dectructor ko yeh bind nhi karega toh yeh run time me chalega hi nhi
//toh simply hame es ki late binding karwanin hai
//or ab yeh A or B class ke dono hi destructor virtual ban gaye sirf parent class ke virtual likh dene se 
//toh run type me kyu ki ptr ke andar B class ka address rakha hai toh yeh pahale B class ke destructor ko call kr lega
}
