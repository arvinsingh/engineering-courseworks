//Roots Of a Quadratic Equation
#include<stdio.h>
#include<math.h>
int main(void)
{
	int a,b,c,D,r,r1;

	printf("Enter the value of a,b,c : ");
	scanf("%d%d%d",&a,&b,&c);
	printf("\nThe equation is %dx^2 + %dx + %d",a,b,c);
	
	D=(b*b)-(4*a*c);
	
	if(D>0)
	{
		r=(-b+sqrt(D))/(2*a);
		r1=(-b-sqrt(D))/(2*a);
		printf("\nRoots are %d and %d",r,r1);
	}
	else if(D==0)
	{
		r=(-b)/(2*a);
		printf("\nBoth the roots are equal to %d",r);
	}
	else if(D<0)
	{
		r=(-b)/(2*a);
		r1=sqrt(D)/(2*a);
		printf("\nThe roots are imaginary and equal to: %d + i%d and %d - i%d",r,r1,r,r1);
	}
	
}
