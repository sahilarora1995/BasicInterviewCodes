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

  
   int number_leaves( Node *root)
{
    // Base Case
    if (root==NULL)  return 0;
 
    if(!root->left && !root->right ) return 1;
    
    return number_leaves(root->left) + number_leaves(root->right);
}
 



int main()
{
	Node * root= add_node(10);
	root->left=add_node(12);
	root->right=add_node(30);
	root->right->left=add_node(25);
	root->right->right=add_node(40);
	cout<<"  "<<number_leaves(root);
	return 0;
}

    
    	



