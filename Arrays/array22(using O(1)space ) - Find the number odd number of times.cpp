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


void oddOccur(ll a[],ll n)
{
	ll r=0;
	for(ll i=0;i<n;i++)
	r^=a[i];
	
	debug(r);
}
START
{
	IO1 IO2 IO3;
	ll a[]= {5,7,2,7,5,2,5};
	ll n=SIZE(a);
	oddOccur(a,n);
	return 0;
}
