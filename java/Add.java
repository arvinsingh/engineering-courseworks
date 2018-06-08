import javax.swing.*;
import java.awt.event.*;
import java.awt.*;
import java.sql.*;
public class Add implements ActionListener {

	  private JFrame f;
	  private JButton ok,cancel;
	  private JPanel top,center,bottom;
	  private Color color1,color2,color3;
	  private JLabel lbltitle,lblname,lblid,lblage;
	  private JTextField txtname,txtid,txtage;
	  private String id,name,age;

	  public Add(){
		   f = new JFrame("Border Layout");
		   top=new JPanel();
		   center=new JPanel();
		   bottom=new JPanel();
		   ok = new JButton("Add");
		   cancel = new JButton("Cancel");
		   lbltitle=new JLabel("Employee Details");
		   lblid=new JLabel("Id");
		   lblname=new JLabel("Name");
		   lblage=new JLabel("Age");
		   txtid=new JTextField();
		   txtname=new JTextField();
		   txtage=new JTextField();
		   f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	  }

	  public void launchFrame(){
		    top.add(lbltitle);
			f.setLayout(new BorderLayout(0,0));
			f.add(top, BorderLayout.NORTH);
			bottom.add(ok);
			bottom.add(cancel);
			ok.addActionListener(this);
			f.add(bottom, BorderLayout.SOUTH);
			center.setLayout(new GridLayout(3,2));
			center.add(lblid);
			center.add(txtid);
			center.add(lblname);
			center.add(txtname);
			center.add(lblage);
			center.add(txtage);
			f.add(center, BorderLayout.CENTER);
			f.setSize(200,200);
			f.setVisible(true);
	  }

	  public static void main(String args[]){
		Add guiWindow2 = new Add();
		guiWindow2.launchFrame();
	  }

	  public void actionPerformed(ActionEvent ae){
          name=txtname.getText();
          age=txtage.getText();
		  id=txtid.getText();
          if(ae.getSource()==ok){         
            add();            
          }  
      }

	  void add(){
        try{
//           Class.forName("sun.jdbc.odbc.JdbcOdbcDriver");
		   //System.out.println("Divers loaded successfully");
		   String source = 
		   "jdbc:odbc:Driver={Microsoft Access Driver (*.mdb)};DBQ=employee.mdb";
		   Connection connect = DriverManager.getConnection(source);
           //Connection connect = DriverManager.getConnection("jdbc:odbc:employee");
		   System.out.println("Connection established successfully");
           Statement state = connect.createStatement();
           String sql = "insert into employee_details (id,name,age) values ('" + id + "','" + name + "','" + age + "')";
           state.execute(sql);
		   JOptionPane.showMessageDialog(null, "Record added Successfully");
		   System.out.println("Statement executed successfully");
           state.close();
           connect.close();
		}
        catch (Exception e) {
           System.out.print(e);
        }
      }

}