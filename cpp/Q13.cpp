/*
Create some objects of the string class, and put them in a Deque-some at the head 
of the Deque and some at the tail. Display the contents of the Deque using the 
forEach ( ) function and a user written display function. Then search the 
Deque for a particular string, using the first That ( ) function and 
display any strings that match. Finally remove all the items from 
the Deque using the getLeft ( ) function and display each item. 
Notice the order in which the items are displayed: Using getLeft ( ), 
those inserted on the left (head) of the Deque are removed in “last in first out” 
order while those put on the right side are removed in “first in first out” order. 
The opposite would be true if getRight ( ) were used.
*/

#include <iostream>
#include <string.h>
using namespace std;
#include <deque>
//void actionfunc(Object&,void*);
//int testfunc(const Object& obj,void*);
int main()
{
	deque <int> deq;
	string s1 ="Amit";
	string s2 ="Deepak";
	string s3 ="Lakshay";
	string s4 ="Rishi";
	string s5 ="Sumit";
	deq.putLeft(s1);
	deq.putLeft(s2);
	deq.putLeft(s3);
	deq.putLeft(s4);
	deq.putLeft(s5);
	cout<<"\n\n Iterate through deque:";
	deq.forEach(actionfunc,0);
	String& temp=(String&)deq.firstThat(testfunc,0);
	if(temp!=NOOBJECT)
	{
		cout<<"\n\nMatch with:";
		temp.printOn(cout);
	}
	else
		cout<<"\n\nNo match";
	cout<<"\n\n Display and remove items from deque";
	while(!deq.isEmpty())
	{
		String& temp=(String&)deq.getLeft();
		cout<<endl;
		temp.printOn(cout);
	}
	cout<<"\n Contents of empty deque";
	deq.printOn(cout);
	getch();
	return 0;
}

void actionfunc(Object& obj,void*)
{
	cout<<endl;
	obj.printOn(cout);
}

int testfunc(const Object& obj, void*)
{
	String& temp=(String&)obj;
	String test("Deepak");
	if(temp.isEqual(test))
		return 1;
		else
		return 0;
}

