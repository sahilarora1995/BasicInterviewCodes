/*
Author: Sahil Arora

Problem Statement:
-------------------
Given a two-dimensional matrix, in how way can someone traverse it from top-left to bottom-right?
Condition- At any particular cell the possible moves are either down or right, no other steps possible.

Stop when the end is reached.
 
Core Logic:
------------------
If we look closely, we will find that the number of ways a cell can be reached is = 
Number of ways it can reach the cell above it + number of ways it can reach the cell which 
is left of it.
So, start filling the 2D array according to it and return the last cell after completely filling the array.

Time Complexity:
-----------------
0(n)

References:
-----------------
https://www.geeksforgeeks.org/count-the-number-of-ways-to-traverse-a-matrix/
http://www.cplusplus.com/
*/
#include<iostream>
#include<algorithm>
#include<cstring>
#include<bits/stdc++.h>
#define ll int
#define debug(x) cout << x<< " ";
#define pii pair<int,int>
#define F first
#define S second
#define WL(i,s) while(i<s.length())
#define MAX INT_MAX
#define FL(i) for(i=0;i<n;i++)
#define MID(l,h) (l+(h-l))/2
#define NODE struct node*
#define START signed main()
#define STACK stack<node*> 
#define TR temp->right
#define TL temp->left
#define SIZE(a) sizeof(a)/sizeof(a[0])
#define CH char
#define IO1  ios::sync_with_stdio(0);
#define IO2    cin.tie(0);
#define IO3 	cout.tie(0);
using namespace std;

ll countWays(ll m,ll n)
{
	ll count[m+1][n+1];
	for(ll i=0;i<=m;i++)
	{
		for(ll j=0;i<=n;j++)
		{
			if(i==0 || j==0) count[i][j]=1;
			else
			count[i][j]= count[i-1][j] + count[i][j-1];
		}
	}
	return count[m][n];
}
START
{
	IO1 IO2 IO3;
	ll m,n; cin>>m;
	cin>>n;
	debug(countWays(m,n));
	return 0;
}
