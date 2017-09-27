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

void delete_allnodes(Node *r)
{
    if(r==NULL)
    return; 
    delete_allnodes(r->left);
    delete_allnodes(r->right);
    cout<<"Deleting using post order traversal "<<r->key<<endl;
    delete r;
	
}


int main()
{
	Node * root= add_node(10);
	root->left=add_node(20);
	root->right=add_node(30);
	delete_allnodes(root);
	cout<<"All nodes are deleted Mission successful!";

	return 0;
}
