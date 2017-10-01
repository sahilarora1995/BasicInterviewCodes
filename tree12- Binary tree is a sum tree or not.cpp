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

 bool tree(Node *r)
 {
 	if(r==NULL ) return 1;
 	
 	if(r->left ==NULL && r->right== NULL) return 1;
 	
 	int left_sum= sum(r->left);
 	int right_sum=sum(r->right);
 	int total=left_sum + right_sum;
 	
 	if(r->key==total)
 	{
 		if( tree(r->left) && tree(r->right))
 		return 1;
 	}
	else
 	return 0;
	
 }


int main()
{
	Node * root= add_node(7);
	root->left=add_node(3);
	root->right=add_node(4);
	root->left->left=add_node(2);
	root->left->right =add_node(1);

	cout<<" "<<tree(root);
	return 0;
}
