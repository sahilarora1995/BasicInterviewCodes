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
#define BR cout<<endl;
using namespace std;


void printp(priority_queue<int> p)
{
	while(!p.empty())
	{
		cout<<p.top(); BR
		p.pop();
	}
}
START
{
	IO1 IO2 IO3;
	priority_queue<int> p;
	priority_queue<int> p1;
	p.push(1);
	p.push(5);
	p.push(12);
	p.push(34);
	
	p1.push(11);
	p1.push(51);
	p1.push(121);
	p1.push(341);
	
	
	printp(p);
	p.swap(p1);
	printp(p);
	
	debug(p.size());
	p.pop();
	printp(p);

	return 0;
}
