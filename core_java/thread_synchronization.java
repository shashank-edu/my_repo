import java.util.Scanner;
import java.lang.String;

class Account
{
private int bal;

public Account(int bal)
{
this.bal=bal;
}
public boolean isSufficientBalance(int withdrawl)
{
if(bal>withdrawl)
	return true;
else 
	return false;
}
public void withdraw(int amt)
{
bal=bal-amt;
System.out.println("withdrawl money is "+amt);
System.out.println("your current balance is "+bal);
}
}


class Customer implements Runnable 
{
	private String name;
	private Account  account;
public Customer(Account account, String n)
{
	this.account=account;
	name=n;
}

public void run()
{
	Scanner kb=new Scanner(System.in);
synchronized(account)    //sychronized(shared resourse)
{
	System.out.println(name+", enter amount to withdrawl");
	int amt=kb.nextInt();
	
	if(account.isSufficientBalance(amt))
	{	System.out.println(name);
		account.withdraw(amt);	
	}
	else
	{	System.out.println(name);
		System.out.println("insufficient balance");
	}
}
}
}
class threadexample
{
public static void main(String[] args)
{
Account a1=new Account(1000);
Customer c1= new Customer(a1,"raj"), c2=new Customer(a1,"simran");
Thread t1=new Thread(c1);
Thread t2=new Thread(c2);
t1.start();
t2.start();
}
}


