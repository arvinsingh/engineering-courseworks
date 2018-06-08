#include<iostream>
#include<fstream>
using namespace std;

class student
{
    int   rollno, marks;
    char name[20];
    public:
        
    void getdata()
    {
        cout<<"\n Roll Number: ";                           
        cin>>rollno;
        char ch = cin.get();
        cout<<"Name of the student: ";
        cin.getline(name,20);
        cout<<"Marks obtained : ";
        cin>>marks;
    }
};

int main()
{
	int i = 3;
    student s[i];
    fstream fio;
    fio.open("Student.txt",ios::binary|ios::out);
    for(int c=0;c<i;c++)
    {      
    	s[c].getdata();
        fio.write((char *)&s[c],sizeof(s[c]));
    }
    fio.close();
    return 0;
}
