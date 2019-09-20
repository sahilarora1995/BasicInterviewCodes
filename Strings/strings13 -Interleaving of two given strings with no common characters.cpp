/*
Author: Sahil Arora
*/
#include<iostream>
#include<algorithm>
#include<cstring>
#include<bits/stdc++.h>
#define ll int
#define debug(x) cout << x<< " ";
#define pii pair<int,int>
#define F first
#define S second
#define WL(i,s) while(i<s.length())
#define MAX INT_MAX
#define MID(l,h) (l+(h-l))/2
#define NODE struct node*
#define START signed main()
#define STACK stack<node*>
#define TR temp->right
#define TL temp->left
#define SIZE(a) sizeof(a)/sizeof(a[0])
#define CH char
#define IO1  ios::sync_with_stdio(0);
#define IO2    cin.tie(0);
#define IO3 	cout.tie(0);
#define FL(a,b) for(ll i=a;i<b;i++)
#define BR cout<<endl;
using namespace std;

bool interLeaving(string s1, string s2, string tar)
{
    if(tar.length()!=(s1.length()+s2.length())) return false;
    unordered_map<char,int> u1;
    unordered_map<char,int> u2;
    for(int i=0;i<s1.length();i++)
        u1[s1[i]]++;


    for(int i=0;i<s2.length();i++)
        u1[s2[i]]++;

    for(int i=0;i<tar.length();i++)
    {
        if(u1[tar[i]]==0) return false;
    }
    return true;
}
START
{
	IO1 IO2 IO3;
    string s1="AB";
    string s2="CD";
    string tar="ACFBD";
    debug(interLeaving(s1,s2,tar));
	return 0;
}
