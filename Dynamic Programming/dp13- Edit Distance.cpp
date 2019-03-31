/*
Author: Sahil Arora 

Problem Statement:
------------------------
Given two strings str1 and str2 and below operations that can performed on str1. 
Find minimum number of edits (operations) required to convert ‘str1’ into ‘str2’.

Insert
Remove
Replace
All of the above operations are of equal cost.

Core Logic:
-----------------------
The idea is process all characters one by one staring from either from left or right sides of both strings.
Let us traverse from right corner, there are two possibilities for every pair of character being traversed.

m: Length of str1 (first string)
n: Length of str2 (second string)
If last characters of two strings are same, nothing much to do. Ignore last characters and get count for 
remaining strings. So we recur for lengths m-1 and n-1.
Else (If last characters are not same), we consider all operations on ‘str1’, consider all three operations 
on last character of first string, recursively compute minimum cost for all three operations and take minimum 
of three values.
Insert: Recur for m and n-1
Remove: Recur for m-1 and n
Replace: Recur for m-1 and n-1

Time Complexity:
----------------------
o(mn) m and n are string lengths

References:
-----------------------
https://www.geeksforgeeks.org/edit-distance-dp-5/
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
#define FL(i,n) for(i=0;i<=n;i++)
#define MID(l,h) (l+h)/2
#define NODE struct node*
#define START signed main()
using namespace std;

int min(int x, int y, int z) 
{ 
    return min(min(x, y), z); 
} 
 
ll editDistance(string s1, string s2,ll m, ll n)
{
	ll edit[m+1][n+1]; ll i,j;
for(ll i=0;i<=n;i++)
	{
		for(ll j=0;j<=m;j++)
		{
			if(i==0) edit[i][j]=j;
			else if(j==0) edit[i][j]=i;
			else if(s1[i-1]== s2[j-1]) edit[i][j]= edit[i-1][j-1];
			else edit[i][j]= 1+ min(edit[i][j-1],edit[i-1][j],edit[i-1][j-1]);
		}
	}
	return edit[m][n];
}
START
{
	string s1="CAT";
	string s2="CUT";
	debug(editDistance(s1,s2,s1.length(),s2.length()));
	
}
