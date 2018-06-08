#include<iostream>
using namespace std;

/* Uncomment to use the class instead of the structure:
class point
{
	public:
	int x,y;
};*/

struct point
{
	int x,y;
};

int main()
{
	point p1,p2,p3;
	cout<<"Enter coordinates for P1: ";
	cin>>p1.x>>p1.y;
	cout<<"Enter coordinates for P2: ";
	cin>>p2.x>>p2.y;
	p3.x=p1.x+p2.x;
	p3.y=p1.y+p2.y;
	cout<<"Coordinates of P1 + P2 are: "<<p3.x<<" "<<p3.y;
	return 0;
}
