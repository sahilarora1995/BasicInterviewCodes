/*
Author:
Sahil Arora.

Problem Statement:
---------------------
Write a function to print spiral order traversal of a tree.

Core Logic:
---------------------
The idea is to use two stacks. We can use one stack for printing from left to right 
and other stack for printing from right to left. In every iteration, we have nodes of 
one level in one of the stacks. We print the nodes, and push nodes of next level in 
other stack.

Time Complexity:
---------------------
o(n)

References:
----------------------
https://www.geeksforgeeks.org/level-order-traversal-in-spiral-form/
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
#define MID(l,h) (l+(h-l))/2
#define NODE struct node*
#define START signed main()
#define STACK stack<node*> 
#define TR temp->right
#define TL temp->left
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
void spiralPrinting( NODE root)
{
	if(!root) return;
	STACK s1;
	STACK s2;
	s1.push(root);
	while(!s1.empty() || !s2.empty())
	{
		while(!s1.empty())
		{
		NODE temp= s1.top();
		s1.pop();
		debug(temp->data);
		if(TR) s2.push(TR);
		if(TL) s2.push(TL);
	    }
	    while(!s2.empty())
		{
		NODE temp= s2.top();
		s2.pop();
		debug(temp->data);
		if(TL) s1.push(TL);
		if(TR) s1.push(TR);
	    }
	}	
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
	spiralPrinting(root);
}
