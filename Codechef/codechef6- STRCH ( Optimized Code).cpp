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
#define ch(s,i) char s[i*10000] 
#define io  ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);

using namespace std;
START
{

    io
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,temp=0,f=0;
        ch(s,1); ch(s1,1);
        cin>>n;
        cin>>s;
        cin>>s1;
		    for(ll j=0;j<n;j++)
		    {
		        if(s[j]==s1[0])
		        {
		        f=j+1;
		        }
		        temp=temp+f;
		    }
		    debug(temp);
    }
    return 0;
}
