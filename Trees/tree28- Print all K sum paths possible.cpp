/* Problem Statement
--------------------
A binary tree and a number k are given. Print every path in the tree with
sum of the nodes in the path as k.
A path can start from any node and end at any node and must be downward 
only, i.e. they need not be root node and leaf node; and negative numbers can also be there in the tree.

Core Logic:
---------------------
The basic idea to solve the problem is to do a preorder traversal of the given tree.
We also need a container (vector) to keep track of the path that led to that node.
At each node we check if there are any path that sums to k, if any we print the path
and proceed recursively to print each path.

Time Complexity
---------------------
0(n)

Space complexity
----------------------
0(n)

References:
---------------------
https://www.geeksforgeeks.org/print-k-sum-paths-binary-tree/
https://github.com/mission-peace/interview
http://www.cplusplus.com/

*/
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int key;
	Node *left;
	Node *right;
	 Node(int x) 
    { 
        key = x; 
        left = right = NULL; 
    } 
};



void print(vector<int> p, int j)
{
	for(int m=j;m<p.size();m++)
	{
		cout<<p[m]<<" ";
	}
	cout<<"\n";
}
void printksumpaths(Node * a,vector <int> path,int k)
{
	if(a==NULL) return;
	
	path.push_back(a->key);
	printksumpaths(a->left,path,k);
	printksumpaths(a->right,path,k);
	
	int sum=0;
	
	for(int j=path.size();j>=0;j--)
	{
		sum= sum+path[j];
		if(sum==k)
		print(path,j);
	}
	path.pop_back();
}
int  main()
{
   Node *root = new Node(1); 
    root->left = new Node(3); 
    root->left->left = new Node(2); 
    root->left->right = new Node(1); 
    root->left->right->left = new Node(1); 
    root->right = new Node(-1); 
    root->right->left = new Node(4); 
    root->right->left->left = new Node(1); 
    root->right->left->right = new Node(2); 
    root->right->right = new Node(5); 
    root->right->right->right = new Node(2); 
  
    int k = 5; 
    
    vector<int> path;
    printksumpaths(root,path,k);
	return 0;
}
