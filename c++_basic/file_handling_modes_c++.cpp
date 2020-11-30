#include<iostream>
#include<fstream>
using namespace std;

int main()
{
ofstream fout;   //this object represent output stream
fout.open("my_file.txt", ios::app);
	fout<<"this is the second line \n this line i add by opening this file again in append mode an use operation to change the line"<<endl;
//fout.open("my_file.txt", ios::app | ios ::binary  );   //es me hum pahala argument file ka nam pass karate hai 
// or agar hum es me dusara arguement pass nhi bhi karate hai toh file output mode me open ho jati hai, yani agar pahale se file hue toh us ka saradata delete ho jayega  , or new file me file se data edit kar sakate hai 
// pr agar chahe toh ese me 2nd argument ke roop me file opening mode mention kr sakte hai	
// or aagr hum chahe toh ek se jayada mode mebhi es file ko open kr sakate hai
//agar hum ese aise likhate hai fout.open(".....", ios::app |ios::binary | ios::in);  ab yaha hum bol rahe hai ki hum es file ko open kr rahe hai input mode me toh yeh logically galat hai , yaha pe koe error nhi ayegi kyu ki hum yaha pr koe bhi mode likh sakte hai
//kyu ki yaha pr read out mode likane ka mtlb hi nhi nikale kyu ki hum ne fout ek ofstream ka object banaya hai , jo ki sirf writting operation perform karata hai
//ese tarah se agar hum ifstream ka object banate hai or hum  sochate hai ki ese ios:: out ya ios::app; toh es ka bhi koe meaning nhi nikalega 
//toh es tarah se hume ek se jayada mode me file ko open kr sakate hai    


}
