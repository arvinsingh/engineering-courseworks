//Transpose of a Matrix

#include<stdio.h>
int main()
{
	int i,j,r,c;
    int a[10][10], t[10][10];	

    printf("Enter number of rows and columns in the matrix: ");
    scanf("%d%d",&r,&c);
    printf("Enter values for matrix A: \n");
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d\n",&a[i][j]);	

	printf("Therefore, transpost of this matix is: ");
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			t[j][i]	= a[i][j];		
			
	for(i=0;i<c;i++)
	{	
		for(j=0;j<r;j++)
			printf("%d\t",&t[i][j]);		
		printf("\n");
	}
	return 0;
}
