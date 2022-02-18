#include <iostream>
using namespace std;

// function to find the vertex with minimum distance
int findMinVertex (int* distance, bool* visited, int n)
{
	int min = -1;
	
	// iterate till n and upadte the minimum value
	for (int i=0; i<n; i++)
	{
		if (!visited[i] && ( min == -1 || distance[i] < distance[min]))
		{
			min = i;
		}
	}
	// returning the vertex with minimum distance
	return min;
}

// function to print the shortest path between source to node to every node
void dijikstra (int** edges, int n)
{
	// declaring dynamic array
	int* distance = new int[n];
	bool* visited = new bool[n];
	
	// initializing all visited nodes as false and distance of all nodes to +infinity
	for (int i=0; i<n; i++)
	{
		visited[i] = false;
		distance[i] = INT_MAX;
	}
	
	// initializing the distance of first node as 0
	distance [0] = 0;
	
	// loop for finding the vertex with minimum distance 
	for (int i=0; i<n-1; i++)
	{
		// calling function to find the minimum distance
		int minVertex = findMinVertex (distance, visited, n);
		// markign minimum distance vertex as true 
		visited [minVertex] = true;
		
		// loop for finding the shortest path
		for (int j=0; j<n; j++)
		{
			if (edges[minVertex][j] != 0 && !visited[j] )
			{
				int dist = distance[minVertex] + edges[minVertex][j];
				if (dist < distance[j])
				{
					distance[j] = dist;
				}
			}
		}
	}
	
	// pinting the vertex and their distance from the source vertex
	cout << "The shortest path from the source vertex to every node is : " << endl;
	for (int i=0; i<n; i++)
	{
		cout << i << " " << distance[i] << endl;
	}
	
	// destructuring the dynamic arrays
	delete [] distance;
	delete [] visited;
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
	dijikstra (edges, n);
	
	// destructuring dynamic array
	for (int i=0; i<n; i++)
	{
		delete [] edges[i];
	}
	delete [] edges;
	return 0;
}
