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

START
{
	IO1 IO2 IO3;
	ll t,n,max;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll a[n], b[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
		   cin>>b[i];
		   
		 	if((a[0]*20 - b[0]*10)>0)
		 	max=a[0]*20 - b[0]*10;
		 	else
		 	max= 0;
		
		 for(int i=1;i<n;i++)
		 { 
		  if((a[i]*20 - b[i]*10)>max)
		  max= (a[i]*20 - b[i]*10);
	     }
	 debug(max);	   	
	}
	return 0;
}
