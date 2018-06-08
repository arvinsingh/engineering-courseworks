#include<iostream>
using namespace std;

class DB;

class DM
{
	int metres;
	float centimetres;
	
	public:
	DM()
	{
	metres=0;centimetres=0.00;
	}
	
	DM(int m,float cm)
	{
	metres=m;
	centimetres=cm;
	}
	
	int get_m()
	{
	return metres;
	}
	
	float get_cm()
	{
	return centimetres;
	}
	
	void getdata()
	{
	cout<<"Enter metres:";
	cin>>metres;
	cout<<"Enter centimetres:";
	cin>>centimetres;
	}
	
	void display()
	{
	cout<<metres<<"m-"<<centimetres<<"cm";
	}
	
	friend DM add(DM,DB);
};

class DB
{
	int feet;
	float inches;

	public:
	DB()
	{
		feet=0;
		inches=0.00;
	}
	
	DB(int f,float i)
	{
		feet=f;
		inches=i;
	}
	
	DB(DM dm)
	{
		int m;
		float cm,t_cm,t_in;
		m=dm.get_m();
		cm=dm.get_cm();
		t_cm=m*100+cm;
		t_in=t_cm/2.54;
		feet=int(t_in)/12;
		inches=t_in-feet*12;
	}
	 operator DM()
	{
		float in=feet*12+inches;
		float cm=in*2.54;
		int mtr=int(cm)/100;
		float cmtr=cm-mtr*100;
		return DM(mtr,cmtr);
	}
	void getdata()
	{
		cout<<"Enter feet:";
		cin>>feet;
		cout<<"Enter inches:";
		cin>>inches;
	}
	void display()
	{
		cout<<feet<<"\'-"<<inches<<"\"";
	}
	
	friend DM add(DM,DB);
	};

	DM add(DM dm,DB db)
	{
		DM a=db;
		int m=dm.metres+a.metres;
		float cm=dm.centimetres+a.centimetres;
		if(int(cm)>=100)
		{
			cm-=100.00;
			m++;
		}
		return DM(m,cm);
	}

	int main()
	{
		DB db,db1;
		DM dm,dm1;
		cout<<"Enter distance d1 (in metres & centimetres):\n";
		dm.getdata();
		cout<<"Enter distance d2 (in feet & inches):\n";
		db.getdata();
		dm1=add(dm,db);
		db1=add(dm,db);
		dm.display();cout<<" + ";db.display();cout<<" = ";dm1.display();
		cout<<" = ";
		db1.display();
		
		return 0;
	}
