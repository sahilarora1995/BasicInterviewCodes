/*
Problem Statement:
----------------------
Given a cost matrix cost[][] and a position (m, n) in cost[][], write a function that 
returns cost of minimum cost path to reach (m, n) from (0, 0). Each cell of the matrix 
represents a cost to traverse through that cell. Total cost of a path to reach (m, n) is 
sum of all the costs on that path (including both source and destination). You can only traverse 
down, right and diagonally lower cells from a given cell, i.e., from a given cell (i, j), 
cells (i+1, j), (i, j+1) and (i+1, j+1) can be traversed. You may assume that all costs are positive integers.

Core Logic:
----------------------
1) Optimal Substructure
The path to reach (m, n) must be through one of the 3 cells: (m-1, n-1) or (m-1, n) or
(m, n-1). So minimum cost to reach (m, n) can be written as “minimum of the 3 cells plus cost[m][n]”.

minCost(m, n) = min (minCost(m-1, n-1), minCost(m-1, n), minCost(m, n-1)) + cost[m][n]

2) Overlapping Subproblems
Following is simple recursive implementation of the MCP (Minimum Cost Path) problem. 
The implementation simply follows the recursive structure mentioned above.

Time Complexity:
----------------------
O(rc).

References:
----------------------
https://www.geeksforgeeks.org/min-cost-path-dp-6/
http://www.cplusplus.com/
*/
#include<iostream>
#include<algorithm>
#include<cstring>
#define ll int
#define debug(x) cout << x <<" ";
#define size(a) sizeof(a)/sizeof(a[0])

using namespace std;
int min(int x, int y, int z) 
{ 
   if (x < y) 
      return (x < z)? x : z; 
   else
      return (y < z)? y : z; 
} 

void minCostPath(ll cost[3][3],ll m,ll n)
{
     ll tc[3][3];   
     tc[0][0] = cost[0][0]; 
     for (ll i = 1; i <= m; i++) 
        tc[i][0] = tc[i-1][0] + cost[i][0]; 
  
     for (ll j = 1; j <= n; j++) 
        tc[0][j] = tc[0][j-1] + cost[0][j]; 
  
     for (ll i = 1; i <= m; i++) 
        for (ll j = 1; j <= n; j++) 
            tc[i][j] = min(tc[i-1][j-1],  
                           tc[i-1][j],  
                           tc[i][j-1]) + cost[i][j]; 
     debug(tc[m][n]); 
}
int main()
{
	ios::sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	ll cost[3][3]={{1,2,3},{4,8,2},{1,5,3}};
	minCostPath(cost,2,2);
	return 0;
}
