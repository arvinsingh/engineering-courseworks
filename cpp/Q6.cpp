#include<iostream>
using namespace std;

class rational
{
	double num,denum;
	public:
	rational();
	rational(double,double);
	rational operator+(rational);
	void reduce();
	friend void operator>>(istream&,rational&);
	friend void operator<<(ostream&,rational&);
};

rational::rational()
{
	num=1;
	denum=1;
}

rational::rational(double a,double b)
{
	num=a;
	denum=b;
}

void rational::reduce()
{
	long x,y;
	x=num;
	y=denum;
	int z;
	if (num>denum)
	{
		do
		{
			z=x%y;
			x=y;
			y=z;
		}while (z!=0);
	num/=x;
	denum/=x;
	}
	else
	{
		do
		{
			z=y%x;
			y=x;
			x=z;
		}while (z!=0);
	num/=y;
	denum/=y;
	}
}

rational rational::operator+(rational r)
{
rational r1;
r1.denum=denum*r.denum;
r1.num=(num*r.denum)+(r.num*denum);
return r1;
}

void operator>>(istream& in,rational& r)
{
	cout<<"\nEnter numerator and denominator for the rational number: ";
	in>>r.num>>r.denum;
}

void operator<<(ostream& out,rational& r)
{
	out<<"\nThe rational number is: "<<r.num<<"/"<<r.denum;
}

int main()
{

	rational r1,r2(10,20),r3;
	cout<<r2;
	r2.reduce();
	cout<<r2;
	cin>>r1;
	r3=r1+r2;
	cout<<r3;
	r3.reduce();
	cout<<r3;
	return 0;
}
