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

void display(Node *r)
{
    if(r==NULL)
    return; 
	cout<<r->key<<endl;
	cout<<r->left->key;
	
}

int main()
{
	Node * root= add_node(10);
	root->left=add_node(20);
	root->right=add_node(30);
	display(root);
	return 0;
}
