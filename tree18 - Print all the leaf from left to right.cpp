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
int flag=0;
void print_allleafsfromeft_toright(Node *r)
{
    if(r==NULL)
    return ; 
    
    else if ( r->left==NULL && r->right==NULL) 
	{
	cout<<r->key<< " - ";
	flag=1;
    }
    
    else
    {
   print_allleafsfromeft_toright(r->left);
    print_allleafsfromeft_toright(r->right);
   }
}

int main()
{

  	Node * root= add_node(10);
	root->left=add_node(20);
	root->right=add_node(30);
	root->right->left=add_node(25);
	root->right->right=add_node(35);   
	print_allleafsfromeft_toright(root);
	if(!flag) cout<<"Not found";
	return 0;
}

