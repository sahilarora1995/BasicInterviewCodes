#include<iostream>
using namespace std;
struct tree
{
	int key;
	struct tree*left;
	struct tree *right;
};

void inorderprint(struct tree *r)
{
    if (r == NULL)  
    return;  
	inorderprint(r->left);
	cout<<r->key<<" ";
	inorderprint(r->right);
}
tree * push(int k)
{
	struct tree *new_node= (struct tree *)malloc(sizeof(struct tree));
	new_node->key= k;
	new_node->left=NULL;
	new_node->right=NULL;
	return new_node;
}
void mirror(struct tree *r)
{
	if(!r)return;
	else
	{
		mirror(r->left);
		mirror(r->right);
		struct tree *t;
		t=r->left;
		r->left= r->right;
		r->right=t;
	}
}
int main()
{
  struct tree *root = push(1); 
  root->left        = push(2); 
  root->right       = push(3); 
  root->left->left  = push(4); 
  root->left->right = push(5); 
  inorderprint(root);
  cout<<endl;
  mirror(root);
  inorderprint(root);
  return 0;
}

