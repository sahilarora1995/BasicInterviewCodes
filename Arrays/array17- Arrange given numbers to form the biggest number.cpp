/*
Author: Sahil Arora

Problem Statement:
-------------------
Given an array of numbers, arrange them in a way that yields the largest value.
For example, if the given numbers are {54, 546, 548, 60}, the arrangement 6054854654
gives the largest value. And if the given numbers are {1, 34, 3, 98, 9, 76, 45, 4},
then the arrangement 998764543431 gives the largest value.
 
Core Logic:
------------------
The idea is to use any comparison based sorting algorithm. In the used sorting algorithm,
instead of using the default comparison, write a comparison function myCompare() and 
use it to sort numbers. Given two numbers X and Y, how should myCompare() decide which 
to put first – we compare two numbers XY (Y appended at the end of X) and YX (X appended at 
the end of Y). If XY is larger, then X should come before Y in output, else Y should come before. 
For example, let X and Y be 542 and 60. To compare X and Y, we compare 54260 and 60542. Since 60542 
is greater than 54260, we put Y first.

Time Complexity:
-----------------
0(n)

References:
-----------------
https://www.geeksforgeeks.org/given-an-array-of-numbers-arrange-the-numbers-to-form-the-biggest-number/
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

ll myCompare(string X, string Y) 
{ 
	string XY = X.append(Y); 
	string YX = Y.append(X); 

	
	return XY.compare(YX) > 0 ? 1: 0; 
} 
printLargest(vector<string> arr) 
{ 
	
	sort(arr.begin(), arr.end(), myCompare); 

	for (int i=0; i < arr.size() ; i++ ) 
		cout << arr[i]; 
} 


START
{
	IO1 IO2 IO3;
	vector<string> arr; 
	arr.push_back("54"); 
	arr.push_back("546"); 
	arr.push_back("548"); 
	arr.push_back("60"); 
	printLargest(arr); 
return 0; 
} 

