#include<stdio.h>
#define max 15

int main()
{
	int v, i, j;
	int graph[max][max];	//graph declaration
	
	printf("Number of vertices: ");
	scanf("%d",&v);		//get number of vertices
	for(i=0;i<v;i++)
		for(j=0;j<v;j++)
		{
			printf("Enter the weight of the edge \
between node %d and %d (0:if no edge): ",i+1,j+1);
			scanf("%d",&graph[i][j]);	//get wait for each vertex
		}
	printf("The adjacency matrix of the graph is: \n");
	for(i=0;i<v;i++)
		printf("\t%d",i+1);
	for(i=0;i<v;i++)
	{
		printf("\n%d",i+1);
		for(j=0;j<v;j++)
		{
			printf("\t%d",graph[i][j]);	//Print matrix orderly
		};
	}

	
	printf("\n\nEnd of Program.. Press any key to continue!");

}
