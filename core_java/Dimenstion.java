class Box
{
private int length,  breadth, height;
public void setdimension(int l, int b ,int h)
{length=l;breadth=b;height =h;}
public void showdimension()
{
System.out.println("L="+length);
System.out.println("B="+breadth);
System.out.println("H="+height);
}
public static void main(string[] args)
{
Box smallbox= new Box(); //smallbox is a refernece variable which contain the address of the object
smallbox.setdimension(12,10,25);  //instance variable me by default zero hota hai 
smallbox.showdimension();	
} 
}


class Example
{
public static void main()
{
Box smallbox= new Box(); //smallbox is a refernece variable which contain the address of the object
smallbox.setdimension(12,10,25);  //instance variable me by default zero hota hai 
smallbox.showdimension();	
} 
}
