/*
Problem Statement:


Core Logic:
The idea is to use Merge() process of merge sort for linked lists.
We use merge() to merge lists one by one. We recursively merge() 
the current list with already flattened list.

Time Complexity
0(n)

References:
https://www.geeksforgeeks.org/flattening-a-linked-list/
http://www.cplusplus.com/
https://github.com/mission-peace/interview

*/
#include<iostream>
using namespace std;

struct Node
{
	int key;
	struct Node * link;
};

void push(struct Node **href,int key)
{
	struct Node*new_node= new Node;
	new_node->key=key;
	new_node->link = (*href);
	(*href)=new_node;
}

void removeDuplicatesfromSortedLL(struct Node *root)
{
	struct Node *current=root;
	struct Node *newn;
	if(current==NULL)return;
	while(current->link)
	{
		if(current->key==current->link->key)
		{
			newn=current->link->link;
			free(current->link);
			current->link= current->link->link;
		}
	    else
	    current=current->link;
    }
}
int main()
{
		Node* root=NULL;
		push(&root,11);
		push(&root,11);
		push(&root,11);
		push(&root,21);
		push(&root,43);
		push(&root,43);
		push(&root,60);
		
		removeDuplicatesfromSortedLL(root);
		while(root)
		{
			cout<<root->key<<"-> ";
			root=root->link;
		}
		
	return 0;
}
