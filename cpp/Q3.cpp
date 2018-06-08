#include <iostream>

using namespace std;
int main()
{
	char c, operatr;
	double operand1, operand2;

	do
	{
		cout<<"Enter first number, operator, second number: ";
		cin>>operand1>>operatr>>operand2;
		switch(operatr)
		{
			case '+':
				cout<<"Answer = "<<operand1+operand2;
				break;
			case '-':
				cout<<"Answer = "<<operand1-operand2;
				break;
			case '*':
				cout<<"Answer = "<<operand1*operand2;
				break;
			case '/':
				cout<<"Answer = "<<operand1/operand2;
				break;
			default:
				cout<<"invalid operator";
		}
		cout<<"\n\nTry Again?(y/n)?:";
		cin>>c;
	}
	while(c=='y');
	return 0;
}
