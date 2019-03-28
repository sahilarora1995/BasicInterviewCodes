/* 
Problem Statement:
--------------------
Given a rod of length n inches and an array of prices that contains prices of all pieces 
of size smaller than n. Determine the maximum value obtainable by cutting up the rod 
and selling the pieces. For example, if length of the rod is 8 and the values of different 
pieces are given as following, then the maximum obtainable value is 22 (by cutting in two 
pieces of lengths 2 and 6)

Core Logic:
--------------------
1) Optimal Substructure: 
We can get the best price by making a cut at different positions and comparing the values obtained after a cut. 
We can recursively call the same function for a piece obtained after a cut.

Let cutRod(n) be the required (best possible price) value for a rod of length n. cutRod(n) can be written as following.

cutRod(n) = max(price[i] + cutRod(n-i-1)) for all i in {0, 1 .. n-1}

2) Overlapping Subproblems
Following is simple recursive implementation of the Rod Cutting problem. The implementation simply follows the 
recursive structure mentioned above.


Time Complexity:
---------------------
o(n^2)

References:
---------------------
https://www.geeksforgeeks.org/cutting-a-rod-dp-13/
http://www.cplusplus.com/
*/
#include<iostream>
#include<algorithm>
#include<cstring>
#include<bits/stdc++.h>
#include<bits/stdc++.h> 
#define ll int
#define debug(x) cout << x<< " ";
#define size(a) sizeof(a)/sizeof(a[0])
#define pii pair<int,int>
#define F first
#define S second
#define WL(i,s) while(i<s.length())
#define MAX INT_MAX
#define MIN INT_MIN
#define FL(i) for(i=0;i<n;i++)
#define MID(l,h) (l+h)/2
#define NODE struct node*
#define START signed main()

using namespace std;

int cutRodMxProfit(ll price[],ll n)
{
	ll *val= new int[n+1];
	val[0]=0;
	for(ll i=1;i<=n;i++)
	{
		ll maxv=MIN;
		for(ll j=0;j<i;j++)
		{
			maxv= max(maxv,price[j]+ val[i-j-1]);
			val[i]= maxv;
		}
	}
	return val[n];
}
START
{
	ios::sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	ll price[]= {1, 5, 8, 9, 10, 17, 17, 20}; 
	ll n=size(price);
	debug(cutRodMxProfit(price,n));
}

