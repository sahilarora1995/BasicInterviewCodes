/*
Problem Statement:
---------------------
To find intersection of 2 sorted arrays

Core Logic:
---------------------
1) Use two index variables i and j, initial values i = 0, j = 0
2) If arr1[i] is smaller than arr2[j] then increment i.
3) If arr1[i] is greater than arr2[j] then increment j.
4) If both are same then print any of them and increment both i and j.

Time Complexity:
-----------------------
o(n)

References:
------------------------
https://www.geeksforgeeks.org/union-and-intersection-of-two-sorted-arrays-2/
http://www.cplusplus.com/

*/
#include<iostream>
#define ll int
#define debug(x) cout << x;
#define size(a) sizeof(a)/sizeof(a[0])
using namespace std;

findIntersection(ll a1[],ll a2[], ll n1,ll n2)
{
	for(ll i=0,j=0; i<n1,j<n2;)
	{
		if(a1[i]<a2[j]) i++;
		else if(a1[i]>a2[j]) j++; 
		else
		{
			debug(a1[i]);
			i++;j++;
		}
	}
}
int main()
{
	ios::sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	ll a1[]= {1,2,3,4,5};
	ll a2[]= {2,3,4};
	ll n1=size(a1);
	ll n2=size(a2);
	findIntersection(a1,a2,n1,n2); 
	return 0;
}
