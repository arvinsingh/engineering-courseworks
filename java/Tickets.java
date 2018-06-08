import java.util.Scanner;

class Tickets
{
	public static void main(String args[])
	{
		int age=0, o=0, y=0, b=0, totalAmt=0;
		Scanner s = new Scanner(System.in);

		while (true)
		{
			System.out.print("Age of Passange ");
			age = s.nextInt();
			if (age > 18)
			{
				o++;
				System.out.println("Welcome Aboard! Your ticket costs Rs 5.");
			}
			else if (age > 4)
			{
				y++;
				System.out.println("Welcome Aboard! Your ticket costs Rs 3.");
			}
			else if (age < 5 && age > 0)
			{
				b++;
				System.out.println("Welcome Aboard! Your ticket costs nothing.");
			}
			System.out.print("Do you want to continue?(y/n) ");
			if (s.next().charAt(0) == 'n')
				break;
		}
		System.out.println("Stats of the passengers");
		totalAmt = o * 5 + y * 3;
		System.out.println("Above 18: Between 18 and 5: Kids: Total Amount");
		System.out.println(o + "\t\t" + y + "\t\t" + b + "\t" + totalAmt);
	}
}
