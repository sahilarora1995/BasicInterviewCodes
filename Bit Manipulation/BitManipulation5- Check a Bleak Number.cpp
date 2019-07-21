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
#include <cmath>
using namespace std;

ll ceilLog2(int x) 
{ 
    int count = 0; 
    x--; 
    while (x > 0) { 
        x = x >> 1; 
        count++; 
    } 
    return count; 
} 
bool checkBleak(ll n)
{
	//debug(__builtin_popcount(n));
	for(ll x= n-ceilLog2(n); x<n;x++)
	{
		if(x+ __builtin_popcount(x)==n) 
		return false;
    }
	return true;
}
START
{
	IO1 IO2 IO3;
	debug(checkBleak(4));
	return 0;
}
