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

ll findTranstition(ll a[], ll low, ll high)
{

	ll m= MID(low,high);
	if(a[m]==0 && a[m+1]==1)
	return m+1;
	
	else if(a[m]==0 && a[m+1]==0)
	findTranstition(a,m+1,high);
	
	else if(a[m]==1 && a[m-1]==0) return m;
	else if(a[m]==1 && a[m-1 ]==1) 
	findTranstition(a,low,m+1); 
    }
START
{
	IO1 IO2 IO3;
	ll a[]= { 0,0,0,1,1};
	ll n= SIZE(a);
	cout<<findTranstition(a,0,n-1);
	return 0;
}
