#include <iostream>
#include <algorithm>
using namespace std;

class Edge {
	public :
		int source;
		int destination;
		int weight;
};

bool compare(Edge e1,Edge e2)
{
	return e1.weight < e2.weight;
}

int findParent (int v,int* parent)
{
	if (parent[v] == v){
		return v;		
	}
	return findParent (parent[v],parent);
}

void kruskals (Edge *input,int n,int E)
{
	sort(input, input+E, compare);
	
	Edge *output = new Edge[n-1];
	
	int* parent = new int[n];
	
	for (int i=0; i<n; i++)
	{
		parent[i] = i;
	}
	
	int count = 0,i=0;
	
	while (count != n-1)
	{
		Edge currentEdge = input[i];
		
		int sourceParent = findParent (currentEdge.source, parent);
		int destinationParent = findParent (currentEdge.destination,parent);
		
		if (sourceParent != destinationParent)
		{
			output[count] = currentEdge;
			count++;
			parent[sourceParent] = destinationParent;
		}
		i++;
	}
	
	for (int i=0;i<n-1;i++)
	{
		if (output[i].source < output[i].destination){
			cout<<"Source : "<<output[i].source<<" Destination : "<<output[i].destination<<" Weight : "<<output[i].weight<<endl;			
		}
		else {
			cout<<"Source : "<<output[i].destination<<" Destination : "<<output[i].source<<" Weight : "<<output[i].weight<<endl;
		}
	}
}

int main ()
{
	int n,E;
	cout<<"Enter the number of nodes & edges :";
	cin >> n >> E;
	
	Edge* input = new Edge[E];
	cout<<"Enter the edges between two nodes and their weight :";
	for (int i=0; i<E; i++)
	{
		int s,d,w;
		cin >> s >> d >> w;
		input[i].source = s;
		input[i].destination = d;
		input[i].weight = w;
	}
	
	cout<<"----The Minimum Spanning Tree will be----"<<endl;
	kruskals(input, n, E);
	return 0;
}
