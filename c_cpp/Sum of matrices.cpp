//Addition of Matrices
#include<stdio.h>
int main(void)
{
	int i,j;
	int x[3][3],y[3][3],sum[3][3];	

	printf("Enter values for matrix A: \n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d\n",&x[i][j]);		
		}
	}
	
	printf("\nEnter values for matrix: \n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&y[i][j]);		
		}
	}
	
	printf("\nSum of the two matrices is: \n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum[i][j]=x[i][j]+y[i][j];
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
