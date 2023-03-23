#include<iostream>
#include<climits>
using namespace std;

// this method returns a minimum distance for the
// vertex which is not included in Temporary.
int minimumDist(int dist[], bool Temporary[])
{
	int min=INT_MAX;
	int index;

	for(int i=0;i<6;i++)
	{
		if(Temporary[i]==false && dist[i]<=min)
		{
			min=dist[i];
			index=i;
		}
	}
	return index;
}

void Dijkstra(int graph[6][6],int src) // adjacency matrix used is 6x6
{
	int dist[6]; // integer array to calculate minimum distance for each node.
	bool Temporary[6];// boolean array to mark visted/unvisted for each node.

	// set the nodes with infinity distance
	// except for the initial node and mark
	// them unvisited.
	for(int i = 0; i<6; i++)
	{
		dist[i] = INT_MAX;
		Temporary[i] = false;
	}

	dist[src] = 0;   // Source vertex distance is set to zero.

	for(int i = 0; i<6; i++)
	{
		int m=minimumDist(dist,Temporary); // vertex not yet included.
		Temporary[m]=true;// m with minimum distance included in Temporary.
		for(int i = 0; i<6; i++)
		{
			// Updating the minimum distance for the particular node.
			if(!Temporary[i] && graph[m][i] && dist[m]!=INT_MAX && dist[m]+graph[m][i]<dist[i])
				dist[i]=dist[m]+graph[m][i];
		}
	}
	cout<<"Vertex\t\tDistance from source"<<endl;
	for(int i = 0; i<6; i++)
	{ //Printing
		char str=65+i; // Ascii values for pritning A,B,C..
		cout<<str<<"\t\t\t"<<dist[i]<<endl;
	}
}

int main()
{
	int graph[6][6]={
		{0, 10, 20, 0, 0, 0},
		{10, 0, 0, 50, 10, 0},
		{20, 0, 0, 20, 33, 0},
		{0, 50, 20, 0, 20, 2},
		{0, 10, 33, 20, 0, 1},
		{0, 0, 0, 2, 1, 0}};
	Dijkstra(graph,0);
	return 0;
}
