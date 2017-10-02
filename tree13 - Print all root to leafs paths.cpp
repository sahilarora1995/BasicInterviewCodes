#include<iostream>
#include<stack>
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
int top=-1;
	int sstack[1000];
 void push(int k)
 { 
 
  top++;
   sstack[top] =k;
 	 
 }

  void pop()
  {
  	top--;
  }

 void print_allroottosumpath(Node *r)
 {
 	if(r==NULL ) return;
 	
 
 	push(r->key);
 	print_allroottosumpath(r->left);
 	if(r->left==NULL && r->right == NULL)
 	{
 	 for(int i=top;top!=-1;i--)
 	 cout<<sstack[i];
 	}
	
	print_allroottosumpath(r->right);
	pop();
 	
}


int main()
{
	Node * root= add_node(7);
	root->left=add_node(3);
	root->right=add_node(4);
	root->left->left=add_node(2);
	root->left->right =add_node(1);

	print_allroottosumpath(root);
	return 0;
}
