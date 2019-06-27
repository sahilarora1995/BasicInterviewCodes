/*
Author: Sahil Arora

Problem Statement:
-------------------
Given an positive even integer ‘n’. Count total number of ways to express ‘n’ as sum of even positive integers.
 
Core Logic:
------------------
Approach is to find pattern or recursive function whichever is possible. The approach would be 
the same as already discussed in “Count ways to express ‘n’ as sum of odd integers“. Here 
the given number is even that means even sum can only be achieved by adding the (n-2)th number 
as two times. We can notice that (by taking some examples) adding a 2 to a number doubles the count. 
Let the total number of ways to write ‘n’ be ways(n). The value of ‘ways(n)’ can be written by formula as follows:

ways(n) = ways(n-2) + ways(n-2)
ways(n) = 2 * ways(n-2)

ways(2) = 1 = 20
ways(4) = 2 = 21
ways(6) = 4 = 22
ways(8) = 8 = 23
''
''
''
ways(2 * n) = 2n-1

Replace n by (m / 2)
=> ways(m) = 2m/2 - 1

Time Complexity:
-----------------
0(logn)

References:
-----------------
https://www.geeksforgeeks.org/count-ways-express-even-number-n-sum-even-integers/
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

ll calculatePower(ll base,ll exp)
{
	if(exp==0) return 1;
	ll temp= calculatePower(base,exp/2);
	if(exp%2==0) return temp*temp;
	else
	return temp*temp*base;
}
START
{
	IO1 IO2 IO3;
	ll n; cin>>n;
	debug(calculatePower(2,n/2-1));
	return 0;
}
