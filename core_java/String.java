import java.lang.String;
class string_example
{
public static void main(String[] args)
{
String s1="computer";
String s2="computer";
String s3= new String("computer");
System.out.println("Result 1 :"+(s1 == s2)); //true //here not comparing string we are comparing refernce variable(i.e address of variable)
System.out.println("Result 2 :"+s1.equals(s2));//true //here we are comparing the string 
System.out.println("Result 3 :"+(s1 == s3));
System.out.println("Result 4 :"+s1.equals(s3));
}


}
