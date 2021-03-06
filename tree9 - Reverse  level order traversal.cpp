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

void reverse_level_order(Node *r)
{
    if(r==NULL)
    return;
    
    queue <Node *> q;
    stack <Node *> s;
    q.push(r);
   
   while(!q.empty())
    {

        Node *node = q.front();
        q.pop();        

        if (node->right != NULL)
            q.push(node->right);
 
       
        if (node->left != NULL)
            q.push(node->left);    
        
        s.push(node);
	}
     // printing the stack
     while(!s.empty())
     {
     	Node *p =s.top();
     	s.pop();
		cout<<p->key << "  ";
     	
     }    	
}

int main()
{
	Node * root= add_node(10);
	root->left=add_node(20);
	root->right=add_node(30);
	root->right->left=add_node(25);
	root->right->right=add_node(35);
	 reverse_level_order(root);
	return 0;
}

