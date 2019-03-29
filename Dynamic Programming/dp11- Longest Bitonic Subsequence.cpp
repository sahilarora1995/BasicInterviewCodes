/* 
Problem Statement:
--------------------
Given an array arr[0 … n-1] containing n positive integers, a subsequence of arr[] is 
called Bitonic if it is first increasing, then decreasing. Write a function that takes 
an array as argument and returns the length of the longest bitonic subsequence.
A sequence, sorted in increasing order is considered Bitonic with the decreasing part 
as empty. Similarly, decreasing order sequence is considered Bitonic with the increasing 
part as empty.

Core Logic:
--------------------
This problem is a variation of standard Longest Increasing Subsequence (LIS) problem. 
Let the input array be arr[] of length n. We need to construct two arrays lis[] and lds[] 
using Dynamic Programming solution of LIS problem. lis[i] stores the length of the Longest 
Increasing subsequence ending with arr[i]. lds[i] stores the length of the longest Decreasing 
subsequence starting from arr[i]. Finally, we need to return the max value of lis[i] + lds[i] – 1 
where i is from 0 to n-1.

Time Complexity:
---------------------
O(n^2)

References:
---------------------
https://www.geeksforgeeks.org/longest-bitonic-subsequence-dp-15/
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
ll lcs[100000], lds[100000];

void settingBaseCase(ll a[],int n)
{
	ll i;
	FL(i)
	a[i]=1;
}
calculateLDS(ll a[], ll n)
{
	settingBaseCase(lds,n);
	for(ll i=n-2;i>=0;i--)
	{
		for(ll j=n-1;j>i;j--)
		{
			if(a[i]>a[j] && lds[i]< lds[j]+1)
			lds[i]= lds[j]+1;
		}
	}
}

calculateLCS(ll a[], ll n)
{
	settingBaseCase(lcs,n);
	for(ll i=1;i<n;i++)
	{
		for(ll j=0;j<i;j++)
		{
			if(a[j]<a[i] && lcs[i]< lcs[j]+1)
			lcs[i]= lcs[j]+1;
		}
	}
}
ll findMax(ll n)
{
	ll max= lcs[0] +lds[0]-1;
	for(ll i=1;i<n;i++)
	if(lcs[i] + lds[i]-1 >max)
	max= lcs[i]+ lds[i]-1;
	return max;
}
START
{
	ll a[]= {1,11,2,10,4,5,2,1};
	ll n=size(a);
	calculateLDS(a,n);
	calculateLCS(a,n);
	debug(findMax(n));
}
