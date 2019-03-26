/* 

Author: Sahil Arora
Date: 26-03-2019

Problem Statement:
----------------------
Given an array of integers, find the length of the longest sub-sequence such 
that elements in the subsequence are consecutive integers, the consecutive 
numbers can be in any order.

Core Logic:
----------------------
1) Create an empty hash.
2) Insert all array elements to hash.
3) Do following for every element arr[i]
....a) Check if this element is the starting point of a 
       subsequence.  To check this, we simply look for
       arr[i] - 1 in hash, if not found, then this is
       the first element a subsequence.  
    
       If this element is a first element, then count 
       number of elements in the consecutive starting 
       with this element.

       If count is more than current res, then update    
       res.
       
Time Complexity
------------------------
o(n)

References:
-----------------------
https://www.geeksforgeeks.org/longest-consecutive-subsequence/
http://www.cplusplus.com/
*/      
#include<iostream>
#include<algorithm>
#include<cstring>
#include<bits/stdc++.h>
#include<bits/stdc++.h> 
#define ll int
#define debug(x) cout << x;
#define size(a) sizeof(a)/sizeof(a[0])
#define pii pair<int,int>
#define F first
#define S second
#define WL(i,s) while(i<s.length())
#define MAX INT_MAX
#define FL(i) for(i=0;i<n;i++)

using namespace std;


int sizeofsubsetContainsconsectiveintegers(lls a[],ll n)
{
	unordered_set<int> S; 
	unordered_set<ll>s; ll res=0; ll i=0;
    for(i=0;i<n;i++)
	s.insert(a[i]);
	
	for(i=0;i<n;i++)
	{
	if(s.find(a[i]-1)==s.end())
	{
		ll j=a[i];
		while(s.find(a[i])!= s.end()) j++;
		
		res=max(res,j-a[i]);
	}
    }
   return res; 
}

int main()
{
	ios::sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	ll a[]= {1,3,8,14,4,10,2,11};
	ll n=size(a);
	cout<<sizeofsubsetContainsconsectiveintegers(a,n);
	return 0;
}
