/* 
Problem Statement:
-------------------
Given a sorted array. Write a function that creates a Balanced Binary Search Tree using array elements.

Core Logic:
-------------------
1) Get the Middle of the array and make it root.
2) Recursively do same for left half and right half.
      a) Get the middle of left half and make it left child of the root
          created in step 1.
      b) Get the middle of right half and make it right child of the
          root created in step 1.
Time Complexity:
---------------------
o(n)

References:
---------------------
https://www.geeksforgeeks.org/sorted-array-to-balanced-bst/
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
#define FL(i) for(i=0;i<n;i++)
#define MID(l,h) (l+h)/2
#define NODE struct node*
#define START signed main()

using namespace std;

struct node
{
	ll data;
	NODE left;
	NODE right;
};
NODE push(ll data)
{
	NODE new_node=new node;
	new_node->data=data;
	new_node->left=new_node->right=NULL;
	return new_node;
}

void preOrder(NODE r)
{
	if(!r) return;
	debug(r->data);
	preOrder(r->left);
	preOrder(r->right);
}
NODE sortedarraytoBST(ll a[], ll start, ll end)
{
	if(start>end) return NULL;
	ll mid= MID(start,end);
	NODE root=push(a[mid]);
	root->left=sortedarraytoBST(a,start,mid-1);
	root->right=sortedarraytoBST(a,mid+1,end);
	return root;
}
START
{
	ios::sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	ll a[]= {1,2,3,4,5,6,7};
	ll n=size(a);
	NODE res=sortedarraytoBST(a,0,n-1);
	preOrder(res);
	
}
