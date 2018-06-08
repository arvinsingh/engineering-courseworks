//Calculator Program
#include<stdio.h>
int main(void)
{
	int x,y,z,o;

	printf("Instructions: \n '1' for Sum \n '2' for Difference \n '3' for Product \n '4' for Quoitent \n '5' for Remainder\n\n");
	printf("Enter two numbers: ");
	scanf("%d%d",&x,&y);
	printf("Calculation to perform is: ");
	scanf("%d",&z);
	switch(z)
	{
		case 1:
			o=x+y;
			printf("\nSum of %d and %d is %d",x,y,o);
		break;
		case 2:
			o=x-y;
			printf("\nDifference between %d and %d is %d",x,y,o);
		break;
		case 3:
			o=x*y;
			printf("\nProduct of %d and %d is %d",x,y,o);
		break;
		case 4:
			o=x/y;
			printf("\nQuoitent of %d divided by %d is %d",x,y,o);
		break;
		case 5:
			o=x%y;
			printf("\nRemainder of %d divided by %d is %d",x,y,o);
		break;
		default:
			printf("\nGiven operation is not supported!");
	}
}


