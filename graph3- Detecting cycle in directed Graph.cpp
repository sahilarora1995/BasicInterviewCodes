/*
Problem Statement:
--------------------
Given an directed graph, how to check if there is a cycle in the graph?

Core Logic:
-------------------
For every visited vertex ‘v’, if there is an adjacent ‘u’ such that u is
 already visited and u is not parent of v, then there is a cycle in graph.
If we don’t find such an adjacent for any vertex, we say that there is no 
cycle. The assumption of this approach is that there are no parallel edges
between any two vertices.

Time complexity:
-------------------
O(V+E)

Space Complexity:
-------------------
O(V)

References:
-------------------
https://www.geeksforgeeks.org/detect-cycle-directed-graph/
http://www.cplusplus.com/
https://g
#include<bits/stdc++.h>
*/

#include<bits/stdc++.h>

using namespace std;

void addEdge(vector<int>adj[],int u,int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}


bool iscycle(vector<int>adj[],int v,vector<bool> &visited,vector<bool> &recursion,int parent)
{
	visited[v]=true;
	recursion[v]=true;
	for(int u: adj[v])
	{
		if(!visited[u])
		{
			if(iscycle(adj,u,visited,recursion,v))
			return true;
		}
		else if(recursion[u])
		return true;
	}
	recursion[v]=false;
	return false;
}

int main()
{
	int n=5;
	vector<int> adj[n+1];
	vector<bool>visited(n+1);
	vector<bool>recursion(n+1);
	
	
	addEdge(adj,1,2);
	addEdge(adj,2,3);
    addEdge(adj,3,1);
	addEdge(adj,1,4);
	
	
	for(int i=1;i<n;i++)
	{
	visited[i]=false;
	recursion[i]=false;
    }   
	
	if(iscycle(adj,1,visited,recursion,-1))
		cout<<"cycle";
		
		else
		cout<<"no cycle";
	
    
return 0;
}
