#include<iostream>
#include<algorithm>
#include<cstring>
#include<bits/stdc++.h>
#define ll int
#define debug(x) cout << x<<endl;
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
#define st string 

using namespace std;

void substrings(st s,char x)
{
	ll n= s.length(); ll count=0;
	for(ll i=0;i<=n-1;i++)
	{
		for(ll length=1; length <= n-i; length++)
		{
		 size_t found= s.substr(i,length).find(x);
		 if(found!= string::npos)
		 count++;
	    }
	}
	debug(count);
}
bool islowerstring(st s)
{
	for (ll i=0; i<s.length(); i++)
	{
    if (!islower(s[i]))
    return false;
    }
return true;
}
START
{
	ios::sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	ll t,n; st s; char c;
	cin>>t;
	while(t--)
	{
	cin>>n;
	cin>>s;
	cin>>c;
	if(islowerstring(s) && islower(c))
	substrings(s,c);
    }
}
