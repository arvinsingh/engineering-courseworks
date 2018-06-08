import java.util.Scanner;
class EmployeeTest{
	public static void main (String[] args){
		Employee e1 = new Employee();
		e1.get();
		e1.set();
		Employee e2 = new Employee();
		e2.get();
		e2.set();

	}
}
class Employee{
	String firstName;
	String lastName;
	double yearlySalary;
	double raisedSalary;
	Employee(){
		firstName = "";
		lastName = "";
		yearlySalary= 0.00;
	}
	void get(){
		Scanner s = new Scanner(System.in);
		System.out.print("Enter your Monthly Salary: ");
		yearlySalary = s.nextDouble();
	}
	void set(){
		System.out.println ("Monthly Salary is : " + yearlySalary +" Rs/-");
		raisedSalary = yearlySalary* 10 / 100;
		System.out.println ("Salary Raised: " + raisedSalary + " Rs/-");
		System.out.println ("Yearly salary after raised amount is " + (yearlySalary+raisedSalary) + " Rs/-");
}