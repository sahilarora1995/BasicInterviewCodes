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
#define FL(j,n) for(i=0;i<n;i++)
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
using namespace std;

void print2DVector(vector<vector<int>> v)
{
	for(ll i=0;i<v.size();i++)
	{
		for(ll j=0;j<v[i].size();j++)
		debug(v[i][j]);
		
		cout<<endl;
	}
}
bool sortSecond(  vector<int>& v1, 
                vector<int>& v2 ) { 
 return v1[2] < v2[2]; 
} 

START
{
	IO1 IO2 IO3;
	vector<vector<int>> v{{8,2,3},{8,2,1},{0,1,2}};

	print2DVector(v);
	cout<<endl;
	// sort on the basis of first row
	sort(v[0].begin(), v[0].end());
    print2DVector(v);
	cout<<endl;
	
	
	// sort on the basis of first row ( descending order)
    sort(v[0].rbegin(), v[0].rend());
	print2DVector(v);
	
	//sort entire rows on the basis o third column
	sort(v.begin(), v.end(),sortSecond);
	print2DVector(v);
	cout<<endl;
	return 0;
}
