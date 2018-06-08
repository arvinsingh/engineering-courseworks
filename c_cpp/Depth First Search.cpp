#include<stdio.h>
#define max 15

int graph[max][max], reach[max], v;

void dfs(int i)
{
	int j;
	printf("\n%d",i+1);
	reach[i]=1;
	
	for(j=0;j<v;j++)
		if(!reach[j] && graph[i][j]==1)
			dfs(j);
}

int main()
{
	int i, j, count;


	printf("Number of vertices: ");
	scanf("%d",&v);		//get number of vertices
	for(i=0;i<v;i++)
		for(j=0;j<v;j++)
		{
			printf("Enter '1' if edge is present \
between node %d and %d otherwise '0': ",i+1,j+1);
			scanf("%d",&graph[i][j]);
		}
	printf("The order of DFS is: ");
	for(i=0;i<v;i++)
		reach[i]=0;
	dfs(0);
}
