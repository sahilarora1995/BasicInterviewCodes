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


bool identical_trees(Node *p1,Node *p2)
{
	if(p1==NULL && p2== NULL)   return 1;
	
	while(p1!=NULL && p2!=NULL)
	{
		if(p1->key == p2->key && identical_trees(p1->left,p2->left) && identical_trees(p1->right,p2->right))
		return 1;
		
		else return 0;
	}
}
int main()
{
	Node * root1= add_node(10);
	root1->left=add_node(20);
	root1->right=add_node(30);

    
	Node * root2= add_node(10);
	root2->left=add_node(200);
	root2->right=add_node(30);
		
	// 1 depicts idential 0 depicts non identical
	cout<<identical_trees(root1,root2);
	return 0;
}
