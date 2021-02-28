import java.lang.String;
class example
{
public static void main(String[] args)
{
int balance =5000;
int withdrawlAmount=6000;


if(balance<withdrawlAmount)
	throw new ArithmeticException("insufficient balance");
balance=balance-withdrawlAmount;
System.out.println("transaction succesfully completed");
System.out.println("program continue....");

}
}
