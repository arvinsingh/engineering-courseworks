import java.sql.*;
import javax.swing.*;
import java.awt.*;
class  Comboload
{
	private JComboBox cmbid,cmbname;
	private JFrame f;
	private JPanel p;
	//private JPanel top,center,bottom;

	 public Comboload(){
		   f = new JFrame("");
		   p=new JPanel();
		   cmbid=new JComboBox();
		   cmbname=new JComboBox();
		   f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	  }
	public static void main(String args[]){
		Comboload c = new Comboload();
		c.launchFrame();
	}
	  public void launchFrame(){
		   
			f.setLayout(new FlowLayout());
			f.setSize(200,200);
			f.setVisible(true);
			//f.add(p);
			//p.add(cmbid);
			f.add(cmbid);
			f.add(cmbname);
			call();
	  }

	void call(){
        try{
           Class.forName("sun.jdbc.odbc.JdbcOdbcDriver");
		   System.out.println("Drivers loaded successfully");
           Connection connect = DriverManager.getConnection("jdbc:odbc:Driver={Microsoft Access Driver (*.mdb)};DBQ=employee.mdb");
		   System.out.println("Connection established successfully");
           Statement state = connect.createStatement();
           String sql = "SELECT id,name FROM employee_details order by id";
           ResultSet rst = state.executeQuery(sql);
		  while (rst.next()) {

                cmbid.addItem(rst.getString(1));
                cmbname.addItem(rst.getString(2));
            }
           state.close();
           connect.close();
		}
        catch (Exception e) {
           System.out.print(e);
        }
      }
}