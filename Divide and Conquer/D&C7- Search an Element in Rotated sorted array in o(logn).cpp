/* 

Author: Sahil Arora
Date: 26-03-2019

Problem Statement:
----------------------
An element in a sorted array can be found in O(log n) time via binary search. 
But suppose we rotate an ascending order sorted array at some pivot unknown 
to you beforehand. So for instance, 1 2 3 4 5 might become 3 4 5 1 2. Devise 
a way to find an element in the rotated array in O(log n) time.

Core Logic:
----------------------
1) Find middle point mid = (l + h)/2
2) If key is present at middle point, return mid.
3) Else If arr[l..mid] is sorted
    a) If key to be searched lies in range from arr[l]
       to arr[mid], recur for arr[l..mid].
    b) Else recur for arr[mid+1..r]
4) Else (arr[mid+1..r] must be sorted)
    a) If key to be searched lies in range from arr[mid+1]
       to arr[r], recur for arr[mid+1..r].
    b) Else recur for arr[l..mid] 
    
Time Complexity
------------------------
o(logn)

References:
-----------------------
https://www.geeksforgeeks.org/search-an-element-in-a-sorted-and-pivoted-array/
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
#define MID(l,h) (l+h)/2

using namespace std;

int findKeySortedrotatedArray(ll a[] , ll l,ll h,ll key)
{
	if(l>h) return -1;
	ll mid=MID(l,h);
	if(a[mid]==key) return mid;
	if(a[l]<=a[mid])
	{
		if(key>=a[l]&& key<=a[mid])
		return findKeySortedrotatedArray(a,l,mid-1,key);
		
		return findKeySortedrotatedArray(a,mid+1,h,key);
	}
	if(key>=a[mid] && key<=a[h])
	return findKeySortedrotatedArray(a,mid+1,h,key);
	
	return findKeySortedrotatedArray(a,l,mid-1,key);
}

int main()
{
	ios::sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	ll a[]= {5,6,7,8,9,10,1,2,3};
	ll n= size(a);
	ll res=findKeySortedrotatedArray(a,0,n-1,3);
	if(res!=-1) {
	debug("found at index ::"); debug(res); }
	else debug("not found");
	return 0;
}
