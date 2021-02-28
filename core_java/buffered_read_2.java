import java.io.*;
import java.lang.String;

class buffered_read
{
public static void main(String[] args) throws IOException
{
int ch;
FileReader fr= new FileReader("file_writing.txt");
BufferedReader bf= new BufferedReader(fr);
String s1;
while((s1=bf.readLine() )!= null)
System.out.println(s1);


bf.close();
}


}
