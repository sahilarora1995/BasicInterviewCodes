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


maxCostJoiningRopes(ll a[],ll n)
{
	priority_queue<int> p(a,a+n); ll r=0;
	while(p.size()>1)
	{
		ll f= p.top(); p.pop();
		ll s= p.top(); p.pop();
		r+=(f+s);
		p.push(f+s);
	}
	debug(r);
}
START
{
	IO1 IO2 IO3;
	ll a[]= {4,3,2,6};
	ll size= SIZE(a);
	maxCostJoiningRopes(a,size);
	return 0;
}
