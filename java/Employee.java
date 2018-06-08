import java.util.Scanner;
class Employee {
	public static void main(String args[]) {
		Double basic_pay=0.0, d_all=0.0, h_rent_all=0.0, pro_fund=0.0, net_pay=0.0, g_pay=0.0;
		Scanner s = new Scanner(System.in);
		System.out.print("Enter Your Basic Pay: Rs");
		basic_pay = s.nextDouble();
		d_all = (25 * basic_pay) / 100;
		h_rent_all = (15 * basic_pay) / 100;
		pro_fund = (8.33 * basic_pay) / 100;
		net_pay = basic_pay + d_all + h_rent_all;
		g_pay = net_pay - pro_fund;
		System.out.println("Your Gross Pay is: Rs" + g_pay);
	}
}
