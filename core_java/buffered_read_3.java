import java.io.*;
import java.lang.String;

class buffered_read
{
public static void main(String[] args) throws IOException
{
int ch;
FileReader fr= new FileReader("file_writing.txt");
BufferedReader bf= new BufferedReader(fr);
char []s=new char[20];
bf.read(s,2,15);
System.out.println(s);
bf.close();
}
}
