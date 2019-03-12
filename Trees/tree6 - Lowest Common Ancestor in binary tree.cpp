#include<iostream>
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

int lowest_common_ancestor(Node *r,Node  *n1, Node *n2)
{
    if(r==NULL)
    return 0; 
    
    if(r== n1 || r==n2) return r->key;
    
    int left = lowest_common_ancestor(r->left,n1, n2);
    int right = lowest_common_ancestor(r->right,n1, n2);  
	
	if(left !=0 && right != 0)  return r->key; 
	
	
	if(left ==0 && right== 0) return 0;
	
	else
	return left!= 0 ? left :right;
	
}

int main()
{
	Node * root= add_node(10);
	root->left=add_node(20);
	root->right=add_node(30);
	root->right->left=add_node(25);
	root->right->right=add_node(35);
	cout<< lowest_common_ancestor(root,root->right->left,root->right->right);
	return 0;
}

