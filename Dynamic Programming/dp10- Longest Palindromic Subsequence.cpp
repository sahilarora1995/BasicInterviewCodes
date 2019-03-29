/* 
Problem Statement:
--------------------
Given a sequence, find the length of the longest palindromic subsequence in it.

Core Logic:
--------------------
/ Every single character is a palindrome of length 1
L(i, i) = 1 for all indexes i in given sequence

// IF first and last characters are not same
If (X[i] != X[j])  L(i, j) =  max{L(i + 1, j),L(i, j - 1)} 

// If there are only 2 characters and both are same
Else if (j == i + 1) L(i, j) = 2  

// If there are more than two characters, and first and last 
// characters are same
Else L(i, j) =  L(i + 1, j - 1) + 2 

Time Complexity:
---------------------
O(n^2)

References:
---------------------
https://www.geeksforgeeks.org/longest-palindromic-subsequence-dp-12/
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
#define FL(i) for(i=0;i<n;i++)
#define MID(l,h) (l+h)/2
#define NODE struct node*
#define START signed main()

using namespace std;
ll longestPalindromicSubsequence(string s,ll i,ll j)
{
	ll l[j][j]; 
	for(ll p=0;p<s.length();p++)
	l[p][p]=1;
	
	for( ll c=2;c<=s.length();c++)
	{
		for(ll i=0;i<s.length()-c+1;i++)
		{
			ll j=i+c-1;
			if(s[i]==s[j] && c==2) l[i][j]=2;
			else if(s[i]== s[j])
			l[i][j]=l[i+1][j-1] +2;
			else
			l[i][j]= max(l[i+1][j], l[i][j-1]); 
		}
	}
	return l[0][s.length()-1];
}
START
{
        ios::sync_with_stdio(0);
        cin.tie(0);
	cout.tie(0);
	string s="aaaabaaaa";
	ll n=s.length();
	debug(longestPalindromicSubsequence(s,0,n-1));
}
