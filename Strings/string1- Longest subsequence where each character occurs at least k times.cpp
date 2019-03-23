/*
Problem Statement:
---------------------------
Given a string ‘s’ and an integer k, find other string ‘t’ such that ‘t’ is
the largest subsequence of given string ‘s’ and each character of ‘t’ must occur at least k times in string s.

Examples :

Input : s = "geeksforgeeks"
        k = 2
Output : geeksgeeks

Input : s = "baaabaacba"
        k = 3
Output : baaabaaba

Core logic:
------------------------
We can take another array to keep the record of count of each character
from string s, if any character occurred more than or equal to k times, then we simply print it.


Time Complexity:
-----------------------
0(n)

References:
https://www.geeksforgeeks.org/longest-subsequence-where-each-character-occurs-at-least-k-times/
*/

#include<iostream>
#define MAX 256
#define ll int
#define debug(x) cout << x;
using namespace std;


void printstringsubsequence(string s,int k)
{
	int freq[MAX]= {0};
	for(int i=0;s[i]!=NULL;i++)
		freq[s[i]]++;
		
	for(int j=0;s[j]!=NULL;j++)
	{
		if(freq[s[j]]>=k)
		debug(s[j]);
	}	
}
int main()
{
	ios::sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	ll k;
	string s;
	cin>>s;
	cin>>k;
	printstringsubsequence(s,k);
	
}
