/*
Problem Statemeent:
Count Inversions in an array
----------------------------
Inversion Count for an array indicates – how far (or close) the array is from being sorted.
If array is already sorted then inversion count is 0. If array is sorted in reverse order 
that inversion count is the maximum. 
Formally speaking, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j

Core Logic:
---------------------------
Suppose we know the number of inversions in the left half and right half of the array
(let be inv1 and inv2), what kinds of inversions are not accounted for in Inv1 + Inv2?
The answer is – the inversions we have to count during the merge step. 
Therefore, to get number of inversions, we need to add number of inversions in left
subarray, right subarray and merge().

In merge process, let i is used for indexing left sub-array and j for right sub-array. 
At any step in merge(), if a[i] is greater than a[j], then there are (mid – i) inversions.
because left and right subarrays are sorted, so all the remaining elements in left-subarray
(a[i+1], a[i+2] … a[mid]) will be greater than a[j]


References:
---------------------------
https://www.geeksforgeeks.org/counting-inversions/
https://github.com/mission-peace/interview
http://www.cplusplus.com/

Time complexity
---------------------------
O(nlogn)

Space Complexity
--------------------------
O(n)

*/
#include<iostream>
using namespace std;

//Core logic to find onversion during merging process
int merge(int a[],int temp[], int l,int mid,int r)
{
	int merge_count=0;
	int i,j,k;
	i=l;
	j=mid;
	k=l;
	//Traverse until subarray and right subarray is completely explored
	while((i<=mid-1)&& (j<=r))
	{
		//its not an inversion then simply copy into temp array
		if(a[i]<=a[j])
		{
			temp[k++]=a[i++];
		}
		//if its an inversion update temp and increment the inversion count 
		else
		{
			temp[k++]= a[j++];
			merge_count= merge_count+ (mid-i);
		}
	}
	
	//if some elements are left inside lkeft subarray, copy them
	while(i<=mid-1) temp[k++]= a[i++];
	
	//similarly update remaining elements of right subarray
	while(j<=r) temp[k++]=a[j++];
	
	//copy temp array into oiur original array
	for(int f=l;f<=r;f++)
	a[f]=temp[f];

	
	return merge_count;
}


int mergesort(int a[], int temp[], int l, int r)
{
	int inv=0;
	int mid;
	
	//loop until right end > left end
	if(r > l)
	{
	    mid=(r+l)/2;
	    //recursively calling for left and right subarray (Power of D&C)
		inv= mergesort(a,temp,l,mid);
		inv+= mergesort(a,temp,mid+1,r);
		inv+= merge(a,temp,l,mid+1,r);		
   }
   return inv;
}
int countInversion(int a[],int n)
{
	int *temp = new int[sizeof(int)*n];
	return mergesort(a,temp,0,n-1);
	
}

//Driver Function
int main()
{
	int a[]= { 5,4,3,2,1}; 
	cout<<countInversion(a,5);
	return 0;
	
}
