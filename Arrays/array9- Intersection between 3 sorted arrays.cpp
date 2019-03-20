/*
Problem Statement:
---------------------
To find intersection of 3 sorted arrays

Core Logic:
---------------------
Let the current element traversed in ar1[] be x, in ar2[] be y and in ar3[] be z. We can have following cases inside the loop.
1) If x, y and z are same, we can simply print any of them as common element and move ahead in all three arrays.
2) Else If x < y, we can move ahead in ar1[] as x cannot be a common element.
3) Else If y and y > z), we can simply move ahead in ar3[] as z cannot be a common element.

Time Complexity:
-----------------------
o(n)

References:
------------------------
https://www.geeksforgeeks.org/find-common-elements-three-sorted-arrays/
http://www.cplusplus.com/
*/
#include<iostream>
#define ll int
#define debug(x) cout << x << " ";
#define size(a) sizeof(a)/sizeof(a[0])
using namespace std;

findIntersection(ll a1[],ll a2[],ll a3[], ll n1,ll n2,ll n3)
{
	for(ll i=0,j=0,k=0; i<n1,j<n2,k<n3;)
	{
		if(a1[i]==a2[j] && a2[j]==a3[k])
		{
		 debug(a1[i]);
		 i++; j++;k++;
	    }
		if(a1[i]<a2[j]) i++;
		else if(a3[k]>a2[j]) j++; 
		else k++;
	}
}
int main()
{
	ios::sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	ll a1[]= {1,5,10,20,40,80};
	ll a2[]= {6,7,20,80,100};
	ll a3[]= {3,4,15,20,30,70,80,120};
	ll n1=size(a1);
	ll n2=size(a2);
	ll n3=size(a3);
	findIntersection(a1,a2,a3,n1,n2,n3); 
	return 0;
}
