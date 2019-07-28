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
using namespace std;


countDecoding(char *s,ll n)
{
	ll c[n+1]; c[0]=c[1]=1;
	FL(2,n+1)
	{
		c[i]=0;
		if(s[i-1]>'0') c[i]= c[i-1];
			if(s[i-2]=='1' || s[i-2]=='2' && s[i-1] <'7')
			c[i]+= c[i-2];
	}
	return c[n];
}
START
{
	
	IO1 IO2 IO3;
	CH n[]= "1234";
	debug(countDecoding(n,4));
	return 0;
}
