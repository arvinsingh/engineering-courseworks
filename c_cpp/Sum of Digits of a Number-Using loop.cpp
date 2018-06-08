//Sum of Digits of a number- Using Loop
#include<stdio.h>
int main(void)
{
	int x,n,s;

	printf("Enter a Number: ");
	scanf("%d",&n);
	while(n>0)
	{
		x=n%10;
		s=s+x;
		n=n/10;
	}
	printf("Sum of Digits of Entered Number is %d",s);
	
}
