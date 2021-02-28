import java.lang.String;
public class compare_string
{
public static void main(String [] args)
{
String s1= new String("coMputer");
String s2= new String("computer");


if(s1.equals(s2))
System.out.println("strings are same");
else
System.out.println("strings are not same");


if(s1.equalsIgnoreCase(s2))
System.out.println("strings are same as equalsignore case");
else
System.out.println("strings are not same also in equalsignore case");



int i=s1.compareTo(s2);	   //same as strcmp ..if their are two different string then it will return frist mismatch charecter ascii value diff.
if(i == 0)
System.out.println("string are same");
if(i >0)   //i..e M=77 and m=109 i.e comes to be nagative (77-109)=32 
System.out.println("strings are not same and diff. of first mismatch char of s1-s2 is +ve value :" +i);
else if(i<0)
System.out.println("strings are not same and diff. of first mismatch char of s1-s2 is -ve value :" +i);

String s3= s1.substring(4);
System.out.println("substring is " +s3);

String s4= s1.substring(2,5); //i.e 2<= string >5 here 5 doesn't included
System.out.println("substring is " +s4);



}



}
	       
