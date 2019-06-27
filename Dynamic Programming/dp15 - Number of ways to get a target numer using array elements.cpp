/*
Author: Sahil Arora

Problem Statement:
-------------------
Given an integer array, find number of ways to calculate a target number 
using only array elements and addition or subtraction operator.
 
Core Logic:
------------------
The problem is similar to 0-1 Knapsack Problem where for every item, we either pick 
the complete item, or don’t pick it at all (0-1 property). The idea remains the same 
here i.e. we either include the current digit or ignore it. If we include the current 
digit, we subtract or add it from remaining target and recurse for remaining digits with 
new target. If target reaches 0, we increment the count. If we have processed all elements 
of the array and target is not reached, count remains unchanged.

Time Complexity:
-----------------
0(n)

References:
-----------------
https://www.geeksforgeeks.org/number-of-ways-to-calculate-a-target-number-using-only-array-elements/
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


ll 	waysPossible(ll a[],ll n,ll i, ll sum)
{
	if(i>=n && sum!=0) return 0;
	if(sum==0) return 1;
	return waysPossible(a,n,i+1,sum) + waysPossible(a,n,i+1,sum-a[i]) + waysPossible(a,n,i+1,sum+a[i]);  
}
START
{
	IO1 IO2 IO3;
	ll a[]= {-3,1,3,5};
	ll n=SIZE(a);
	debug(waysPossible(a,n,0,6));
	return 0;
}
