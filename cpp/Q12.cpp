#include<iostream>
#include<string.h>

using namespace std;

void reversit(char passedString[]){
 
 char temp; 
 int k=strlen(passedString);

 for(int i=0; i<(k/2); i++){
	 temp=passedString[i]; 
	 passedString[i]=passedString[k-i-1]; 
	 passedString[k-i-1]=temp;
 }
}

int main()
{
 
 	char string[30];
	cout<<"Enter a string: "; 
	cin.getline(string,29);
	reversit(string); 
	cout<<"Reversed string: "<<string;
 return 0;
}
