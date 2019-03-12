/*
Problem Statement:
Given an array that represents elements of arithmetic progression in order.
One element is missing in the progression, find the missing number.

Assumptions:
1: Exactly 1 missing element should be there.
2- Commonn difference should be an integer
3- May give wrong results if no missing number.

Core Logic:
The idea is to go to the middle element. Check if the difference between middle
and next to middle is equal to diff or not, if not then the missing element lies
 between mid and mid+1. If the middle element is equal to n/2th term in Arithmetic
Series (Let n be the number of elements in input array), then missing element 
lies in right half. Else element lies in left half.

Time Complexity:
O(logn)

Space Complexity:
O(1)

Technique Used:
Divide and conquer

References:
https://www.geeksforgeeks.org/find-missing-number-arithmetic-progression/
https://github.com/mission-peace/interview
http://www.cplusplus.com/
*/

#include<iostream>
using namespace std;

//core logic
int missingtermAP(int a[],int l,int h,int d)
{
	int mid= l + (h-l)/2;
	
	//checking around middle in a hope to get missing element
	if(a[mid+1]- a[mid] != d)
	return (a[mid]+ d);
	
	else if (mid >0 && a[mid]-a[mid-1]!= d)
	return (a[mid-1]+d);
	
	//if sequences from index 0 to mid is already in ap then it must be in right half
	else if(a[mid]== a[0]+ mid*d)
	
	return missingtermAP(a,mid+1,h,d);
	
	//checking in left half ( terminating case)
	return missingtermAP(a,l,mid-1,d);
}

int main()
{
	int a[]= {2, 4, 8, 10, 12, 14};
	cout<<missingtermAP(a,0,5,2);   
	//I have hardcoided the values of common dfferecnes and value of n we can find both 
	//using basics of maths 
	return 0;
}
