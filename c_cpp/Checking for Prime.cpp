
#include<stdio.h>
int main(void)
{
	int num,c=0,i;
	printf("Enter the NUmber to be checked for Prime: ");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			c++;
		}
	}
	if(c==0)
	{
		printf("\n\n Number is Prime.");
	}
	else
	{
		printf("\n\n Number is not a Prime.");
	}
}
