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


hexadecimaltoDecimal(string n)
{
    int len = n.length(); 
    int base = 1; 
      
    int dec_val = 0; 
    for (int i=len-1; i>=0; i--) 
    {     
        if (n[i]>='0' && n[i]<='9') 
        { 
            dec_val += (n[i] - 48)*base; 
            base = base * 16; 
        } 
        else if (n[i]>='A' && n[i]<='F') 
        { 
            dec_val += (n[i] - 55)*base; 
            base = base*16; 
        } 
    } 
      
    debug(dec_val); 
} 
START
{
	IO1 IO2 IO3;
	string n;
	cin>>n;
	hexadecimaltoDecimal(n);
	return 0;
}
