import java.lang.String;
public class indexof
{
public static void main(String [] args)
{
String s1=new String("computer");
int i=s1.indexOf('m');
int j=s1.indexOf('o',3);   //it always search the charater in one direction i.e from 0 to n index direction and if it is doesn't find the character itwill return -1;
//it will give the obsolute value of index i.e it does not depend on from where we start the search
System.out.println("index is "+i+"\nindex from index 3 is "+j); 
int k=s1.indexOf("ute");
System.out.println("index of string is "+k);  
int l=s1.lastIndexOf('p');
System.out.println("index is from last "+l); //this also gives the obsolute value of index
}



}
