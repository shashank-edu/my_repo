import java.util.*;
public class Array_input
{
public static void main(String []args)
{

int []arr=new int [5];
Scanner sc=new Scanner(System.in);
System.out.println("enter 5 numbers");
for(int count=0;count<5;count++)
arr[count]=sc.nextInt();

for(int i=0;i<5;i++)
	System.out.println("arr["+i+"]="+arr[i]	);

}

}
