#include<iostream>
using namespace std;

struct Node
{
	int key;
	Node *left;
	Node *right;
};

Node * newNode(int key)
{
	Node*new_node=new Node;
	new_node->key=key;
	new_node->left=new_node->right=NULL;
	return new_node;
}

bool mirrorcheck(Node *a, Node *b)
{
	if(a==NULL && b== NULL) return true;
	
	if (a==NULL || b== NULL) return false;
	
	return (a->key==b->key)&&mirrorcheck(a->left,b->right) &&mirrorcheck(a->right,b->left);
}
int main()
{
     
   Node *a = newNode(1); 
    Node *b = newNode(1); 
    a->left = newNode(2); 
    a->right = newNode(3); 
    a->left->left  = newNode(4); 
   // a->left->right = newNode(5); 
  
    b->left = newNode(3); 
    b->right = newNode(2); 
    b->right->left = newNode(5); 
    b->right->right = newNode(4); 
    
    mirrorcheck(a,b)? cout<<"mirror": cout<<"no mirror";
   return 0;
}
