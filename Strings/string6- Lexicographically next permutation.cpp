/*
Author: Sahil Arora

Problem Statement:
----------------------
Given a string, find lexicographically next string.

Examples:

Input : geeks
Output : geekt
The last character 's' is changed to 't'.

Input : raavz
Output : raawz
Since we can't increase last character, 
we increment previous character.

Input :  zzz
Output : zzza

Time Complexity:
-------------------
0(n)

References:
-------------------
https://www.geeksforgeeks.org/lexicographically-next-string/
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

void nextLexigraphically(string s)
{
	ll flag=0;
	for(ll i=s.length()-1;i>=0;i--)
	{
		if(s[i]<'z')
		{
		s[i]+=1;
		flag=1;
		debug(s);
		return;
	    }
	}
	if(flag==0) s=s+'a';
	debug(s);
 }
START
{
	IO1 IO2 IO3;
	string s= "zzz";
	nextLexigraphically(s);
	return 0;
}
