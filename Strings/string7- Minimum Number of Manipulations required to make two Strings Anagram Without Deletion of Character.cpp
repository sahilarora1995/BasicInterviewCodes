/*
Author: Sahil Arora

Problem Statement:
----------------------
Given two strings in lowercase, your task is to find minimum number of manipulations 
required to make two strings anagram without deleting any character. If two strings 
contains same data set in any order then strings are called Anagrams.

Time Complexity:
-------------------
0(n)

References:
-------------------
https://www.geeksforgeeks.org/minimum-number-of-manipulations-required-to-make-two-strings-anagram-without-deletion-of-character/
http://www.cplusplus.com/
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


ll minChangestoformAnagrams(string s1,string s2)
{
	ll count=0; ll c=0;
	ll hs1[256]={0}; ll hs2[256]= {0};
	for(ll i=0;i<s2.length();i++)
	{
		hs1[s1[i]-'a']++; hs2[s2[i]-'a']++;
	}
	for(ll i=0;i<256;i++)
	{
		if(hs1[i] > hs2[i])
		{
		c= hs1[i]-hs2[i];
        count+=c;
        }
		else if(hs1[i] < hs2[i])
		{
		c=hs2[i]-hs1[i];
		count+=c;
	    }
    }
   return count/2; 
    
}
	
START
{
	IO1 IO2 IO3;
	ll t;
	cin>>t;
	while(t--)
	{
	ll n;
	string s1,s2;
	cin>>n;
	cin>>s1;
	cin>>s2;
	debug(minChangestoformAnagrams(s1,s2));
    }
	return 0;
}
