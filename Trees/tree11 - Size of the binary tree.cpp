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
int size=0;
int size_tree(Node *r)
{
    if(r==NULL)
    return 0; 
    
    if(r== NULL && r==NULL) return 1;
    
    else
    {
	 // using preorder traversal
    int l_size= size_tree(r->left) ;
    int r_size= size_tree(r->right) ;
    size++;
    return size;
   }
}

int main()
{
	Node * root= add_node(10);
	root->left=add_node(20);
	root->right=add_node(30);
	root->right->left=add_node(25);
	root->right->right=add_node(35);
	cout<< " "<<size_tree(root);
	return 0;
}

