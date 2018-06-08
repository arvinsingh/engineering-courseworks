#include<iostream>
#include<math.h>
using namespace std;
class Account
{
	char customerName[30];
	int accountNumber;
	char accountType[8];
	public:
   		void read(int);
   		void display();
};
class SavingAccount:public Account
{
	float balance, debit, deposit, interest;
	public:
    	void update();
};
class CurrentAccount:public Account
{
    float balance, debit, deposit;
    int checkBook;
 	public:
	 	void updateCurrent();
};
void Account::read(int a)
{
        char sav[8]="savings";
        char cur[8]="current";
        cout<<"\nEnter your name: ";
        cin>>customerName;
        cout<<"\nEnter your account number: ";
        cin>>accountNumber;

        if(a==1)
        	for(int i=0;i<7;i++) 
        		accountType[i]=sav[i];
        else
         	for(int j=0;j<7;j++)
          		accountType[j]=cur[j];
}

void Account::display()
{

        cout<<"\nThe account number is: "<<accountNumber;
        cout<<"\nThe name of the customer is: "<<customerName;
        cout<<"\nThe type of account is: "<<accountType;

}

void SavingAccount::update()
{
	float amount;
 	cout<<"\n Enter the balance: ";
 	cin>>balance;
 	cout<<"\n Enter the amount of money to be withdrawn: ";
	cin>>debit;
	balance=balance-debit;
 	cout<<"\n The balance after the withdrawal is: "<<balance;
 	cout<<"\n Enter the amount to be deposited: ";
 	cin>>deposit;
 	balance=balance+deposit;
 	cout<<"\n The balance after deposit is: "<<balance;
 	cout<<"\n The compound interest for the two years is  3.5% \n";
 	amount=((100+3.5)/100);
 	interest=pow(amount,2);
 	balance=balance*interest;
 	cout<<"\n The balance after the compound interest is: "<<balance;
}

void CurrentAccount::updateCurrent()
{
	int c=0;
	char ch;
	balance=0;
	cout<<"\n Enter the amount to be deposited: ";
	cin>>deposit;
	balance=balance+deposit;
	cout<<"\n The amount after deposit is: "<<balance;
	cout<<"\n Enter the amount of money to be withdrawn:";
	cin>>debit;
	balance=balance-debit;
	cout<<"\n The balance after the withdrawal is: "<<balance;
	if(balance<1000)
	{
	    cout<<"\n The balance left is less than the limit!";
	    balance=balance-100;
	    cout<<"\n The balance after the penalty is: "<<balance;
	}
	while(c==0)
	{
	    cout<<"\n do you want to issue the cheque book (y,n)? " ;
		cin>>ch;
		if(ch=='y')
		{
			cout<<"\n Number of page for the checkbook: ";
			cin>>checkBook;
			cout<<"\n The book will be issued after two days.";
			c=1;
		}
		else if(ch=='n')
		{
			c=1;
		}
	}
}
	
int main()
{
	int i=0,choice;
	do
	{
	  	cout<<"\n Enter the choice of operation to be performed \n  1:Savings \n  2:Current \n  3:Exit \n  Enter choice:";
	  	cin>>choice;
		switch(choice)
		{
			case 1:
			    SavingAccount A;
			    A.read(choice);
			    A.update();
			    A.display();
			    break;
			case 2:
			    CurrentAccount B;
				B.read(choice);
				B.updateCurrent();
				B.display();
				break;
			case 3:        
				break;
			default:
				cout<<"\n INVALID CHOICE!";
		}
	}
	while(choice!=3);
 	cout<<"\n Thankyou for using our services!";
 	return 0;
}
