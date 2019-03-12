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
    
    if(r-> key > (n1->key > n2->key ? n1->key : n2->key))
    lowest_common_ancestor(r->left,n1,n2);
    
     if(r-> key > (n1->key < n2->key ? n1->key : n2->key))
    lowest_common_ancestor(r->right,n1,n2);

    else 
    return r->key;
      
	
	
}

int main()
{
	Node * root= add_node(10);
	root->left=add_node(20);
	root->right=add_node(30);
	cout<< lowest_common_ancestor(root,root->left,root->right);
	return 0;
}

