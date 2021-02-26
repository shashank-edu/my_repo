public class instance_initialization
{

private int x;	


{
System.out.println("initialization block : x="+x);
x=5;										
}
public instance_initialization()
{
System.out.println("constructor x="+x);
}
public static void main(String [] args)
{
instance_initialization t1=new instance_initialization();
instance_initialization t2=new instance_initialization();
}

}
