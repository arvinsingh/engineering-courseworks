
/*
Imagine a tollbooth with a class called toll Booth. 
The two data items are a type unsigned int to hold the total number of cars, 
and a type double to hold the total amount of money collected. 
A constructor initializes both these to 0. 
A member function called payingCar ( ) increments the car total 
and adds 0.50 to the cash total. Another function, called nopayCar ( ), 
increments the car total but adds nothing to the cash total. 
Finally, a member function called displays the two totals. 
Include a program to test this class. 
This program should allow the user to push one key to count a paying 
car, and another to count a nonpaying car. 
Pushing the ESC kay should cause the program to print out the 
total cars and total cash and then exit.
*/

#include<iostream>
using namespace std;
#include<conio.h>
class tollbooth
{
	unsigned int tnc;
	double tot;
	public:
	tollbooth()
	{
		tnc=0;
		tot=0;
	}
	void payingcar();
	void nopaycar();
	void display();
};

void tollbooth::payingcar()
{
	tnc++;
	tot+=0.50;
}

void tollbooth::nopaycar()
{
	tnc++;
}

void tollbooth::display()
{
	cout<<"\nTotal number of cars: "<<tnc;
	cout<<"\nTotal ammount collected: Rs."<<tot;
}

int main()
{
	char ch;
	tollbooth t;
	do
	{
	cout<<"\nPress p for paying car"
	<<"\nPress n for nopay car"
	<<"\nPress ESC for display";
	ch=getche();
	if (ch=='p')
	t.payingcar();
	if (ch=='n')
	t.nopaycar();
	}while (ch!=27);
	
	t.display();
	return 0;
}
