#include<iostream>
#include<vector>  //to use vector class , we have to add vector library 
using namespace std;

int main()
{
vector <int > v1;  //this will create a block vector 
//vector class ka nam , yeh template hai toh data type define kiya , or v1 object banaya 
// yaha hamane v1 banate time koe size mention nhi kiya hai kyu ki yeh zaruri nhi hai vector bante time size bhi mention karana hai , jo ki array me karana padata tha 

vector <int> v2{20,30,40};  //yaha hamane vector banate time hi initialize kr diya 
//toh agar hum janaana chahe ki es me kitani value rakhi hue hai toh es ke leye bhi hamare pass function hoge 
//as agar hum vector ko banate time initialize nhi karate hai toh by default ek ki capacity hogi 1
//or agar  hum me ese banate time hi initialize kr diya hai , toh es ki capacity uitani hi hogi ,jitani no. of values hum ne es me banate time pass ki hai
//i.e v2 ki capacity abhi 3 hai, or agr hum ese or badayege or es ke value double ho kr 6 ho jayegi 
vector <char > v3(5); //waha hum ne vector banate time es ki initial capacity bata di hai 5
vector <char> v4(4,'a');  //agar hum chahate hai vector banate time hum es ka size bhi mention kare or es me initialize bhi kare  
// esme yaha 'a' kya hai , yeh value es vector ke sare element me chali jayegi 
vector <string> v5(3, "HELLO"); // es me 3 vector banege , or string store ho jayegi HELLO


cout<<"printing v2 -> "<<v2[0]<<"\t"<<v2[1]<<"\t"<<v2[2]<<endl;
cout<<"printing v5 -> "<<v5[0]<<"\t"<<v5[1]<<"\t"<<v5[2]<<endl;
cout<<"printing value of v4 ->";



for(int i= 0;i<=3;i++)
cout<<v4[i];
cout<<endl;


cout<<"capacity of v1\t"<<v1.capacity()<<endl; // es me abhi kuch value initialize nhi hue hain toh es ki capacity 0 hai kyu ki abhi es me koe block nhi bana hai 
cout<<"capacity of v2\t"<<v2.capacity()<<endl;   // capacity function se yeh us array ki capacity return kr deta hai



v2.push_back(56);  // as kyu ki v2 ki initial capacity 3 hai , or yeh tino full hai toh pahale es vector ki capacity 3 se 6 hogi fir es ke peeche 56 insert ho jayega
cout<<"after push capacity of v2\t"<<v2.capacity()<<endl; 
cout<<"after push size of v2\t\t"<<v2.size()<<endl;
for(int i=0; i<v2.size();i++)
cout<<v2[i]<<"\t";
cout<<endl;



v2.push_back(73);   // ab humne yaha ek or value insert kr di , ab kyu ki vector me pahale se hi 2 block khali the toh , abhi es  ki capacity me koe change nhi hoga
cout<<"after push capacity of v2\t"<<v2.capacity()<<endl; 
cout<<"after push size of v2\t\t"<<v2.size()<<endl; 
for(int i=0; i<v2.size();i++)
	cout<<v2[i]<<"\t";
cout<<endl;



// to insert value in  b/w we use iterator
vector <int >:: iterator I1=v2.begin();   //yaha I1 ek iterator ka nam hai , iterator ke pointer ki tarah hai jo es array ke kisi bhi block ko point karega 
//v1.begin() se yeh pointer array ke first block ko point kr raha hai 
//ab agar hame beech me koe value insert karani hai toh
v2.insert(I1+2,3333);  //as here I1 represent first block means 0 index , hame insert karawana  hai agar 2 index me i.e 3rd value
//i.e 0+2 =2 index;




v2.pop_back();  //as pop karane se last block ki value zarur delete ho jati hai pr eske size reduce nhi hoti  

cout<<"after pop 1 capacity of v2\t"<<v2.capacity()<<endl; 
cout<<"after pop 1 size of v2\t\t"<<v2.size()<<endl; 
for(int i=0; i<v2.size();i++)
	cout<<v2[i]<<"\t";
cout<<endl;



v2.clear();
cout<<"after clear() capacity of v2\t"<<v2.capacity()<<endl; 
cout<<"after clear() size of v2\t"<<v2.size()<<endl; 
}
