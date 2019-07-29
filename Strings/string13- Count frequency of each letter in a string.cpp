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

countFrequencyOfeachLetter(string s)
{
	unordered_map<char, int> h;
	for(ll i=0;i<s.length(); i++)
    {
    	h[s[i]]++;
	}
     for (auto x : h) 
      cout << x.first << " " << x.second << endl; 
}
START
{
	IO1 IO2 IO3;
	string s= "aabbbcccc";
	countFrequencyOfeachLetter(s);
	return 0;
}
