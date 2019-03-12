/* 
Problem Statement:
-----------------------
How to determine if a binary tree is height-balanced?
Core Logic:
------------------------
A tree where no leaf is much farther away from the root than any other leaf.
Different balancing schemes allow different definitions of “much farther”
and different amounts of work to keep them balanced.
Consider a height-balancing scheme where following conditions should be checked
to determine if a binary tree is balanced.
An empty tree is height-balanced. A non-empty binary tree T is balanced if:
1) Left subtree of T is balanced
2) Right subtree of T is balanced
3) The difference between heights of left subtree and right subtree is not more than 1.

Time Complexity:
------------------------
0(N^2) , can be further optmized to linear time by calculating height simultaneously.

Space complexity
------------------------
0(n)

References:
-----------------------
https://www.geeksforgeeks.org/how-to-determine-if-a-binary-tree-is-balanced/
https://github.com/mission-peace/interview
http://www.cplusplus.com/

*/
#include<iostream>
using namespace std;

struct tree
{
	int key;
	struct tree *left;
	struct tree *right;
};

tree * push(int key)
{
	struct tree *new_node= new tree;
	new_node->left=NULL;
	new_node->right=NULL;
	return new_node;
}

int height(struct tree *r)
{
	if(!r) return 0;
	int l=height(r->left);
	int r1=height(r->right);
	return 1+ (l>r1? l:r1);
}

bool isbalanced(struct tree *r)
{
	if(!r) return 1;
	
	int lh=height(r->left);
	int rh=height(r->right);
	if(abs(lh-rh)<=1 && isbalanced(r->left)&& isbalanced(r->right))
	return 1;
	
	return 0;
}
int main()
{
   struct tree *root = push(1); 
    root->left = push(2); 
    root->right = push(3); 
    root->left->left = push(4); 
    root->left->right = push(5); 
    root->left->left->left = push(8); 
  isbalanced(root)?cout<<"balanced":cout<<"not balanced";
	
	return 0;
}
