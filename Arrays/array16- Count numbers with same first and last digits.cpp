/*
Author: Sahil Arora

Problem Statement:
-------------------
Given an interval, the task is to count numbers which have same first and last digits.
 For example, 1231 has same first and last digits.
 
Core Logic:
------------------
Let us first consider below examples to understand the approach.

From 120 to 130, only 121 has same starting and ending digit
From 440 to 450, only 444 has same starting and ending digit
From 1050 to 1060, only 1051 has same starting and ending digit
From above examples, we can observe that in each ten number span we have only one number
 which has the given property except 1 to 10 which has 9 numbers (all one digit number)
  having same starting and ending digit.
Using above property we can solve given problem, first we break the given interval into
 two parts that is if interval is l to r, we break this into 1 to l and 1 to r, our answer
  is obtained by subtracting result of first query from second query.
Now we remain to find count of numbers with given property in range 1 to x, for this we divide
 x by 10, which gives number of 10-spans. We add 9 to the span for taking one digit numbers
  into account. If last digit of x is smaller than first digit of x, then 1 should be decreased
 in final answer to discard last ten span number because that number is out of range.
 
Time Complexity:
-----------------
0(n)

References:
-----------------
https://www.geeksforgeeks.org/count-numbers-first-last-digits/
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

bool check(ll i)
{
	ll s1=i%10; ll s2;
	while(i !=0)
	{
		 s2= i%10;
		 i=i/10;
	}
	return (s1==s2);
}
START
{
	IO1 IO2 IO3;
	ll t,begin,end,s;
	s=0;
	cin>>t;
	while((t--) !=0)
	{
	cin>>begin;
	cin>>end;
	for(ll i=begin;i<=end;i++)
	{
		if(i/10 ==0) s++;
		else if(check(i)) s++;
	}
	debug(s);
    }
	return 0;
}
