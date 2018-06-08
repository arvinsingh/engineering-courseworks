import java.util.Scanner;


class TaxPayer
{
	int incometax_no;
	String taxpayer_name;
	double gross_income;

	TaxPayer() {
		incometax_no=99999;
		gross_income=0;
	}

	public void setIncomeTaxNumber(int tax_no) {
		incometax_no=tax_no;
	}
	public int getIncomeTaxNumber() {
		return incometax_no;
	}

	public void setTaxPayerName(String name) {
		taxpayer_name=name;
	}
	public String getTaxPayerName() {
		return taxpayer_name;
	}

	public void setGrossIncome(double income) {
		gross_income=income;
	}
	public double getGrossIncome() {
		return gross_income;
	}
}


public class ArrayOfObject {

	public static void main(String [] args) {
		Scanner sc = new Scanner(System.in);
		int no_tx, count;
		System.out.print("Enter the number of tax payers: ");
		no_tx = sc.nextInt();
		TaxPayer tx[] = new TaxPayer[no_tx];
		for(int i = 0; i < no_tx; i++)
			tx[i] = new TaxPayer();
		System.out.println("Enter the required information: ");
		for(int i = 0; i < no_tx; i++) {
			count = i + 1;
			System.out.print("Enter name of tax payer: " + count + ": ");
			tx[i].setTaxPayerName(sc.next());
			System.out.print("Enter income tax number: ");
			tx[i].setIncomeTaxNumber(sc.nextInt());
			System.out.print("Enter gross income: ");
			tx[i].setGrossIncome(sc.nextDouble());
		}
		for(int i = 0; i < no_tx; i++) {
			count = i + 1;
			System.out.println("Taxpayer " + count + "Information: ");
			System.out.println("Incometax Number: " + tx[i].getIncomeTaxNumber());

			System.out.println("Name: " + tx[i].getTaxPayerName());

			System.out.println("Gross Income: " + tx[i].getGrossIncome());
		}
	}
}

