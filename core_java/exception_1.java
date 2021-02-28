import java.lang.String;
class exception_1
{

public static void main(String[] args)
{
try
{
System.out.println(3/0);   //as because it is a arithmetic exception so a object of a arithemetic exception is thrown
System.out.println("in try");
}
catch(NullPointerException a)
{
System.out.println("Exception :"+a.getMessage());
}
catch(ArithmeticException e)  //arithemetic exception object is received in e 
{
System.out.println("Exception :"+ e.getMessage());
}
System.out.println("Hello");

}

}
