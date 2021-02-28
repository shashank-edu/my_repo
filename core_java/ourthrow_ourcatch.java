import java.lang.String;
class example
{
public static void main(String[] args)
{
int balance =5000;
int withdrawlAmount=4000;

try{
if(balance<withdrawlAmount)
throw new ArithmeticException("insufficient balance");
balance=balance-withdrawlAmount;
System.out.println("transaction succesfully completed");
}
catch(ArithmeticException a)
{
 
System.out.println("Exception: "+a.getMessage());
}
System.out.println("program continue....");

}
}
