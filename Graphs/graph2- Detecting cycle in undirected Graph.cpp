#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int>adj[],int u,int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}


bool iscycle(vector<int>adj[],int v,vector<bool> &visited,int parent)
{
	visited[v]=true;
	for(int u: adj[v])
	{
		if(!visited[u])
		{
			if(iscycle(adj,u,visited,v))
			return true;
		}
		else if(u!=parent)
		return true;
	}
	return false;
}

int main()
{
	int n=5;
	vector<int> adj[n+1];
	vector<bool>visited(n+1);
	
	addEdge(adj,1,2);
	addEdge(adj,2,3);
	addEdge(adj,3,4);
	
	
	for(int i=0;i<n;i++)
	visited[i]=false;
	
	for(int i=1;i<n;i++)
	{
	if(!visited[i])
	{
		if(iscycle(adj,i,visited,-1))
		cout<<"cycle";
		
		else
		cout<<"no cycle";
	}
	
    }
return 0;
}
