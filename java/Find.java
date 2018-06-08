import javax.swing.*;
import java.awt.event.*;
import java.awt.*;
import java.sql.*;
public class Find implements ActionListener {

	  private JFrame f;
	  private JButton ok,cancel;
	  private JPanel top,center,bottom;
	  private Color color1,color2,color3;
	  private JLabel lbltitle,lblname,lblid,lblage;
	  private JTextField txtname,txtid,txtage;
	  private String id,name,age;

	  public Find(){
		   f = new JFrame("Border Layout");
		   top=new JPanel();
		   center=new JPanel();
		   bottom=new JPanel();
		   ok = new JButton("Find");
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
			//txtname.setVisible(false);
		    //txtage.setVisible(false);
	  }

	  public static void main(String args[]){
		Find guiWindow2 = new Find();
		guiWindow2.launchFrame();
	  }

	  public void actionPerformed(ActionEvent ae){
          
		  id=txtid.getText();
		  int i=Integer.parseInt(id);
          if(ae.getSource()==ok){         
            Find(i);            
          }  
      }

	  boolean Find(int id){
		  boolean flag=false;
        try{
           Class.forName("sun.jdbc.odbc.JdbcOdbcDriver");
		   System.out.println("Divers loaded successfully");
           Connection connect = DriverManager.getConnection("jdbc:odbc:employee");
		   System.out.println("Connection established successfully");
           Statement state = connect.createStatement();
           String sql = "select * from employee_details where id="+ id +"";
           ResultSet rs=state.executeQuery(sql);
		   if(rs.next())
                {
                    txtid.setText(rs.getString("id"));
                    txtname.setText(rs.getString("name"));
					txtage.setText(rs.getString("age"));
                    flag=true;
                }
		   JOptionPane.showMessageDialog(null, "Record Found Successfully");
		   System.out.println("Statement executed successfully");
		   rs.close();
           state.close();
           connect.close();
		}
        catch (Exception e) {
           System.out.print(e);
        }
		return flag;
      }

}