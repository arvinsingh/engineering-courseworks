import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class Accinfo  implements ActionListener {
	JLabel l1,l2,l3,l4;
	JButton b1,b2;
	JTextField tf1,tf2,tf3,tf4;
	int i,j,k,l;
	String firstname[]={"Sokratis","Zlatan","Demy De","Aleksandar","Athanassios","Mesut","Zdenko","Per"};
	String lastname[]={"Papastathopoulos","Ljubijankic","Zeeuw","Radosavljevic","Prittas","Ozil","Strba","Kroldrup"};
	String acc_no[]={"745132","937466","931481","712552","745587","792773","746353","986524"};;
	String acc_bls[]={"1524.40","8615.60","9999.00","2546.11","8645.45","6524.76","4589.89","5124.43"};
	int ArrayIndex = 1; 

	Accinfo() {
		JFrame f=new JFrame("account information"); 
		l1=new JLabel("First name:");  
		l1.setBounds(10,50, 150,30);  
		l2=new JLabel("Last name:");  
		l2.setBounds(10,100, 150,30);  
		l3=new JLabel("Account number:");  
		l3.setBounds(10,150, 150,30);  
		l4=new JLabel("Balance:");  
		l4.setBounds(10,200, 150,30);

		tf1=new JTextField(firstname[i]);  
		tf1.setBounds(150,50, 150,30);  
		tf1.setEditable(false);
		tf2=new JTextField(lastname[j]);  
		tf2.setBounds(150,100, 150,30); 
		tf2.setEditable(false);
		tf3=new JTextField(acc_no[k]);  
		tf3.setBounds(150,150, 150,30);   
		tf3.setEditable(false);
		tf4=new JTextField(acc_bls[l]);  
		tf4.setBounds(150,200, 150,30);   
		tf4.setEditable(false);
    
		b1=new JButton("Previous");  
		b2=new JButton("Next");  
     
		b1.setBounds(50,300,150,30);  
		b1.setBackground(Color.black);  
		b1.setForeground(Color.green);  
		b2.setBounds(250,300,150,30);  
		b2.setBackground(Color.black);  
		b2.setForeground(Color.green);  
        
		b1.addActionListener(this);  
		b2.addActionListener(this);

		tf1.addActionListener(this);  
		tf2.addActionListener(this); 
		tf3.addActionListener(this);  
		tf4.addActionListener(this); 
    
   		f.add(l1); f.add(l2);f.add(b1); f.add(b2);f.add(tf1);  f.add(tf2); f.add(tf3);f.add(tf4);
		f.add(l3); f.add(l4);  
		f.setSize(500,400);  
		f.setLayout(null);  
		f.setVisible(true); 

	}
	public void actionPerformed(ActionEvent e) {  
		if(e.getSource()==b2) {  
			b1.setEnabled(true);
			if(ArrayIndex<firstname.length) {
				tf1.setText(firstname[ArrayIndex]);  
				tf2.setText(lastname[ArrayIndex]); 
				tf3.setText(acc_no[ArrayIndex]);  
				tf4.setText(acc_bls[ArrayIndex]);  
				ArrayIndex= ArrayIndex+1;
			} 
			else if(ArrayIndex==8)
				b2.setEnabled(false);  
		}
		else if(e.getSource()==b1){
			b2.setEnabled(true);  
			if(ArrayIndex>0){
				ArrayIndex= ArrayIndex-1;
				tf1.setText(firstname[ArrayIndex]);  
				tf2.setText(lastname[ArrayIndex]); 
				tf3.setText(acc_no[ArrayIndex]);  
				tf4.setText(acc_bls[ArrayIndex]);  
			}
			else 
				if(ArrayIndex==0)
					b1.setEnabled(false);

		}
       
      
	}
	public static void main(String[] args) {
		new Accinfo();
	}
    
}
