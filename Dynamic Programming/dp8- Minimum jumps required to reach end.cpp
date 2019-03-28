/* 
Problem Statement:
--------------------
Given an array of integers where each element represents the max number of 
steps that can be made forward from that element. Write a function to return 
the minimum number of jumps to reach the end of the array (starting from the 
first element). If an element is 0, then cannot move through that element.

Core Logic:
--------------------
we build a jumps[] array from left to right such that jumps[i] indicates 
the minimum number of jumps needed to reach arr[i] from arr[0]. Finally, 
we return jumps[n-1].

Time Complexity:
---------------------
o(n^2)

References:
---------------------
https://www.geeksforgeeks.org/minimum-number-of-jumps-to-reach-end-of-a-given-array/
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
#define FL(i) for(i=0;i<n;i++)
#define MID(l,h) (l+h)/2
#define NODE struct node*
#define START signed main()

using namespace std;
int findMinJumps(ll a[],ll n)
{
	ll jumps[n];
	if(n==0 || a[0]==0) return INT_MAX;
	
	jumps[0]=0;
	for(ll i=1;i<n;i++)
	{
		jumps[i]= INT_MAX;
		for(ll j=0;j<i;j++)
		{
			if(i<=j+a[j] &&jumps[j]!=INT_MAX)
			{
				jumps[i]= min (jumps[i],jumps[j]+1);
				break;
			}
		}
	}
	return jumps[n-1];
}

START
{
	ios::sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	ll a[]={2,3,1,1,2,4,2,0,1,1};
	ll n=size(a);
	debug(findMinJumps(a,n));
}
