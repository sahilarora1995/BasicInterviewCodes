/*
Problem Statement:
----------------------
Given a number n, find the smallest number that has same set of digits as n and is greater
than n. If x is the greatest possible number with its set of digits, then print “not possible”.

Core Logic:
----------------------
Following are few observations about the next greater number.
1) If all digits sorted in descending order, then output is always “Not Possible”.
 For example, 4321.
2) If all digits are sorted in ascending order, then we need to swap last two digits.
 For example, 1234.
3) For other cases, we need to process the number from rightmost side (why? because
 we need to find the smallest of all greater numbers)
Following is the algorithm for finding the next greater number.
(I) Traverse the given number from rightmost digit, keep traversing till you find
 a digit which is smaller than the previously traversed digit. For example, 
if the input number is “534976”, we stop at 4 because 4 is smaller than next digit 9.
If we do not find such a digit, then output is “Not Possible”.
(II) Now search the right side of above found digit ‘d’ for the smallest digit greater than ‘d’.
For “534976?, the right side of 4 contains “976”. The smallest digit greater than 4 is 6.
(III) Swap the above found two digits, we get 536974 in above example.
IV) Now sort all digits from position next to ‘d’ to the end of number. The number
that we get after sorting is the output. For above example, we sort digits in bold
536974. We get “536479” which is the next greater number for input 534976.

Time Complexity:
----------------------
O(n).

References:
----------------------
https://www.geeksforgeeks.org/find-next-greater-number-set-digits/
http://www.cplusplus.com/
*/
#include<iostream>
#include<algorithm>
#include<cstring>
#define ll int
#define debug(x) cout << x <<" ";
#define size(a) sizeof(a)/sizeof(a[0])
using namespace std;


void swap(char *a, char *b) 
{ 
    char temp = *a; 
    *a = *b; 
    *b = temp; 
} 

void nextGreatestInteger(char a[],int n)
{
	ll i=n-1;ll j;
	while(i-->0)
	{
		if(a[i]>a[i-1]) break;
    }
	if(i==0)
	{
		cout<<"not possible"; return;
	}
	
	ll swapp=a[i-1]; ll smallest=i;
	for(j=i+1;j<n;j++)
	if(a[j]>swapp && a[j]< a[smallest]) smallest=j;
	
	swap(&a[smallest],&a[i-1]);
	sort(a+i,a+n);
	debug(a);
return;	
}
int main()
{
	ios::sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	char a[]="976";
	 int n = strlen(a); 
	nextGreatestInteger(a,n);
	
	return 0;
	
}

