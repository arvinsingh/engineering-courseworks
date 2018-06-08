//import java.awt.*;
import java.awt.event.*;
import java.sql.*;
import javax.swing.*;


public  class SMS extends JFrame implements ActionListener
{
	JTextField txtid,txtname,txtage;
	JLabel lblId,lblName,lblAge;
	JButton btnfirst,btnprevious,btnnext,btnlast;
	String stcurId;	

	

	public Connection conn;
	public Statement stmt,s1,st;
	public ResultSet rs,r1;
	
	public SMS()
	{	setLayout(null);
   	    setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	
		setResizable(false);
		lblId=new JLabel("ID");
		lblId.setBounds(20,60,100,20);
		add(lblId);
		lblName=new JLabel("Name");
		lblName.setBounds(20,90,100,20);
		add(lblName);
		lblAge=new JLabel("Age");
		lblAge.setBounds(20,120,100,20);
		add(lblAge);

		btnfirst=new JButton("<<");
		btnfirst.setBounds(100,300,50,20);
		add(btnfirst);
		btnfirst.addActionListener(this);

		btnprevious=new JButton("<");
		btnprevious.setBounds(150,300,50,20);
		add(btnprevious);
		btnprevious.addActionListener(this);

		btnnext=new JButton(">");
		btnnext.setBounds(200,300,50,20);
		add(btnnext);
		btnnext.addActionListener(this);

		btnlast=new JButton(">>");
		btnlast.setBounds(250,300,50,20);
		add(btnlast);
		btnlast.addActionListener(this);
				
		add(txtid=new JTextField(10));
		add(txtname=new JTextField(20));
		add(txtage=new JTextField(3));
		
		txtid.setBounds(130,60,120,20);
		txtname.setBounds(130,90,120,20);
		txtage.setBounds(130,120,120,20);
		
		setSize(390,370);
		setLocationRelativeTo(null);
		
		connect();
		EnableFields(false);
		
	}

	private void EnableFields(boolean b)
	{
		txtid.setEnabled(b);
		txtname.setEnabled(b);
		txtage.setEnabled(b);
		
		btnfirst.setEnabled(!b);
		btnprevious.setEnabled(!b);
		btnnext.setEnabled(!b);
		btnlast.setEnabled(!b);

		
	}
	
	public void connect()
	{	
		try
		{
			rs=StudConnection.executeQuery("select * from tblStud");
			if(rs.next())		
				Display(rs);
		}
		catch(SQLException e)
		{
			System.out.println(e);
		}
		catch(java.lang.Exception ex)
		{
			ex.printStackTrace();
			System.out.println(ex);
		}
	}
	public void actionPerformed(ActionEvent e) 
	{	
	
			try
			{	
				if(e.getSource()==btnfirst)
				{
				
					if(rs.isFirst())
					{	
					rs.beforeFirst();
					JOptionPane.showMessageDialog(null, "First Record");
					
					}
					if(rs.first())
					{
						Display(rs);
					}	
				}
				else if(e.getSource()==btnlast)
				{
				
					if(rs.isLast())
					{	
						rs.afterLast();
						JOptionPane.showMessageDialog(null, "Last Record");
						
					}
					if(rs.last())
					{
						Display(rs);
					}	
				}
				else if(e.getSource()==btnnext)
				{
				
					if(rs.isLast())
					{	
						rs.afterLast();
						JOptionPane.showMessageDialog(null, "Last Record");
						
					}
					if(rs.next())
					{
						Display(rs);
					}	
				}
				else if(e.getSource()==btnprevious)
				{
				
					if(rs.isFirst())
					{	rs.beforeFirst();
					
					 JOptionPane.showMessageDialog(null, "First Record");
					}
					if(rs.previous())
					{	
					 	Display(rs);
					}		
				}
			}
			catch(SQLException e1) 
			{
			}
		}
	
	
	private void Display(ResultSet rs) throws SQLException
	{
		stcurId = rs.getString(1);
		txtname.setText(rs.getString(2));
		txtid.setText(stcurId);
		txtage.setText(String.valueOf(rs.getByte(3)));
		txtid.requestFocus();

	}
	
	public static void main(String s1[])
	{	
		SMS s=new SMS();			
		s.show();
	}	
}

class StudConnection
{	
	public static Connection getConnection()
	{
		Connection con=null;
		try
		{
			Class.forName("sun.jdbc.odbc.JdbcOdbcDriver");
			con=DriverManager.getConnection("jdbc:odbc:student","","");	
		}
		catch(java.lang.Exception e)
		{
			System.out.println(e);
		}
		return con;
	}	
	
	public static ResultSet executeQuery(String stSQL) throws Exception
	{
		Connection cn = getConnection();
		Statement  st = cn.createStatement(ResultSet.TYPE_SCROLL_INSENSITIVE,ResultSet.CONCUR_READ_ONLY);
		ResultSet rs = st.executeQuery(stSQL);
		return rs;		
	}
}

/*
TYPE_FORWARD_ONLY: The result set cannot be scrolled; its cursor moves forward only, from before the first row to after the last row. The rows contained in the result set depend on how the underlying database generates the results. That is, it contains the rows that satisfy the query at either the time the query is executed or as the rows are retrieved.
TYPE_SCROLL_INSENSITIVE: The result can be scrolled; its cursor can move both forward and backward relative to the current position, and it can move to an absolute position. The result set is insensitive to changes made to the underlying data source while it is open. It contains the rows that satisfy the query at either the time the query is executed or as the rows are retrieved.
TYPE_SCROLL_SENSITIVE: The result can be scrolled; its cursor can move both forward and backward relative to the current position, and it can move to an absolute position. The result set reflects changes made to the underlying data source while the result set remains open.
CONCUR_READ_ONLY: The ResultSet object cannot be updated using the ResultSet interface.
CONCUR_UPDATABLE: The ResultSet object can be updated using the ResultSet interface.
*/