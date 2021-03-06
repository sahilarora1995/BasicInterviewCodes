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
int size=1;
int flag=0;
void print_at_k_distancefromroot(Node *r,int l)
{
    if(r==NULL)
    return ; 
    
    if ( r->key==l) 
	{
	cout<<size<< " - ";
	flag=1;
    }
    
    else
    {
    print_at_k_distancefromroot(r->left,l);
    print_at_k_distancefromroot(r->right,l); 
    size++;
   }
}

int main()
{
	Node * root= add_node(10);
	root->left=add_node(20);
	root->right=add_node(30);
	root->right->left=add_node(25);
	root->right->right=add_node(35);
	print_at_k_distancefromroot(root,25);
	if(!flag) cout<<"Not found";
	return 0;
}

