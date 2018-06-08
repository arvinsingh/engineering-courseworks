import java.util.Scanner;
class Grading {
	public static void main(String args[]) {
		int marks=0, max=1000;
		double percentage=60.0;

		Scanner s = new Scanner(System.in);
		System.out.print("Enter marks of the student: ");
		marks = s.nextInt();
		System.out.print("Out of? ");
		max = s.nextInt();
		if (marks > max || marks < 0) {
			System.out.print("Invalid entries");
			System.exit(0);
		}
		percentage = (marks * 100.0) / max;
		
		if(percentage < 40)
			System.out.println("Promotion not Granted");
		else if (percentage >= 40 && percentage < 45)
			System.out.println("Pass");
		else if (percentage >= 45 && percentage < 60)
			System.out.println("Second Division");
		else if (percentage >= 60 && percentage < 80)
			System.out.println("First Division");
		else if (percentage >= 80 && percentage <= 100)
			System.out.println("Distinction");
		else
			System.out.println("Invalid Deduction!");
	}
}
