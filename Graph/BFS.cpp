#include <iostream>
#include <queue>
using namespace std;

// function to print the BFS
void printBFS (int** edges, int n, int sv, bool* visited){
	queue<int> pendingVertices;
	pendingVertices.push(sv);
	visited[sv] = true;
	
	while (!pendingVertices.empty())
	{
		int currVertex = pendingVertices.front();
		pendingVertices.pop();
		cout << currVertex << " ";
		for(int i=0; i<n; i++)
		{
			if( i==currVertex )
			{
				continue;
			}
			if( edges[currVertex][i]==1 and !visited[i] )
			{
				pendingVertices.push(i);
				visited[i] = true;
			}
		}
	}
}

// function to check node is visited or not and then call function on unvisited node
void BFS (int** edges,int n)
{
	bool* visited = new bool[n];
	for(int i=0; i<n; i++)
	{
		visited[i] = false;
	}
	
	for(int i=0; i<n; i++)
	{
		if( !visited[i] )
		{
			printBFS (edges,n,i,visited);
		}
	}
	delete [] visited;	
}


// driver method
int main ()
{
	// taking number of nodes and edges from the elements
	int n,e;
	cout << "Enter number of nodes and edges separated by a space : ";
	cin >> n >> e;
	
	// creating adjacency matrix
	int** edges = new int*[n];
	for(int i=0; i<n; i++)
	{
		edges[i] = new int[n];
		for(int j=0; j<n; j++)
		{
			edges[i][j] = 0;
		}
	}
	
	// Input edges less than n then only it will print.
	// taking the edges input between two nodes
	for (int i=0; i<e; i++)
	{
		int frst,scnd;
		cout<<"Enter edges between first and second node :";
		cin>>frst>>scnd;
		edges[frst][scnd] = 1;
		edges[scnd][frst] = 1;
	}
	cout << endl ;
	
	// calling the DFS function
	cout << "DFS : ";
	BFS (edges,n);
	cout << endl;
	
	
	// destructing the adjacency matrix
	for(int i=0; i<n; i++)
	{
		delete [] edges[i];
	}
	
	delete [] edges;
}
