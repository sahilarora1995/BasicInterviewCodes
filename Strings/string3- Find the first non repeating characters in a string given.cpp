/* 
Problem Statement:
-------------------
Given a string, find the first non-repeating character in it. For example, 
if the input string is “GeeksforGeeks”, then output should be ‘f’ and if 
input string is “GeeksQuiz”, then output should be ‘G’.

Core Logic:
-------------------
1) Scan the string from left to right and construct the count array.
2) Again, scan the string from left to right and check for count of each
 character, if you find an element who's count is 1, return it.
 
Time Complexity:
---------------------
o(n)

References:
---------------------
https://www.geeksforgeeks.org/given-a-string-find-its-first-non-repeating-character/
http://www.cplusplus.com/
*/

#include<iostream>
#include<algorithm>
#include<cstring>
#include<bits/stdc++.h>
#define ll int
#define debug(x) cout << x;
#define size(a) sizeof(a)/sizeof(a[0])
#define pii pair<int,int>
#define F first
#define S second
#define WL(i,s) while(i<s.length())
#define MAX INT_MAX

using namespace std;
void findFirstnonrepeating(string s)
{
	pii a[256];
	ll i=0; ll mini=INT_MAX;
	WL(i,s)
	{
		a[s[i]].F++;
		a[s[i]].S=i;
		i++;
	}	
 ll res= MAX; 
    for (i = 0; i <256; i++) 
        if (a[i].F == 1) 
            res = min(res, a[i].S); 
debug(s[res]);	
}
int main()
{
	ios::sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	string s="abcdabcdefghjikl";
	findFirstnonrepeating(s);
	return 0;
}

