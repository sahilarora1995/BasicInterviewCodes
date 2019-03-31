/*
Author: Sahil Arora 

Problem Statement:
------------------------
Write a function to check whether two given strings are anagram of each other or not. 
An anagram of a string is another string that contains same characters, only the order of 
characters can be different. For example, “abcd” and “dabc” are anagram of each other.

Core Logic:
-----------------------
This method assumes that the set of possible characters in both strings is small. In the 
following implementation, it is assumed that the characters are stored using 8 bit and 
there can be 256 possible characters.
1) Create count arrays of size 256 for both strings. Initialize all values in count arrays as 0.
2) Iterate through every character of both strings and increment the count of character in the 
corresponding count arrays.
3) Compare count arrays. If both count arrays are same, then return true.

Time Complexity:
----------------------
o(n) where n = string length

References:
-----------------------
https://www.geeksforgeeks.org/check-whether-two-strings-are-anagram-of-each-other/
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
#define FL(i,n) for(i=0;i<n;i++)
#define MID(l,h) (l+h)/2
#define NODE struct node*
#define START signed main()
using namespace std;


bool checkAnagrams(string s1,string s2,ll m, ll n)
{
	ll check[256]= {0};
	ll i;
	for(i=0;s1[i] && s2[i];i++)
	{
		check[s1[i]]++;
		check[s2[i]]--;
	}
	if(s1[i] || s2[i]) return false;
	FL(i,256)
	if(check[i]) return false;
	
	return true;
}
START
{
	ios::sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);S
	string s1="abcde";
	string s2="bcdea";
	bool i=checkAnagrams(s1,s2,s1.length(),s2.length());
	if(i) cout<<"anagrams";
	else debug("Not anagrams");
}
