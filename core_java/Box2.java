public class Box2
{
private int l, b,h;
public BOX2()    //default constructor  //invalid because of conflict due to no difference in arguments
{}
public Box2()  //constructor with no formal argument 
{
l=10;b=15;h=20;	
}
public Box2(int l1,int b2,int h2) //constructor with formal argument
{
l=l1;b=b2;h=h2;
}
private void showdimension()
{
System.out.println("L="+l);
System.out.println("b="+b);
System.out.println("h="+h);
}

public static void main(String []args)
{
Box2 b1= new Box2();
Box2 b2= new Box2(12,8,5);
b1.showdimension();
b2.showdimension();
}
}
