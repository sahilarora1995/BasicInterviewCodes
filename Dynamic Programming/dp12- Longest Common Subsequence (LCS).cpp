
/*
Author: Sahil Arora 

Problem Statement:
------------------------
Given two sequences, find the length of longest subsequence present in both of them. 
A subsequence is a sequence that appears in the same relative order, but not necessarily 
contiguous. For example, “abc”, “abg”, “bdf”, “aeg”, ‘”acefg”, .. etc are subsequences 
of “abcdefg”. 

Core Logic:
-----------------------
Let the input sequences be X[0..m-1] and Y[0..n-1] of lengths m and n respectively. 
And let L(X[0..m-1], Y[0..n-1]) be the length of LCS of the two sequences X and Y. 
Following is the recursive definition of L(X[0..m-1], Y[0..n-1]).

If last characters of both sequences match (or X[m-1] == Y[n-1]) then
L(X[0..m-1], Y[0..n-1]) = 1 + L(X[0..m-2], Y[0..n-2])

If last characters of both sequences do not match (or X[m-1] != Y[n-1]) then
L(X[0..m-1], Y[0..n-1]) = MAX ( L(X[0..m-2], Y[0..n-1]), L(X[0..m-1], Y[0..n-2]))

Time Complexity:
----------------------
o(mn) m and n are string lengths

References:
-----------------------
https://www.geeksforgeeks.org/longest-common-subsequence-dp-4/
http://www.cplusplus.com/
*/
#include<iostream>
#include<algorithm>
#include<cstring>
#include<bits/stdc++.h>
#include<bits/stdc++.h> 
#define ll int
#define debug(x) cout << x<< " ";
#define size(a) sizeof(a)/sizeof(a[0])
#define pii pair<int,int>
#define F first
#define S second
#define WL(i,s) while(i<s.length())
#define MAX INT_MAX
#define MIN INT_MIN
#define FL(i) for(i=0;i<=n;i++)
#define MID(l,h) (l+h)/2
#define NODE struct node*
#define START signed main()

using namespace std;
ll LCS(string s1,string s2,ll m,ll n)
{
	ll lcs[m+1][n+1]; ll i,j;
	FL(i)
	{
		FL(j)
		{
			if(i==0 || j==0)
			lcs[i][j]=0;
			else if(s1[i-1]==s2[j-1])
			lcs[i][j]= lcs[i-1][j-1]+1;
			else
			lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
		}
	}
	return lcs[m][n];
}
START
{
	string s1="AGGTAB";
	string s2="GXTXAYB";
	debug(LCS(s1,s2,s1.length(),s2.length()));
}
