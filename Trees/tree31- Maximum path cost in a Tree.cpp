/*
Problem Statement:
---------------------------
Given a binary tree, find the maximum path sum. The path may start and end at any node in the tree.

Core logic:
------------------------
or each node there can be four ways that the max path goes through the node:
1. Node only
2. Max path through Left Child + Node
3. Max path through Right Child + Node
4. Max path through Left Child + Node + Max path through Right Child

The idea is to keep trace of four paths and pick up the max one in the end.
An important thing to note is, root of every subtree need to return maximum
path sum such that at most one child of root is involved. This is needed 
for parent function call. In below code, this sum is stored in ‘max_single’ 
and returned by the recursive function.

Time Complexity:
-----------------------
0(n)

References:
------------------------
https://www.geeksforgeeks.org/find-maximum-path-sum-in-a-binary-tree/

*/
#include<iostream>
#define max(a,b) (a>b?a:b)
#define debug(x) cout << x;
using namespace std;

struct tree
{
	int key;
	tree * left;
	tree * right;
};
struct tree* newNode(int data) 
{ 
    struct tree* newNode = new tree; 
    newNode->key = data; 
    newNode->left = newNode->right = NULL; 
    return (newNode); 
} 
 

int findmax(struct tree * r,int &res)
{
	if(!r) return 0;
	int l=findmax(r->left,res);
	int ri=findmax(r->right,res);
	int max_s=max(max(l,ri)+r->key,r->key);
	int max_t=max(max_s,l+ri+r->key);
	res=max(res,max_t);	
	return max_s;
}
int main()
{
	ios::sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	struct tree *root = newNode(10); 
    root->left        = newNode(2); 
    root->right       = newNode(10); 
    root->left->left  = newNode(20); 
    root->left->right = newNode(1); 
    root->right->right = newNode(-25); 
    root->right->right->left   = newNode(3); 
    root->right->right->right  = newNode(4); 	
	int res=INT_MIN;
	findmax(root,res);
	debug(res);		
	return 0;
}
