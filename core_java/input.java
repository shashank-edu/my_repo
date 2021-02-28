import java.util. *; //here star represent all data we are importing from java.util but for scanner we can also write it as java.util.Scanner

public class input
{
public static void main(String []args)
{
System.out.println("enter your name and age");
Scanner sc=new Scanner(System.in);
String name=sc.next();
int age =sc.nextInt();
System.out.println("name :"+name+"\nage :"+age);
}

}
