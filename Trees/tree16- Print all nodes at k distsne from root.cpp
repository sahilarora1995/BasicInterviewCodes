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

void print_at_k_distancefromroot(Node *r,int k)
{
    if(r==NULL)
    return ; 
    
    if ( k==0) cout<<r->key<< " - ";
    
    else
    {
    print_at_k_distancefromroot(r->left,k-1);
    print_at_k_distancefromroot(r->right,k-1);
	}
}

int main()
{
	Node * root= add_node(10);
	root->left=add_node(20);
	root->right=add_node(30);
	root->right->left=add_node(25);
	root->right->right=add_node(35);
	print_at_k_distancefromroot(root,0);
	return 0;
}

