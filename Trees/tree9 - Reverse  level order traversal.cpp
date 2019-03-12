#include<iostream>
#include<queue>
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

void print_pathofgivensum(Node *r,int k)
{
    if(r==NULL)
    return;
    
    int sum=0;
    stack <Node *> s;
    sum = sum+ r->key;
    
    
    s.push(r);
    if(sum==k) 
   {
   
      // printing the stack
     while(!s.empty())
     {
     	Node *p =s.top();
     	s.pop();
		cout<<p->key << "  ";    	
     }
   }
   
   print_pathofgivensum(r->left,k);
   print_pathofgivensum(r->right,k);
   
   sum=sum - (r->key);
   s.pop();
}

int main()
{
	Node * root= add_node(10);
	root->left=add_node(20);
	root->right=add_node(30);
	root->right->left=add_node(25);
	root->right->right=add_node(35);
	print_pathofgivensum(root,20);
	return 0;
}

