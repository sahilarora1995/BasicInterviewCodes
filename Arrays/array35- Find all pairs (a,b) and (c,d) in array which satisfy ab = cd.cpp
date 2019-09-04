/*
Author: Sahil Arora
*/
#include<iostream>
#include<algorithm>
#include<cstring>
#include<bits/stdc++.h>
#define ll long long int
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

sumofTwoelementssameasOtherPair(ll a[],ll n )
{
	unordered_map<int,pair<int,int>>m;
	for(ll i=0;i<n-1;i++)
	{
		for(ll j=i+1;j<n;j++)
		{
			ll prod= a[i] * a[j];
			if(m.find(prod)!=m.end())
			{
				pair<int,int>p= m[prod];
			    debug(p.first); debug(p.second); debug(":")
				debug(a[i]); debug(a[j]);	
				BR
			}
			else
				m[prod]= make_pair(a[i],a[j]);
		}
	}
}
START
{
	IO1 IO2 IO3;
	ll a[]= {3,4,7,1,2,9,8};
	sumofTwoelementssameasOtherPair(a,SIZE(a));
	return 0;
}
