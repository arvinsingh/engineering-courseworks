import java.util.Scanner;
class Capitals {
	static int total=10;
	public static void main(String args[]) {
		String[] States = new String[total];
		String[] Capt = new String[total];
		String check;
		int x=0, flag;
		Scanner s = new Scanner(System.in);
		System.out.println("Initializing program! User be ready to enter \nName of 10 States with corresponding capitals!");
		for(int i=0; i < total; i++) {
			x = i + 1;
			System.out.print("Enter State " + x + ": ");
			States[i] = s.next();
			System.out.print("Capital of " + States[i] + " is: ");
			Capt[i] = s.next();
		}
		System.out.println("Time to check for the present entries!");
		while (true) {
			flag = 1;
			System.out.print("Enter the State to know the corresponding Capital of: ");
			check = s.next();
			System.out.println("Searching Database!");

			for(int i=0; i < total; i++)
				if (check.equals(States[i])) {
					System.out.println("Match found!");
					System.out.println("Capital of " + States[i] + " is " + Capt[i]);
					flag = 0;
					break;
				}
			if (flag == 1)
				System.out.println("No match found! Try again when system is upgraded!");
			System.out.print("Do you want to continue?(y/n): ");
			if (s.next().charAt(0) == 'n')
				break;
		}
		System.out.println("Thank you for using our system!");
	}
}
