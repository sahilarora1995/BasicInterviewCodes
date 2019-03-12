/*Problem Statement:
------------------------
Given an array of integers. Find a peak element in it. An array element is peak if
it is NOT smaller than its neighbors. For corner elements, we need to consider only 
one neighbor. For example, for input array {5, 10, 20, 15}, 20 is the only peak element.
For input array {10, 20, 15, 2, 23, 90, 67}, there are two peak elements: 20 and 90.
Note that we need to return any one peak element.

Core Logic:
----------------------
The idea is Binary Search based, we compare middle element with its neighbors.
If middle element is not smaller than any of its neighbors, then we return it.
If the middle element is smaller than the its left neighbor, then there is always a peak 
in left half (Why? take few examples). If the middle element is smaller than the its
right neighbor, then there is always a peak in right half (due to same reason as left half).

Time Complexity:
----------------------
o(logn)

Space Complexity:
----------------------
O(1)

Technique Used:
----------------------
Divide and Conquer

References:
----------------------

https://www.geeksforgeeks.org/find-a-peak-in-a-given-array/
http://www.cplusplus.com/
https://github.com/mission-peace/interview
*/


#include<iostream>
using namespace std;

//core logic
int peakElement(int a[],int low,int high,int n)
{
	//finding middle(Essence of Divide and conquer).
	int mid = low + (high - low)/2;  
	
	//if peak element is either first or the last element
	if((mid==0|| a[mid-1]<=a[mid])  && (mid==n-1 || a[mid+1]<= a[mid]))	
	return mid;
	
	//if peak element is found in left half of the array( from low --(mid-1) range
	else if(mid >0 && a[mid-1]>a[mid])
	return peakElement(a,low,(mid-1),n);
	
	else
	return peakElement(a,(mid+1),high,n);
}

//Driver code
int main()
{
	int a[]=  {1, 3, 20, 4, 1, 0}; 
	cout<<"peak element is :: "<<a[peakElement(a,0,3,4)];
	return 0;
}

