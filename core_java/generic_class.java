import java.lang.String;

{
T i;
public void add(T i1)
{
i=i1;
}
public T get()
{
return i;
}
}

class example
{
public static void main(String[] args)
{
my_data <Integer> m1=new my_data <Integer>();
my_data <String> m2=new my_data <String>();
Integer k= new Integer(5);
m1.add(k);
m2.add("shashank");
System.out.println("m1 ="+m1.get());
System.out.println("m2 ="+m2.get());

}
}
