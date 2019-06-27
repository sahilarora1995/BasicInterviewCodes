/*
Author: Sahil Arora

Problem Statement:
-------------------
Given two integers x and n, write a function to compute x^n. We may assume that x and n are small and overflow doesn’t happen.

Core Logic:
------------------
Divide and conquer.

Time Complexity:
-----------------
0(logn)

References:
-----------------
https://www.geeksforgeeks.org/write-a-c-program-to-calculate-powxn/
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


ll calculatePower(ll base,ll exp)
{
	if(exp==0) return 1;
	ll temp= calculatePower(base,exp/2);
	if(exp%2==0) return temp*temp;
	else
	return temp*temp*base;
}
START
{
	IO1 IO2 IO3;
	ll base, exp;
	cin>>base>>exp;
	debug(calculatePower(base,exp));
	return 0;
}
