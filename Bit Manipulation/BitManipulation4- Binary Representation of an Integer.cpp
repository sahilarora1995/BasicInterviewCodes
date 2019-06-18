/* 
Author: Sahil Arora
Date: 18-06-2019

Problem Statement:
----------------------
Write a program to print Binary representation of a given number.

Core logic:
----------------------
step 1) if NUM > 1
    a) push NUM on stack
    b) recursively call function with 'NUM / 2'
step 2)
    a) pop NUM from stack, divide it by 2 and print it's remainder.
   
Time Complexity
------------------------
o(n)

References:
-----------------------
https://www.geeksforgeeks.org/binary-representation-of-a-given-number/
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
#define STR string
using namespace std;

binaryReprsn( ll n)
{
	if(n>1) binaryReprsn(n/2);
	debug(n%2);
}
START
{
	IO1 IO2 IO3;
	binaryReprsn(10);
	return 0;
}
