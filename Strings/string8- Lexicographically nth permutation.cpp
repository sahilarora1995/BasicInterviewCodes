/*
Author: Sahil Arora

Problem Statement:
-------------------
Given a string of length m containing lowercase alphabets only. You have to find the n-th permutation of string lexicographically.
 
Core Logic:
------------------
Idea behind printing n-th permutation is quite simple we should use STL (explained in above link) 
for finding next permutation and do it till the nth permutation. After n-th iteration, we should break
 from the loop and then print the string which is our nth permutation.

    long int i = 1;
    do
    {
        // check for nth iteration
        if (i == n)
            break;
       i++; // keep incrementing the iteration
    } while (next_permutation(str.begin(), str.end()));

    // print string after nth iteration
   print str;
   
Time Complexity:
-----------------
0(n)

References:
-----------------
https://www.geeksforgeeks.org/lexicographically-n-th-permutation-string/
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

nPermutation(string s, ll n)
{
	ll i=1;
	sort(s.begin(), s.end());
	do
	{
		
		if((i++)==n) break;
	}while(next_permutation(s.begin(), s.end()));
	
	debug(s);
}
START
{
	IO1 IO2 IO3;
	string  s="abc";
	nPermutation(s,2);
	return 0;
}
