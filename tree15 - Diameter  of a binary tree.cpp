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

int height_tree(Node *node)
{
   if (node==NULL) 
       return 0;
   else
   {
       /* compute the depth of each subtree */
       int lDepth = height_tree(node->left);
       int rDepth = height_tree(node->right);
 
       /* use the larger one */
       if (lDepth > rDepth) 
           return(lDepth+1);
       else return(rDepth+1);
   }
}


 int diameter_tree(Node *r, int max_height)
 {
 	if (r==NULL) 
       return 0;
    
	int ld=diameter_tree(r->left, max_height);
	int fd=diameter_tree(r->right, max_height);
	int m= ld>fd? ld: fd;
	int final= m>max_height?m : max_height;
	return final;   
       
 }
int main()
{
	Node * root= add_node(10);
	root->left=add_node(20);
	root->right=add_node(30);
	root->right->left=add_node(25);
	root->right->right=add_node(35);
	root->right->right->left=add_node(37);

    int lh=height_tree(root->left);    
	int rh=height_tree(root->right);
	int max= lh> rh? lh+1 : rh +1;
	cout<<diameter_tree(root,max)+1;
	return 0;
}

