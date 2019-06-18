/* 
Author: Sahil Arora
Date: 18-06-2019

Problem Statement:
----------------------
Given two strings s1 and s2, check if s1 is a suffix of s2. Or in 
simple words we need to find whether string s2 ends with string s1.
   
Time Complexity
------------------------
o(n)

References:
-----------------------
https://www.geeksforgeeks.org/check-if-a-string-is-suffix-of-another/
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
#define STR string
using namespace std;

bool checkSuffix(STR a, STR b)
{
	if(a.length()<b.length()) return false;
	for(ll i=0;i<b.length();i++) //length function counts null too;
	{
		if(a[a.length()-i-1]!= b[b.length()-i-1]) 
		return false;
	}
	return true;
}
START
{
	IO1 IO2 IO3;
	STR a="codeisfun";
	STR b="fun";
	debug(checkSuffix(a,b));
	return 0;
}
