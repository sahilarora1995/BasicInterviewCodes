/*
Problem Statement:
-----------------------
Given a number n, find the smallest number that has same set of digits as n and is greater than 
n. If n is the greatest possible number with its set of digits, then print “not possible”.

Core Logic:
---------------------
Following is the algorithm for finding the next greater number.
I) Traverse the given number from rightmost digit, keep traversing till you find a digit which is 
smaller than the previously traversed digit. For example, if the input number is “534976”, we stop 
at 4 because 4 is smaller than next digit 9. If we do not find such a digit, then output is “Not Possible”.

II) Now search the right side of above found digit ‘d’ for the smallest digit greater than ‘d’. For “534976?, 
the right side of 4 contains “976”. The smallest digit greater than 4 is 6.

III) Swap the above found two digits, we get 536974 in above example.

IV) Now sort all digits from position next to ‘d’ to the end of number. The number that we get after sorting 
is the output. For above example, we sort digits in bold 536974. We get “536479” which is the next greater 
number for input 534976.

Time Complexity:
---------------------
o(n)

References:
----------------------
https://www.geeksforgeeks.org/find-next-greater-number-set-digits/
http://www.cplusplus.com/
*/

#include<iostream>
#include<algorithm>
#include<cstring>
#include<bits/stdc++.h>
#define ll int
#define debug(x) cout << x<< " ";
#define size(a) sizeof(a)/sizeof(a[0])
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
using namespace std;

nextGreaterNumner(char num[]) // while working with integers crete charcter array instead of using % and /.
{
	ll n= strlen(num);  // returns # of characters present in a string includes null too
	int max= num[n-1];
	ll i;
	for(i=n-1;max<=num[i] && i>0;i--);
	if(i==0) { debug("no greatest number"); 
	exit(0);}
	else
	{
		swap(num[i], num[n-1]);
		sort(num+i+1, num+n); // sort function ending boundary should be n not n-1;
	}
	debug(num);
}
START
{
	ios::sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	char number[] ="4321";
	nextGreaterNumner(number);
	return 0;
}
