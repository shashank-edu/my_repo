import java.io.*;
import java.lang.String;

class buffered_read
{
public static void main(String[] args) throws IOException
{
int ch;
FileReader fr= new FileReader("file_writing.txt");
BufferedReader bf= new BufferedReader(fr);
while((ch=bf.read())!= -1)
{
System.out.print((char)ch);
}
bf.close();
System.out.println("");
}


}
