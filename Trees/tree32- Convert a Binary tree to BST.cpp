/* 
Problem Statement:
-------------------
Given a Binary Tree, convert it to a Binary Search Tree. The 
conversion must be done in such a way that keeps the original 
structure of Binary Tree.

Core Logic:
-------------------
Following is a 3 step solution for converting Binary tree to Binary Search Tree.
1) Create a temp array arr[] that stores inorder traversal of the tree. This step takes O(n) time.
2) Sort the temp array arr[]. Time complexity of this step depends upon the sorting algorithm. 
In the following implementation, Quick Sort is used which takes (n^2) time. This can be 
done in O(nLogn) time using Heap Sort or Merge Sort.
3) Again do inorder traversal of tree and copy array elements to tree nodes one by one. 
This step takes O(n) time.

Time Complexity:
---------------------
o(n)

References:
---------------------
https://www.geeksforgeeks.org/binary-tree-to-binary-search-tree-conversion/
http://www.cplusplus.com/
*/

#include<iostream>
#include<algorithm>
#include<cstring>
#include<bits/stdc++.h>
#define ll int
#define debug(x) cout << x <<" ";
#define size(a) sizeof(a)/sizeof(a[0])
#define pii pair<int,int>
#define F first
#define S second
#define WL(i,s) while(i<s.length())
#define MAX INT_MAX

using namespace std;
struct node
{
	int data;
	struct node*left;
	struct node*right;
};

node* push(int data)
{
	node* new_node=new node;
	new_node->data= data;
	new_node->left= new_node->right=NULL;
	return new_node;
}

int countnodes(struct node *root)
{
	if(!root) return 0;
	return ((countnodes(root->left)) + countnodes((root->right))+1);
}
void storeInorder(node*root,int order[],int *ptr)
{
	if(!root) return;
	storeInorder(root->left,order,ptr);
	order[*ptr]= root->data; (*ptr)++;
	storeInorder(root->right,order,ptr);
}

void arraytoBST(int a[],node*root,int *ptr)
{
	if(!root) return;
	arraytoBST(a,root->left,ptr);
	root->data= a[*ptr]; (*ptr)++;
	arraytoBST(a,root->right,ptr);
}

int compare(const void *a,const void *b)
{
	return (*(int *)a-  *(int*)b);
}
void	binarytreeBSTconversion(struct node* root)
{
	if(!root) return;
	ll n= countnodes(root);
	ll arr[n];ll i=0;
	storeInorder(root,arr,&i);
	qsort(arr,n,sizeof(arr[0]),compare); i=0;
	arraytoBST(arr,root,&i);
}

void printInorder(node*root)
{
	if(!root) return;
	printInorder(root->left);
	debug(root->data)
	printInorder(root->right);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	node*root=push(10);
	root->left=push(2);
	root->left->left=push(8);
	root->left->right=push(4);
	root->right=push(7);
	binarytreeBSTconversion(root);
	printInorder(root);
	return 0;
}
