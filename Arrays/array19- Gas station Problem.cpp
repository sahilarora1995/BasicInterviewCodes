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

ll findTourstarting(ll gas[], ll dis[], ll n)
{
	ll start, surplus, deficient;
	start=surplus= deficient=0;
	for(ll i=0;i<n;i++)
	{
		surplus=surplus+gas[i]- dis[i];
		if(surplus<0)
		{
			start=i+1;
			deficient+=surplus;
			surplus=0;
		}
	}
    return surplus+deficient>0? start: -1;
}

START
{
	IO1 IO2 IO3;
	ll gas[]= {6,3,7};
	ll dis[]= {4,6,3};
	debug(findTourstarting(gas, dis, 5));
	return 0;
}
