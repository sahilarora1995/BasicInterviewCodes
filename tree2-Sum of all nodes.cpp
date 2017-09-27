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

int sum(Node *r)
{
    if(r==NULL)
    return 0; 
    int  sum_allnodes= r->key + sum(r->left) + sum(r->right);  
	return sum_allnodes;
	
}

int main()
{
	Node * root= add_node(10);
	root->left=add_node(20);
	root->right=add_node(30);
	cout<<sum(root);
	return 0;
}
