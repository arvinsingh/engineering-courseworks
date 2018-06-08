#include<iostream>
using namespace std;


class father
{
	protected:
	int age;
	public:
	father(int x)
	{
		age=x;
	}
	void  iam()
	{
		cout<<"I AM THE FATHER, my age is : "<<age<<endl;
	}
};

class son:public father
{
	public:
	son(int x,int y):father(x)
	{
		if (x > y + 20)
		age=y;
		else{	
		age = 0;
		cout<<"Impossible"<<endl;
		}
	}

	void iam()
	{	if (age==0)
		cout<<"Wrong age was given for son"<<endl;
		else
		cout<<"I AM THE SON, my age is : "<<age<<endl;
	}
};

class daughter:public father
{
	public:
	daughter(int x,int y):father(x)
	{
		if (x > y + 20)
		age=y;
		else{
		age = 0;
		cout<<"Impossible"<<endl;
	 	}
	}

	void iam()
	{	if (age==0)
		cout<<"Wrong age was given for Daughter"<<endl;
		else
		cout<<"I AM THE DAUGHTER, my age is : "<<age<<endl;
	}
};

int main()
{
	father f(30);
	f.iam();
	son s(30,4);
	s.iam();
	daughter d(30,3);
	d.iam();
	father *f1;
	f1=&s;
	f1->iam();
	f1=&d;
	f1->iam();
	return 0;
}
