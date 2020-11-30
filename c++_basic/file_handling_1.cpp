#include<iostream>
#include<fstream>
using namespace std;

int main()
{
ofstream fout;  // here we make an object fout of class ofstream 
fout.open("my_file.txt");   //here we call a function open() , available in ofstream class in the parenthasis of open we write file name or 
//we can also write is a full directory like ./home/my_repo , but if we write simply name thus is take current working directory as as default directory
//yeh yeh file ram me load ho jayegi , ab kyu ki fout ne open function call kiya hai toh yeh file , fout ke output stream se linked ho jayegi 
fout<<"hello";  //but this output operator this data stored in the file 
}

