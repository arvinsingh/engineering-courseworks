#include<iostream>
using namespace std;

struct Date
{
	int DD;
	int MM;
	int YY;
};

struct Patient
{
	char name[30];
	struct Date DOA;
	char disease[20];
	struct Date DOD;
};

class Hospital
{
	protected:
	struct Patient p[10];
	int i,n;
	public:
	void display();
	void getData();
};

void Hospital::getData()
{
	cout<<"Enter number of patients: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<endl<<"Name of the patient number "<<i+1<<" : ";
		cin>>p[i].name;
		cout<<endl<<"Day of admission: ";
		cin>>p[i].DOA.DD;
		cout<<"Month of admission: ";
		cin>>p[i].DOA.MM;
		cout<<"Year of admission: ";
		cin>>p[i].DOA.YY;
		cout<<"Disease: ";
		cin>>p[i].disease;
		cout<<endl<<"Day of discharge: ";
		cin>>p[i].DOD.DD;
		cout<<"Month of Discharge: ";
		cin>>p[i].DOD.MM;
		cout<<"Year of Discharge: ";
		cin>>p[i].DOD.YY;
	}
}

void Hospital::display ()
{
	for(i=0;i<n;i++)
	{
		cout<<endl<<"Name of the patient is: "<<p[i].name;
		cout<<endl<<"Date of admission is: "<<p[i].DOA.DD<<"/"<<p[i].DOA.MM<<"/"<<p[i].DOA.YY; cout<<endl<<"Disease: "<<p[i].disease; cout<<endl<<"Date of discharge: "<<p[i].DOD.DD<<"/"<<p[i].DOD.MM<<"/"<<p[i].DOD.YY; 
	}
}

class ageStore : public Hospital
{
	protected: int age[50];
	public:
	void getAge();
	void displays();
};

void ageStore::getAge()
{
	//cout<<endl<<"Enter no. of patients again same as value entered before"; cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"\n\nEnter age of patient number "<<i+1<<" : ";
		cin>>age[i];
	}
}

void ageStore::displays()
{
	int j=0;
	for(i=0;i<n;i++)
	{
		if(age[i]<=12)
		{
			j=j+1;
			cout<<"Patient(s) whose age is less than 12 : ";
			cout<<endl<<"Name: "<<p[i].name;
			cout<<endl<<"Date of admissiom: "<<p[i].DOA.DD<<"/"<<p[i].DOA.MM<<"/"<<p[i].DOA.YY; cout<<endl<<"Diseases of the patient: "<<p[i].disease; cout<<endl<<"Date of discharge: "<<p[i].DOD.DD<<"/"<<p[i].DOD.MM<<"/"<<p[i].DOD.YY; cout<<endl<<"Age of the patient is: "<<age[i];
		}
	}
	if (j==0)
	cout<<"There is No paedetric patient.";
	else
	cout<< endl<<"Out of "<<n<<" patients "<<j<<" are paedratic."; 
}

int main()
{
	ageStore a;
	a.getData();
	a.display();
	a.getAge();
	a.displays();
	return 0;
}
