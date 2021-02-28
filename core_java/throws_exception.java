import java.lang.String;
import java.io.*;

class example
{
public static void main(String[] args)// throws IOException
{
//throw new ArithmeticException();
try
{
throw new IOException();
//System.out.println("after exception");
}
catch(IOException a)
{
System.out.println("expection :"+a.getMessage());
}
}
}
