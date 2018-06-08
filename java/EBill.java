import java.util.Scanner;
class EBill {
	public static void main(String args[]) {
		int units;
		Scanner s = new Scanner(System.in);
		System.out.print("Enter units for this month: ");
		units = s.nextInt();
		CalcBill(units);
	}
	
	public static void CalcBill(int uni) {
		double first150=0.0, sec150To250=0.0, third250Plus=0.0, bill;

		if (uni < 0)
			System.out.println("invalid entry");
		else if (uni <= 150)
			first150 = uni;
		else if (uni > 150 && uni <= 250) {
			sec150To250 = (uni / 150); 
			first150 = 150; 
		}		
		else if (uni > 250) {
			third250Plus = (uni - 250); 
			sec150To250 = 100; 
			first150 = 150;
		}
		else
			System.out.println("invalid entry");
		
		bill = first150 * 2.55 + sec150To250 * 4.80 + third250Plus * 5.00;
		System.out.println("Total electricity bill is Rs " + bill);
	}
}
