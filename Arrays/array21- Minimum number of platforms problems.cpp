/*
Author: Sahil Arora
Problem: https://www.geeksforgeeks.org/minimum-number-platforms-required-railwaybus-station/
*/
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

minPlatforms(ll arr[],ll dep[],ll n)
{
	ll plat=1, out=1, i=1,j=0;
	sort(arr,arr+n);
	sort(dep,dep+n);
	while(i<n && j<n)
	{
		if(arr[i]<=dep[j])
		{
			plat++; i++;
			if(plat>out)
			out=plat;
		}
		else
		{
			plat--;
			j++;
		}
	}
	
debug(out);
}
START
{
	IO1 IO2 IO3;
	ll arr[] = {900, 940, 950, 1100, 1500, 1800}; 
    ll dep[] = {910, 1200, 1120, 1130, 1900, 2000}; 
    ll n = sizeof(arr)/sizeof(arr[0]); 
    minPlatforms(arr,dep,n);
    
	return 0;
}
