#include<iostream>
#include<fstream>
using namespace std;

int main()
{
ifstream fin;   //hamane yaha pr ek upstream object banaya fin nam ka i.e input stream ban chuki hai
fin.open("my_file.txt");   //yaha pr jo open ho kr , input stream se link ho chuki hai 
//ab hame reading karani hai

/*
int a;
cin>>a;  //ab hum jab keyboad sedata read karate hai toh hum cin ki help lete hai , ese se yeh hota hai ki ek value enter kaarate  hai hum keyboard se or wo a me store ho jata hai 
//yeh value keyword se hi kyu ata hai kyu ki cin keyword keyboad ke sath associated hai 
//toh jab yeh object ho jo input stream ko keyboad se associated karata hai toh data keyboard se lega 
//or ese input stream se hote hue kaha se laya jayega , input stream me laya jayega 
//ab hamane kya kiya hai usi class ka ek object banaya hai ,bus difference bs etana hai ki cin keyboad se associated hai pr fin file se associated hai   
*/
char ch;
ch =fin.get();
// fin>>ch; 
//ab ese se kya hoga kyu ki fin file se related hai toh jo pahala character hoga file ne , wo ch me a jayega 
// toh hum kya kare kyu ki hae ek character nhi kayi sare charecter read karane hai file se 
// toh ese ke leye hum loop lagayege jo tab tak chale jab tak file ka end na a jaye toh ese ke leye hum likege (fin.eof())
//eof() ek function hai jis ka matlb hai end of file , yeh function pata lagata hai ki file ka end aya kya or agar end a jata hai toh yeh return kr deha 1 or jab file ka end nhi ayega toh yeh return kr dega 0;
//toh hum chahate hai ki yeh loop tab tak chale jab tak file ka end nhi yaha ho toh es ke leye hum ! (not ) laga dete hai condition me 
while(!fin.eof())
{
cout<<ch;
ch=fin.get();   //ab ch me aagala charecter a jayega 
}	 
fin.close();
printf("\n");
}

//ab yaha pr jo extraction operator hai >>jis ki help hum fin se file ka data ch me la rahe hai yeh space ko ek delimiter manata hai i.e data saperator manata hai 
//yani space , tab or next linea gaye toh yeh en thino ko ek aisa special charecter manata hai ki , ki agar yeh data a gaye toh yeh data nhi hai, balaki data ko saperate karane wale special symbols hai 
//toh es ko toh es ne read hi nhi kiya , ek tarah se un se yeh la kr ch me raha hi nhi hai toh , jo chij yeh laya hi nhi to show kaise karega 
//ese wajah se space show nhi ho raha hai 
//ab es ka solution bhi hai pr pahale hum samajhate hai  ki fin>>ch; es ka mtlb kya hai
// fin.opearator >>(ch); i.e fin ne apane extraction operator ko call kiya tha or us me ch ka reference pass kiya tha 
// toh aise jiase ki yeh extraction operator space ko data saperator manata hai toh kyu na hum ese call hi na kare 
// toh es ki jagaha kyu na hum get() function ko call kare jo return karege us charecter ko jo us ne kiya hai read
//fayada yeh hai ki get() function space ko data saperator nhi manata
//
//
//ab hum log charecter by charecter reading karana bhi chahte hai or charecter by charecter writing karana bhi janate hai 
//but yeh es raw style ki programming hai , and es ke bad hum ese me OOPs ka touch bhi dege  
