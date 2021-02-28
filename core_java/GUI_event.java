import java.applet.Applet;
import java.awt.event.*;
import java.lang.String;
import java.awt.*;

class GUI_event extends Applet
{
Label l1,l2,l3;
TextField t1,t2;
Button b1;
public void init()
	{
	l1=new Label("First number");
	l2=new Label("Second number");
	l3=new Label();
	t1=new TextField();
	t2=new TextField();
	b1=new Button("Add");
	setLayout(null);
	l1.setBounds(30,50,100,20); 
	l2.setBounds(30,100,100,20); 
	t1.setBounds(150,50,100,20); 
	t2.setBounds(150,100,100,20); 
	b1.setBounds(100,150,80,20);
	l3.setBounds(30,180,100,20);
	add(t1);
	add(l1);
	add(l2);
	add(t2);
	add(b1);
	add(l3);
	b1.addActionListener(new myhandler());
	}
		public class myhandler implements ActionListner
		{
		public void actionPerformed(ActionEvent e)
			{
			int a,b,c;
			a=Integer.parseInt(t1.getText());
			b=Integer.parseInt(t2.getText());
			c=a+b;
			l3.setText("sum is "+c);
			}
		}
}


/* <body>
    <applet code="GUI_event.class" width="300" height="220"> </applet> </body>*/
