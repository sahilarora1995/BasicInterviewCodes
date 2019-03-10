/*
Problem Statement:
--------------------
Check whether a given graph is Bipartite or not

Core Logic:
--------------------
Algorithm to check if a graph is Bipartite:
One approach is to check whether the graph is 2-colorable or not using backtracking 
algorithm m coloring problem.
Following is a simple algorithm to find out whether a given graph is Birpartite or
not using Breadth First Search (BFS).
1. Assign RED color to the source vertex (putting into set U).
2. Color all the neighbors with BLUE color (putting into set V).
3. Color all neighbor’s neighbor with RED color (putting into set U).
4. This way, assign color to all vertices such that it satisfies all the constraints
of m way coloring problem where m = 2.
5. While assigning colors, if we find a neighbor which is colored with same color as
current vertex, then the graph cannot be colored with 2 vertices (or graph is not Bipartite)

Time complexity:
-------------------
O(V+E)

Space Complexity:
-------------------
O(V)

References:
-------------------
https://www.geeksforgeeks.org/bipartite-graph/
http://www.cplusplus.com/
https://github.com/mission-peace/interview

*/

#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int>adj[],int u,int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}
bool checkbipartite(vector<int>adj[],int v,vector<bool> &visited,vector<int>&color)
{
	for(int u:adj[v])
	{
		if(visited[u]==false)
		{
			visited[u]=true;
			color[u]=!color[v];
		
		if(!checkbipartite(adj,u,visited,color))
		return false;
	    }
	    else if(color[u]==color[v])
	    return false;
	}
	return true;
}
int main()
{
	int n=5;
	vector<int> adj[n+1];
	vector<int>color(n+1);
	vector<bool>visited(n+1);
	
	addEdge(adj,1,2);
	addEdge(adj,2,3);
	addEdge(adj,3,4);
	addEdge(adj,4,1);
	
	if(checkbipartite(adj,1,visited,color))
	cout<<"graph is a bipartite graph";
	
	else
	cout<<"graph is not a bipatrite graph";
	return 0;
}
