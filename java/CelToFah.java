import java.util.Scanner;
class CelToFah {
	public static void main(String args[]) {
		double cel, fah;
		Scanner sc = new Scanner(System.in);
		for(int i=0;i<15;i++) {
			System.out.print("Enter temperature ");
			System.out.print(i + 1 + " Fahrenheit: ");
			fah = sc.nextDouble();
			cel = (5.0/9.0) * ( fah - 32.0 );
			System.out.print(fah + " Fahrenheit = ");
			System.out.println(cel + " Celsius");
		}
		System.out.println("All temperatures processed!");
	}
}
