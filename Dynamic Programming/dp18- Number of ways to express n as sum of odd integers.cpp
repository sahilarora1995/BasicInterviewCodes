/*
Author: Sahil Arora

Problem Statement:
-------------------
Given an positive integer n. Count total number of ways to express ‘n’ as sum of odd positive integers.
 
Core Logic:
------------------
is to find recursive nature of problem. The number ‘n’ can be written as sum of odd integers 
from either (n-1)th number or (n-2)th number. Let the total number of ways to write ‘n’ be ways(n). 
The value of ‘ways(n)’ can be written by recursive formula as follows:

ways(n) = ways(n-1) + ways(n-2)
The above expression is actually the expression for Fibonacci numbers. Therefore problem is 
reduced to find the nth fibonnaci number.

ways(1) = fib(1) = 1
ways(2) = fib(2) = 1
ways(3) = fib(2) = 2
ways(4) = fib(4) = 3

Time Complexity:
-----------------
0(n)

References:
-----------------
https://www.geeksforgeeks.org/count-ways-express-n-sum-odd-integers/
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
	x[0]=0;
	x[1]=1;
	for(ll i=2;i<=n;i++)
	x[i]=x[i-1] + x[i-2];
	
	return x[n];
}

START
{
	IO1 IO2 IO3;
	ll n; cin>>n;
	debug(possibleWays(n));
	return 0;
}
