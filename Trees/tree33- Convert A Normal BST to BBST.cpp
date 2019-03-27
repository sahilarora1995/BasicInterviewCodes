/* 
Problem Statement:
-------------------
Given a BST (Binary Search Tree) that may be unbalanced, convert it into a balanced BST that has minimum possible height.

Core Logic:
-------------------
Traverse given BST in inorder and store result in an array. 
This step takes O(n) time. Note that this array would be sorted as inorder traversal 
of BST always produces sorted sequence.
Build a balanced BST from the above created sorted array using the recursive 
approach. This step also takes O(n) time as we traverse every element exactly 
once and processing an element takes O(1) time.

Time Complexity:
---------------------
o(n)

References:
---------------------
https://www.geeksforgeeks.org/convert-normal-bst-balanced-bst/
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
node *push(ll data)
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

ll a[3]; ll j=0;
void inOrder(NODE r)
{
	if(!r) return;
	inOrder(r->left);
	a[j]=r->data; j++;
	inOrder(r->right);
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
	NODE root=push(30);
	root->left=push(20);
	root->left->left=push(10);
	inOrder(root);
	NODE res=sortedarraytoBST(a,0,2);	
    preOrder(res);
	return 0;
}
