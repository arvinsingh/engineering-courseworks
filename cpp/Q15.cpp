#include<iostream>

using namespace std;

class shape
{
	protected:
	double x;
	double y;
	public:
		
	shape()
	{
		x=0.0;
		y=0.0;
	}

	void get_data()
	{
		cout<<"Enter x:";
		cin>>x;
		cout<<"Enter y:";
		cin>>y;
	}
	virtual void display_area()=0;
};

class triangle:public shape
{
	public:

	void display_area()
	{
		cout<<"\nArea of triangle: "<<(x*y)/2;
	}
};


class rectangle:public shape
{

public:
	void display_area()
	{
		cout<<"\nArea of rectangle: "<<x*y;
	}
};

int main()
{
	int choice;
	triangle t;
	rectangle r;
	do
	{
	cout<<"\n\nFor area of triangle: 1\n";
	cout<<"For area of rectangle: 2\n";
	cout<<"Exit: 3\n";
	cout<<"Input: ";
	cin>>choice;
		switch(choice)
		{
			case 1:
			t.get_data();
			t.display_area();
			break;

			case 2:
			r.get_data();
			r.display_area();
			break;
			
			case 3:
			break;
			
			default:
			cout<<"\nInvalid choice\n";
		}
	}
	while(choice != 3);
	return 0;
}
