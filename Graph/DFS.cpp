#include <iostream>
using namespace std;

// function to print the DFS
void printDFS (int** edges, int n, int sv, bool* visited){
	cout << sv << " ";
	visited[sv] = true;
	for (int i=0; i<n; i++){
		if (i==sv)
		{
			continue;
		}
		if (edges[sv][i]==1)
		{
			if (visited[i])
			{
				continue;
			}
			printDFS (edges, n, i, visited);
		}
	}
}

// function to check node is visited or not and then call function on unvisited node
void DFS (int** edges,int n)
{
	bool* visited = new bool[n];
	for(int i=0;i<n;i++)
	{
		visited[i] = false;
	}
	
	for(int i=0;i<n;i++)
	{
		if(!visited[i])
		{
			printDFS (edges,n,i,visited);
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
	DFS (edges,n);
	cout << endl;
	
	
	// destructing the adjacency matrix
	for(int i=0; i<n; i++)
	{
		delete [] edges[i];
	}
	
	delete [] edges;
}
