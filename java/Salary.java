import java.util.Scanner;
class Salary {
	public static void main(String args[]) {
		int sales=0;
		double cmsn=0.0, salary=0.0, Total_salary=0.0;
		Scanner s = new Scanner(System.in);
		for(int i=1; i<40; i++) {
 			System.out.print("Salary of the Salesman "+i+": Rs ");
			salary = s.nextDouble();
			System.out.print("Sale of the Salesman "+i+": Rs");
			Scanner sale = new Scanner(System.in);
			sales = sale.nextInt();
			if(sales > 15000)
    				cmsn = sales*0.18;
			else if(sales >10000)
				cmsn = sales*0.15;
			else if(sales >10000)
				cmsn = sales*0.15;
			else if(sales >5000)
		  		cmsn = sales*0.12;
			else
				cmsn=sales*0;
    			Total_salary=salary+cmsn+1500;
    			System.out.println("Total Salary of Salesman "+i+" is Rs "+Total_salary);
			System.out.print("0 to continue\n 1 to exit:");
			if(s.nextInt() == 1)
				System.exit(0);
		}
	}
}
