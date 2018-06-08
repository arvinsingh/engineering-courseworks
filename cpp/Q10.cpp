/*
Make a class Employee with a name and salary. 
Make a class Manager inherit from Employee. 
Add an instance variable, named department, of type string. 
Supply a method to to String that prints the manager’s name, 
department and salary. Make a class Executive inherits from Manager. 
Supply a method to String that prints the string “Executive” followed 
by the information stored in the Manager superclass object. 
Supply a test program that tests these classes and methods
*/

#include<iostream>
using namespace std;
#include<conio.h>
#include<stdio.h>
class employee
{
	protected:
	char nm[30];
	float sal;
};

class manager:public employee
{
	protected:
	char dep[10];
	public:
	void input();
	void disp();
};

void manager::input()
{
	cout<<"Enter name: ";
	gets(nm);
	cout<<"Enter salary: ";
	cin>>sal;
	cout<<"Enter department: ";
	gets(dep);
}

void manager::disp()
{
	cout<<"\nManager's name: "<<nm;
	cout<<"\nSalary: "<<sal;
	cout<<"\nDepartment: "<<dep<<endl;
}

class executive:public manager
{
	public:
	void disp(manager);
};

void executive::disp(manager m)
{
	cout<<"\n\nExecutive";
	m.disp();
}

int main()
{
	
	manager m1;
	m1.input();
	executive e;
	
	m1.disp();
	e.disp(m1);
	return 0;
}