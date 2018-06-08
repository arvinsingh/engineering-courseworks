//Printing Prime Number
#include<stdio.h>
int main()
{
	int n,c,i,d;

	printf("Enter limits between which you want to generate Prime numbers: ");
	scanf("%d",&n);
	while(i<n)
	{
		d=0;
		for(c=2;c<i;c++)
		{
			if(i%c==0)
				d++;
		}
		if ( d==0 )
			{
				printf("%d\n",&i);
			}
		i++;
	}
}
