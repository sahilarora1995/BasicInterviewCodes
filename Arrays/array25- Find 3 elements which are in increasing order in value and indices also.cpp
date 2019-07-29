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

void threeNumbersorder(ll a[], ll n)
{
	ll small[n]; ll grea[n];
	 ll max=n-1; ll min =0;
	small[0]= -1;
	for(ll i=1;i<n;i++)
	{
		if(a[i]<=a[min]) {
			min =i; small[i]=-1;
		}
		else
		small[i]= min;
	}
	 grea[n-1]= -1;
	for(ll i=n-2;i>=0;i--)
	{
		if(a[i]>=a[max]) {
			max=i;
			grea[i]=-1;
		}
		else
		grea[i]=max;
	}
	
	for(ll i=0;i<n;i++)
	{
		if(small[i]!=-1 && grea[i]!= -1)
		{
			debug(a[small[i]]); debug(a[i]); debug(a[grea[i]]);
			return;
		}
	}
	debug("no triplet");
}
	
START
{
	IO1 IO2 IO3;
	ll a[]= {12,11,10,5,6,2,30};
	ll n=SIZE(a);
	threeNumbersorder(a,n);
	return 0;
}
