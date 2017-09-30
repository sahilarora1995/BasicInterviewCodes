#include<iostream>
#include<limits>
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

bool is_binarytree_bst(Node *r,int minn, int maxx)
{
    if(r==NULL)
    return 1; 
    
    if(r->key > maxx || r->key < minn) return 0;
     
     return is_binarytree_bst(r->left,minn, r->key) && 
            is_binarytree_bst(r->right,r->key, maxx);	
}

int main()
{
	Node * root= add_node(10);
	root->left=add_node(2);
	root->right=add_node(30);
	root->right->left=add_node(25);
	root->right->right=add_node(35);
	int min=std::numeric_limits<int>::min();
	int max=std::numeric_limits<int>::max();
	cout<<is_binarytree_bst(root,min,max);
    
	return 0;
}

