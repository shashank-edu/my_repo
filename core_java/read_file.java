import java.io.*;
import java.lang.String;

class read_file
{
public static void main(String [] args) throws IOException
{
	int i;
	FileInputStream fin;
	fin=new FileInputStream("./file_writing.txt");
do{
i=fin.read();
if(i != -1)
	System.out.print((char)i);

}while(i !=-1);
fin.close();
	System.out.print("\n");



}
}
