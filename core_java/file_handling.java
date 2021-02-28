import java.lang.String;
import java.io.File;
import java.io.IOException;
class file_handling
{
public static void main(String[] args) throws IOException 
{

File f1=new File("/home/mau/Desktop/my_repo/core_java/file_handling.txt");
f1.createNewFile();
System.out.println("is exist :"+f1.exists());
System.out.println("file size :"+f1.length());
System.out.println("can read :"+f1.canWrite());
System.out.println("file name :"+f1.getName());
f1.delete();
System.out.println("is exist :"+f1.exists());




}

}
