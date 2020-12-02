#include<iostream>
#include<array>
using namespace std;


int main()
{
array <int ,5> dataarray={11,22,33,44,55};  // in the angular bracket first we write the data type then we write size of array 	  
cout<<dataarray.at(3)<<endl;    //here at is a member function of class array , which is used to fetch data from the array
//with at() function we pass index no. as a argument to fecth the value of that index no.
//or agar hum at ke andar index value insert kr dete hai jo array ke index no. ke out of range hai toh , program terminate ho jayega 
//or sath me ek error message bhi ayega 
cout<<dataarray[1]<<endl;   //ab yaha pr hum agar at ka use ka kr ke seedhe [] square backet ka bhi use kara sakate hai jaise ki hum abhi tak karate hue a rahe hai
cout<<dataarray.front()<<endl;  //return first value of element 
cout<<dataarray.back()<<endl;  //return last value of element

dataarray.fill(78);  // fill ki help se yeh array ke sabhi block me jo argumet me value pass hoti hai wohi value sare block me fill ho jati hai
for(int i=0;i<=4;i++)
{cout<<dataarray[i]; //now here print 78 as in all block value is inserted as 78
cout<<"\t";
}
cout<<"\n";
array <int ,5> dataarray1={98,78,67,45,32 }; 
array <int ,5> dataarray2={11,22,33,44,55}; 

dataarray1.swap(dataarray2); //yaha pr jin 2 array ko apas me swap karana hota hai toh ek array swap function ko call karata hai or dusara funtion as an argument pass kr diya jaya hai 
for(int i=0;i<=4;i++)
{cout<<dataarray1[i]; 
cout<<"\t";
}	
cout<<"\n";
for(int i=0;i<=4;i++)
{cout<<dataarray2[i]; 
cout<<"\t";
}
cout<<"\n";

cout<<"the size of array is "<<dataarray.size()<<endl;  //by size() function we can check the size of array

}
