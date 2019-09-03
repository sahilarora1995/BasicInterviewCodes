/*
Author: Sahil Arora
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
#define FL(a,b) for(ll i=a;i<b;i++)
#define BR cout<<endl;
using namespace std;


ll lengthSubarraywithZeroSum( ll a[], ll n)
{
	ll prefixSum[n]; prefixSum[0]= a[0];
	for(ll i=1;i<n;i++)
	prefixSum[i]= prefixSum[i-1] + a[i];
	ll maxlength= INT_MIN;
	unordered_map<int,int>m;
	for(ll i=0;i<n;i++)
	{
		if(m.find(prefixSum[i])!=m.end())
		{
			ll currentLength= i-m[prefixSum[i]];
			if(currentLength > maxlength)
			maxlength= currentLength;
		}
		else
		m[prefixSum[i]]= i;
	}
	return maxlength;
}
START
{
	IO1 IO2 IO3;
	ll a[]= {15,-2,2,-8,1,7,10,23};
	ll n= SIZE(a);
	debug(lengthSubarraywithZeroSum(a,n));
	return 0;
}
