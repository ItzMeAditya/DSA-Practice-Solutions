#include <iostream>
using namespace std;

// function to find the vertex with minimum weight
int findMinVertex (int* weight, bool* visited, int n)
{
	int min = -1;
	
	for (int i=0; i<n; i++)
	{
		if (!visited[i] && ( min == -1 || weight[i] < weight[min]))
		{
			min = i;
		}
	}
	return min;
}

// function to print the MST
void prims (int** edges, int n)
{
	// declaring dynamic array
	int* parent = new int[n];
	int* weight = new int[n];
	bool* visited = new bool[n];
	
	// initializing all visited nodes as false and weights of all nodes to +infinity
	for (int i=0; i<n; i++)
	{
		visited[i] = false;
		weight[i] = INT_MAX;
	}
	
	// initializing the parent of first node as -1 and weight of first node as 0
	parent[0] = -1;
	weight[0] = 0;
	
	// loop for finding the MST
	for (int i=0; i<n-1; i++)
	{
		// finding minimum vertex
		int minVertex = findMinVertex (weight, visited, n);
		visited [minVertex] = true;
		
		// finding neighbour vertex with minimum weight
		for (int j=0; j<n; j++)
		{
			if (edges[minVertex][j] != 0 && !visited[j])
			{
				if (edges[minVertex][j] < weight[j])
				{
					weight[j] = edges[minVertex][j];
					parent[j] = minVertex;
				}
			}
		}
	}
	
	cout << "The MST of the given graph will be : ";
	for (int i=1; i<n; i++)
	{
		if (parent[i] < i)
		{
			cout << parent[i] << " " << i << " " << weight[i] <<endl;
		}else{
			cout << i << " " << parent[i] << " " << weight[i] <<endl;
		}
	}
}

// driver method
int  main ()
{
	// taking number of nodes and edges input from the user
	int n,e;
	cout << "Enter the number of nodes and edges : ";
	cin >> n >> e;
	
	// initializing the adjacency matrix
	int** edges = new int*[n];
	for (int i=0; i<n; i++)
	{
		edges[i] = new int[n];
		for (int j=0; j<n; j++)
		{
			edges[i][j] = 0;
		}
	}
	
	// taking input in the adjacency matrix
	cout << "Eneter the source and destination node and their respective weights : ";
	for (int i=0; i<e; i++)
	{
		int s, d, w;
		cin >> s >> d >> w;
		edges [s][d] = w;
		edges [d][s] = w;
	}
	
	// calling the prims function
	cout<<endl;
	prims (edges, n);
	
	// destructuring dynamic array
	for (int i=0; i<n; i++)
	{
		delete [] edges[i];
	}
	delete [] edges;
	return 0;
}
