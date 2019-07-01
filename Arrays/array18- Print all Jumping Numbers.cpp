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


bfstree(ll n, ll num)
{
	queue<int> q; q.push(num);
	
	while(!q.empty())
	{
		num=q.front();
		q.pop();
		if(num<=n)
		{
			debug(num);
			ll last= num%10;
			if(last==0)
			q.push(num*10 +last+1);
			else if(last==9)
			q.push(num*10 + last-1);
			else
			{
				q.push(num*10 + last-1);
				q.push(num*10 + last+1);
			}
			
		}
	}
}
jumping(ll x)
{
	debug(0);
	for(ll i=1;i<=9 && i<=x;i++)
	bfstree(x,i);
}
START
{
	IO1 IO2 IO3;
	ll n;
	cin>>n;
	jumping(n);
	return 0;
	
}
