#include<stdio.h>
#define max 15
#define INT_MAX_1 1000

int minDistance(int dist[], int Set[])
{
	int min = INT_MAX_1, min_index, v;

	for (v = 0; v < max; v++)
		if (Set[v] == 0 && dist[v] <= min)
			min = dist[v], min_index = v;
	
	return min_index;
}

int display(int dist[], int n)
{
	int i;
	printf("Vertex Distance from Source");
	for (i = 0; i < max; i++)
		printf("%d \t %d\n", i, dist[i]);
}


void dijkstra(int graph[max][max], int src)
{
	int dist[max], count, v, i;
	int Set[max];

	for (i = 0; i < max; i++)
		dist[i] = INT_MAX_1, Set[i] = 0;
		
	dist[src] = 0;

	for (count = 0; count < max-1; count++)
	{
		int u = minDistance(dist, Set);
		Set[u] = 1;
		for (v = 0; v < max; v++)
			if (!Set[v] && graph[u][v] && dist[u] != INT_MAX_1 && dist[u]+graph[u][v] < dist[v])
				dist[v] = dist[u] + graph[u][v];
	}

	display(dist, max);
}

int main()
{
	int v, i, j, n;
	int graph[max][max];


	printf("Number of vertices: ");
	scanf("%d",&v);		//get number of vertices
	for(i=0;i<v;i++)
		for(j=0;j<v;j++)
		{
			printf("Enter '1' if edge is present \
between node %d and %d otherwise '0': ",i+1,j+1);
			scanf("%d",&graph[i][j]);	//get wait for each vertex
		}
	printf("Enter source from where to apply Dijkstra: ");
	scanf("%d", &n);
	dijkstra(graph, n);
}
