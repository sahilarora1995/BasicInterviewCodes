/*
Author:
Sahil Arora.

Problem Statement:
---------------------
Given a Binary Tree and a key, write a function that returns level of the key.

Core Logic:
---------------------
The idea is to start from the root and level as 1. If the key matches with root’s 
data, return level. Else recursively call for left and right subtrees with level 
as level + 1.

Time Complexity:
---------------------
o(n)

References:
----------------------
https://www.geeksforgeeks.org/get-level-of-a-node-in-a-binary-tree/
http://www.cplusplus.com/
*/
#include<iostream>
#include<algorithm>
#include<cstring>
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
ll getLevel(NODE root, ll data, ll level)
{
	if(!root) return 0;
	if(root->data== data) return level;
	if(getLevel(root->left,data,level+1))
    return (getLevel(root->left,data,level+1));
    else
    return (getLevel(root->right,data,level+1));
}
START
{
	ios::sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	NODE root= new node;
	root =push(1);
	root->left=push(2);
	root->right=push(3);
	root->left->left= push(4);
	root->left->right=push(5);
	debug(getLevel(root,5,1));	
}
