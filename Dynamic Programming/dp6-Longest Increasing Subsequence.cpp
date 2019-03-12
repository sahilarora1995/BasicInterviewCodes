/* 
Problem Statement:
-----------------------
The Longest Increasing Subsequence (LIS) problem is to find the length
of the longest subsequence of a given sequence such that all elements
of the subsequence are sorted in increasing order. 

Core Logic:
------------------------
Let arr[0..n-1] be the input array and L(i) be the length 
of the LIS ending at index i such that arr[i] is the last element of the LIS.
Then, L(i) can be recursively written as:
L(i) = 1 + max( L(j) ) where 0 < j < i and arr[j] < arr[i]; or
L(i) = 1, if no such j exists.
To find the LIS for a given array, we need to return max(L(i)) where 0 < i < n.
Thus, we see the LIS problem satisfies the optimal substructure
property as the main problem can be solved using solutions to subproblems.

Time Complexity:
------------------------
0(N^2) 

References:
-----------------------
https://www.geeksforgeeks.org/longest-increasing-subsequence-dp-3/
https://github.com/mission-peace/interview
http://www.cplusplus.com/
*/
#include<iostream>
using namespace std;
int findmax(int a[],int n)
{
	int max=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(a[i]>max) max=a[i];
	}
	return max;
	
}
int main()
{
	int a[]={10,22,9,33,21,50,41,60};
	int n=sizeof(a)/sizeof(a[0]);
	int l[n];
	for(int i=0;i<n;i++)
	l[i]=1;
	
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[i]>a[j]&& l[i]<l[j]+1)
			{
				l[i]=l[j]+1;
			}
		}
	}
	
	cout<<findmax(l,n);
	return 0;
}
