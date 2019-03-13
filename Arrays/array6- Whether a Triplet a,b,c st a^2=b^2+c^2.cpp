/*
Problem Statement:
-----------------------
Given an array of integers, write a function that returns 
true if there is a triplet (a, b, c) that satisfies a2 + b2 = c2.

Core Logic:
--------------------
We can solve this in O(n2) time by sorting the array first.

1) Do square of every element in input array. This step takes O(n) time.

2) Sort the squared array in increasing order. This step takes O(nLogn) time.

3) To find a triplet (a, b, c) such that a2 = b2 + c2, do following.

Fix ‘a’ as last element of sorted array.
Now search for pair (b, c) in subarray between first element and ‘a’.
A pair (b, c) with given sum can be found in O(n) time using meet in
middle algorithm discussed in method 1 of this post.
If no pair found for current ‘a’, then move ‘a’ one position back and repeat step 3.2.

Time Complexity
----------------------
O(n^2).

References:
----------------------
https://www.geeksforgeeks.org/find-pythagorean-triplet-in-an-unsorted-array/
http://www.cplusplus.com/
https://github.com/mission-peace/interview
*/
#include<iostream>
#include<algorithm>
using namespace std;

bool findTriplet(int arr[],int n)
{
	
	sort(arr,arr+n);
	for(int i=0;i<n;i++)
	arr[i]=arr[i]*arr[i];
	
	for(int a=n-1;a>=2;a--)
	{
		
		int b=0;
		int c=a-1;
 		while(b<c)
     	{
     		if(arr[b]+arr[c]==arr[a])
     		return true;
     		
     		else if(arr[b]+ arr[c] <arr[a])
     		b++;
     		else
     		c++;
			
		}
	}
	return false;
}
int main()
{
	int a[]={3,4,5};
	int n=sizeof(a)/sizeof(a[0]);
	findTriplet(a,n)?cout<<"triplet is present":cout<<"triplet not present";
	return 0;
}
