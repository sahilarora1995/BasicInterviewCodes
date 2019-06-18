/*
Author: Sahil Arora
Date:   18-06-2019

Problem Statement:
----------------------
Given an array A[] consisting 0s, 1s and 2s. The task is to write a function that 
sorts the given array. The functions should put all 0s first, then all 1s and all 2s in last.

Core Logic:
----------------------
Lo := 1; Mid := 1; Hi := N;
while Mid <= Hi do
Invariant: a[1..Lo-1]=0 and a[Lo..Mid-1]=1 and a[Hi+1..N]=2; a[Mid..Hi] are unknown.
case a[Mid] in
0: swap a[Lo] and a[Mid]; Lo++; Mid++
1: Mid++
2: swap a[Mid] and a[Hi]; Hi–-

Time Complexity:
--------------------
0(n)

References:
--------------------
https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/
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

seggregateArray(CH a[] , ll n)
{
	ll low,mid;
	low=mid=0; ll high=n-1;
	while(mid<=high)
	{
		switch(a[mid])
		{
			case '0':
					swap(a[low++], a[mid++]);
					break;
			case '1':
			    	mid++;
			    	break;
			case '2':
			    	swap(a[mid],a[high--]);
			    	break;
		}
	}
	debug(a);
}

START
{
	IO1 IO2 IO3;
    CH arr[] = "011012120001";
    ll n =strlen(arr);
	seggregateArray(arr,n);
	return 0;
}
