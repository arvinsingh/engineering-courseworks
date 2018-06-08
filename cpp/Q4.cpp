#include <iostream>
using namespace std;

struct phone
{
	int areacode;
	int exchange;
	int number;
};

int main()
{
	phone a,b;
	a.areacode= 212;
	a.exchange=767;
	a.number=8900;
	cout<<"Enter the area code, the exchange and the number : ";
	cin>>b.areacode>>b.exchange>>b.number;
	cout<<"My number is :"<<"("<<a.areacode<<")"<<"-"<<a.exchange<<"-"<<a.number<<endl<<"Your number is: "<<"("<<b.areacode<<")"<<"-"<<b.exchange<<"-"<<b.number;
	return(0);
}
