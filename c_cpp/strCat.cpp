#include<stdio.h>
#include<string.h>
int main(void) 
{
	 char x[100],y[100];
	 printf("\nEnter first string: "); 
	 gets(x);
	 printf("\nEnter second string: "); 
	 gets(y);
	 strcat(x,y);
	 printf("\nConcatenated String is %s\n",x) ;
} 
