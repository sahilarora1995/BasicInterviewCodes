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
#define D double
#define IO1  ios::sync_with_stdio(0);
#define IO2    cin.tie(0);
#define IO3 	cout.tie(0);
using namespace std;

getMedian(double a[], ll n)
{
	priority_queue<double> s;
	priority_queue<double,vector<double>,greater<double> > g;
	
	D m= a[0];
	s.push(a[0]);
	debug(m);
	
	for(ll i=1;i<n;i++)
	{
		D x=a[i];
		if(s.size() > g.size())
		{
			if(x<m)
			{
			   g.push(s.top()); s.pop(); s.push(x);	
			}
			else
			g.push(x);
			
			m= (s.top() + g.top())/2.0;
			
		}
		else if(s.size()== g.size())
		{
			if(x<m)
			{
				s.push(x);
				m= double(s.top());
			}
			else
			{
				g.push(x);
				m= (double) g.top();
			}
		}
		else
		{
			if(x>m)
			{
				s.push(g.top()); g.pop(); g.push(x);
			}
			else
			s.push(x);
			
			m= s.top() + g.top()/2.0;
		}
		debug(m);
  } // for loop ending
}
START
{
	IO1 IO2 IO3;
	D array[]= {5, 15, 10, 20, 3};
	ll n= SIZE(array);
	getMedian(array,n);
	return 0;
}
