#include<stdio.h>
#include<stdlib.h>
#define max 15

int front=-1,rear=-1, queue[max];
int graph[max][max];
int state[max];


void enqueue(int n)
{
	if (rear == max - 1)
	{
		printf("Queue is FULL\n");
	}

	else
	{
		if(front == -1) 
			front = 0;
		rear = rear+1;
		queue[rear] = n ;
	}
}

int dequeue()
{
	int i, a;
	if (front == -1 || front > rear)
	{
		printf("Queue is Empty\n");
		exit(0);
	}
	else
	{
		a = queue[front];
		front = front+1;
		return a;
	}
}

int isEmpty_queue()
{
	if(front == -1 || front > rear)
		return 1;
	else
		return 0;
}

void BFS(int v, int n)
{
	int i;
	enqueue(v);
	state[v] = 2;
	while(!isEmpty_queue())
	{
		v = dequeue();
		printf("%d \t",v + 1);
		state[v] = 3;
		for(i=0; i<n; i++)
		{
			if(graph[v][i] == 1 && state[i] == 1) 
			{
				enqueue(i);
				state[i] = 2;
			}
		}
	}
	printf("\n");
}

void BF_Traversal(int n)
{
	int v;
	
	for(v=0; v<n; v++) 
		state[v] = 1;
	printf("\n\nEnter Start Vertex for BFS: ");
	scanf("%d", &v);
	printf("\n The order of BFS is : \t");
	BFS(v - 1,n);
}


int main()
{
	int v, i, j;


	printf("Number of vertices: ");
	scanf("%d",&v);		//get number of vertices
	for(i=0;i<v;i++)
		for(j=0;j<v;j++)
		{
			printf("Enter '1' if edge is present \
between node %d and %d otherwise '0': ",i+1,j+1);
			scanf("%d",&graph[i][j]);	//get wait for each vertex
		}
	BF_Traversal(v);
}
