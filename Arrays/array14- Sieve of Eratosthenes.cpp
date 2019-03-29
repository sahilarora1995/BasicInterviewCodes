/* 
Problem Statement:
--------------------
Given a number n, print all primes smaller than or equal to n. It is also given that n is a small number.

Core Logic:
--------------------
Following is the algorithm to find all the prime numbers less than or equal to a given integer n 
by Eratosthenes’ method:

Create a list of consecutive integers from 2 to n: (2, 3, 4, …, n).
Initially, let p equal 2, the first prime number.
Starting from p2, count up in increments of p and mark each of these numbers greater than or equal 
to p2 itself in the list. These numbers will be p(p+1), p(p+2), p(p+3), etc..
Find the first number greater than p in the list that is not marked. If there was no such number, 
stop. Otherwise, let p now equal this number (which is the next prime), and repeat from step 3.

Time Complexity:
---------------------
O(n*log(log(n)))

References:
---------------------
https://www.geeksforgeeks.org/sieve-of-eratosthenes/
http://www.cplusplus.com/
*/
#include<iostream>
#include<algorithm>
#include<cstring>
#include<bits/stdc++.h>
#include<bits/stdc++.h> 
#define ll int
#define debug(x) cout << x<< " ";
#define size(a) sizeof(a)/sizeof(a[0])
#define pii pair<int,int>
#define F first
#define S second
#define WL(i,s) while(i<s.length())
#define MAX INT_MAX
#define MIN INT_MIN
#define FL(i) for(i=0;i<=n;i++)
#define MID(l,h) (l+h)/2
#define NODE struct node*
#define START signed main()

using namespace std;

void SieveofEratosthenes(ll n)
{
	bool prime[n+1]; ll i;
	FL(i)
	prime[i]= true;
    for (ll p=2; p*p<=n; p++) 
    { 
        if (prime[p]) 
        { 
            for (ll i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
  
    for (ll p=2; p<=n; p++) 
       if (prime[p]) 
         debug(p);
} 
		
START
{
	ll n;
	debug("Enter n: ");
	cin>>n;
	SieveofEratosthenes(n);
	
}
