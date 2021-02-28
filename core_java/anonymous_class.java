import java.lang.String;

class greeting 
{
public void sayhello()
{

System.out.println("Hello");
}
}

class india
{

greeting g =new greeting()
{
public void sayhello()
{
System.out.println("namaste");


}

};

}

class outer
{
public static void main(String [] args)
{
india i=new india();
i.g.sayhello();
}



}
