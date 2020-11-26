#include<iostream>
using namespace std;

struct book
{
 int book_id;
 char book_title[40];
 float book_price;

};


int  main()
{

book b1={100,"happy songs",45.25};   //here in c++ we don't write struct book 
//we initialize the value in sequence

book b2,b3;
b2.book_id=200;
// b2.title="happy video";  //here b2.title represent the address of first block of array which is a contant so , assignment operator ke left hand side me kabhi constant nhi a sakata thus yeh wrong hai
//toh es ke leye hame pata hona chahiye koe string character array me assign kaise ki jati hai 
//es ke leye hum string copy  function ka use karate hai strcpy(<address of array>,<string>);
strcpt (b2.title,"happy video");
b2.price = 45.25;

// ab agar hame b2 ka data b3 me rakhana hai toh es ke 2 tarike hai
// pahala ek ek value ko assign karana 
// b3.book_id=b2.book_id;
// or dusara directly
b3=b2;   //ese pura ka pura data ek hi bar me copy ho jayega 
return 0;
}
