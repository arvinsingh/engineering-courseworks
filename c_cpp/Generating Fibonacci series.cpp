//Fibonacci Series
#include<stdio.h>
int main(void)
{
	int sum=0,f=0,z,x=1,i=1;

	printf("Enter a limit: ");
	scanf("%d",&z);
	while(i<=z)
	{
		sum=f+x;
		printf("%d \t",sum);
		x=f;
		f=sum;
		i++;
	}
}
