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
#define V vector
#define FR(i,j) for(ll i=0;i<j;i++)
#define IO1  ios::sync_with_stdio(0);
#define IO2    cin.tie(0);
#define IO3 	cout.tie(0);
using namespace std;


nthNumber(ll n)
{
	V<ll> a;
	for(ll i=0;i<6;i++) a.push_back(i);
	
	for(ll i=0;i<=n;i++)
	for(ll j=0;j<6;j++)
	if(a[i]*10 !=0)
	a.push_back(a[i]*10 + a[j]);
	
	debug(a[n-1]);
}
START
{
	IO1 IO2 IO3;
	ll n; cin>>n;
	nthNumber(n);
	return 0;
}
