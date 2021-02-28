import java.lang.String;

class a	implements Runnable
{
public void run()
{
	for(int i=0 ; i <= 10 ; i++)
System.out.println("Thread a :"+i);
}
}

class b	implements Runnable
{
public void run()
{
for(int  i=0 ; i <= 10 ; i++)
System.out.println("Thread b :"+i);
}
}

class example
{
public static void main(String[] args)
{
Thread t1= new Thread(new a());
Thread t2=new Thread(new b());
t1.start();
t2.start();
}



}
