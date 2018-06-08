import java.awt.event.*;
import javax.swing.*;

public class Calculator  implements ActionListener {

	JLabel l1,l2,l3;
	JButton b1,b2,b3,b4;
	JTextField tf1,tf2,tf3;
	
	Calculator() {
		JFrame f=new JFrame("Calculator"); 
		JTextArea area=new JTextArea("CALCULATOR");  
		area.setBounds(200,10, 80,30);  
		area.setEditable(false);

		l1=new JLabel("Enter first number:");  
		l1.setBounds(10,100, 200,30);  
		l2=new JLabel("Enter second number:");  
		l2.setBounds(10,150, 200,30);  
		l3=new JLabel("RESULT:");  
		l3.setBounds(10,200, 150,30);

		tf1=new JTextField();  
		tf1.setBounds(200,100, 100,30);  
		tf2=new JTextField();  
		tf2.setBounds(200,150, 100,30); 
		tf3=new JTextField();  
		tf3.setBounds(200,200, 100,30);   
		tf3.setEditable(false);
    
		b1=new JButton("+");  
		b2=new JButton("-");  
		b3=new JButton("*");  
		b4=new JButton("/");
   		b1.setBounds(300,100,50,30);  
   		b2.setBounds(400,100,50,30);  
   		b3.setBounds(300,150,50,30);  
   		b4.setBounds(400,150,50,30); 
		b1.addActionListener(this);  
		b2.addActionListener(this);  
		b3.addActionListener(this);  
		b4.addActionListener(this);

		f.add(l1); f.add(l2); f.add(b1); f.add(b2); f.add(b3); f.add(b4); f.add(tf1); f.add(tf2); f.add(tf3);
		f.add(l3); f.add(area);  
		f.setSize(500,400);  
		f.setLayout(null);  
		f.setVisible(true); 
	}
	public void actionPerformed(ActionEvent e) {  
		String s1=tf1.getText();  
		String s2=tf2.getText();  
		int a=Integer.parseInt(s1);  
		int b=Integer.parseInt(s2);  
		int c=0;  
		if(e.getSource()==b1) 
			c=a+b;
		else if(e.getSource()==b2)
			c=a-b;  
		else if(e.getSource()==b3)
			c=a*b;
		else if(e.getSource()==b4)
			c=a/b;
		String result=String.valueOf(c);  
		tf3.setText(result);  
	}
	public static void main(String[] args) {  
		new Calculator();
	}  
}  
