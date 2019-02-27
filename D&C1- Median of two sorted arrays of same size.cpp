/* 
Problem statement: 
There are 2 sorted arrays A and B of size n each.
Write an algorithm to find the median of the array obtained
after merging the above 2 arrays(i.e. array of length 2n). 
The complexity should be O(log(n)).

Core Logic:
1) Calculate the medians m1 and m2 of the input arrays ar1[] 
   and ar2[] respectively.
2) If m1 and m2 both are equal then we are done.
     return m1 (or m2)
3) If m1 is greater than m2, then median is present in one 
   of the below two subarrays.
    a)  From first element of ar1 to m1 (ar1[0...|_n/2_|])
    b)  From m2 to last element of ar2  (ar2[|_n/2_|...n-1])
4) If m2 is greater than m1, then median is present in one    
   of the below two subarrays.
   a)  From m1 to last element of ar1  (ar1[|_n/2_|...n-1])
   b)  From first element of ar2 to m2 (ar2[0...|_n/2_|])
5) Repeat the above process until size of both the subarrays 
   becomes 2.
6) If size of the two arrays is 2 then use below formula to get 
  the median.
    Median = (max(ar1[0], ar2[0]) + min(ar1[1], ar2[1]))/2
    
References: 
https://www.geeksforgeeks.org/median-of-two-sorted-arrays/
https://github.com/mission-peace/interview
http://www.cplusplus.com/
https://www.programcreek.com/2012/12/leetcode-median-of-two-sorted-arrays-java/    
*/

#include<iostream>
using namespace std;

//Function to give median of sorted array.
int getmedian(int arr[],int n)
{
     if(n%2==0)
	 return (arr[n/2]+ arr[n/2-1])/2;
	 else
	 return arr[n/2];
}
int sortedMedian(int a[],int b[],int n)
{
	//base cases
	if(n<=0) return -1;
	if(n==1) return(a[0]+b[0])/2;
	if(n==2) return ((a[0]>b[0]?a[0]:b[0])+ (a[1]<b[1]?a[1]:b[1]))/2;
	
	//recursive calls to get m1 and m2 ( power of divide and conquer)
	int m1= getmedian(a,n);
	int m2= getmedian(b,n);
	
	//if both medians are same returning anyone of them
	if (m1==m2) return m1;
	
	//if first array median is less than second case
	if(m1<m2)
	{
		//checking of size is a multiple of 2 or not and accordingly calcuate the median.
		if(n%2==0)
		return sortedMedian(a+n/2-1,b,n-n/2+1);
		else
		sortedMedian(a+n/2,b,n-n/2);
	}
	else
	{
		if(n%2==0)
		return sortedMedian(b+n/2-1,a,n-n/2+1);
		else
		return sortedMedian(b+n/2,a,n-n/2);
	}
}
//Driver code
int main()
{
	int a[5]={1,2,3,4,5};
	int b[5]={6,7,8,9,10};
	cout<<sortedMedian(a,b,5);
	return 0;
	
}
