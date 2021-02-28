import java.io.*;
import java.lang.String;
class writing
{
public static void main (String [] args) throws IOException
{
int i;
FileOutputStream fout=new FileOutputStream("file_writing.txt",false);
String s="TATA";
char ch[]= s.toCharArray(); //this convert string to character array 

for(i=0;i<s.length();i++)
	fout.write(ch[i]);
fout.close();
}
}
