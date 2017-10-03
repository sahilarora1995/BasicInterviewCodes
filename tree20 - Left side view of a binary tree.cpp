#include<iostream>
#include<queue>
using namespace std;
struct Node
{
	int key;
	Node *left;
	Node *right;
};

Node * add_node(int key)
{
	Node*new_node=new Node;
	new_node->key=key;
	new_node->left=new_node->right=NULL;
	return new_node;
}

  
   void leftViewUtil( Node *root, int level, int *max_level)
{
    // Base Case
    if (root==NULL)  return;
 
    // If this is the first node of its level
    if (*max_level < level)
    {
       cout<<root->key<< "  ";
        *max_level = level;
    }
 
    // Recur for left and right subtrees
    leftViewUtil(root->left, level+1, max_level);
    leftViewUtil(root->right, level+1, max_level);
}
 



int main()
{
	Node * root= add_node(10);
	root->left=add_node(12);
	root->right=add_node(30);
	root->right->left=add_node(25);
	root->right->right=add_node(40);
	int max=0;
	 leftViewUtil(root,1,&max);
	return 0;
}

    
    	



