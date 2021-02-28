import java.io.*;
import java.lang.String;

class buffered_writer
{
public static void main(String[] args) throws IOException
{
FileWriter fw= new FileWriter("file_writing.txt",true);
//BufferedWriter bf= new BufferedWriter(new FileWriter("file_writing.txt",true));  //we have to pass writer class object but here as FileWriter is a subclass pf writer so we can pass its object also 
BufferedWriter bf= new BufferedWriter(fw);
bf.write("computer");
bf.close();
}


}
