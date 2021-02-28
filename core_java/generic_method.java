import java.lang.String;

class example
{
public <E> void printArray(E [] s)
{

for(E x:s)   //it is a another type of loop which only works on array  // jitani string hogi utani bar loop chalega or string ki value x me assign ho jayegi
System.out.println(x);
/*for(int i=0;i<s.length;i++)
System.out.println(s[i]); */
}


public static void main(String [] args)
{
example e1=new example();
String countries[]=new String[] {"india","pakisthan","nepal"}; 
Integer numbers[]={12,34,56,77};
e1.printArray(countries); 
e1.printArray(numbers);
}

}
