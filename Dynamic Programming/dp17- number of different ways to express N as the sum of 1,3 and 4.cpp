/*
Author: Sahil Arora

Problem Statement:
-------------------
Given N, count the number of ways to express N as sum of 1, 3 and 4.
 
Core Logic:
------------------
Divide the problem into sub-problems for solving it. Let DP[n] be the be the 
number of ways to write N as the sum of 1, 3, and 4. Consider one possible solution 
with n = x1 + x2 + x3 + … xn. If the last number is 1, then sum of the remaining 
numbers is n-1. So the number that ends with 1 is equal to DP[n-1]. Taking other cases 
into account where the last number is 3 and 4. The final recurrence would be:


DPn = DPn-1 + DPn-3 + DPn-4
Base case :
DP[0] = DP[1] = DP[2] = 1 and DP[3] = 2


Time Complexity:
-----------------
0(n)

References:
-----------------
https://www.geeksforgeeks.org/count-ofdifferent-ways-express-n-sum-1-3-4/
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



ll possibleWays(ll n)
{
	ll x[n+1];
	x[0]=x[1]=x[2]=1; x[3]=2;
	for(ll i=4;i<=n;i++)
	x[i]=x[i-1] + x[i-3] + x[i-4];
	
	return x[n];
}

START
{
	IO1 IO2 IO3;
	ll n; cin>>n;
	debug(possibleWays(n));
	return 0;
}
