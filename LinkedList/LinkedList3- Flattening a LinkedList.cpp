/*
Problem Statement:

Given a linked list where every node represents a linked list and contains two pointers of its type:
(i) Pointer to next node in the main list (we call it ‘right’ pointer in below code)
(ii) Pointer to a linked list where this node is head (we call it ‘down’ pointer in below code).
All linked lists are sorted. See the following example

       5 -> 10 -> 19 -> 28
       |    |     |     |
       V    V     V     V
       7    20    22    35
       |          |     |
       V          V     V
       8          50    40
       |                |
       V                V
       30               45
Write a function flatten() to flatten the lists into a single linked list. The flattened
linked list should also be sorted. For example, for the above input list,
output list should be 5->7->8->10->19->20->22->28->30->35->40->45->50.

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
	Node *right;
	Node *down;
};
void push (Node** head_ref, int new_data) 
{ 
    Node* new_node = (Node *) malloc(sizeof(Node)); 
    new_node->right = NULL; 
    new_node->key  = new_data; 
    new_node->down = (*head_ref); 
    (*head_ref)    = new_node; 
} 

Node * mergesortedLinkedlist(Node *a, Node *b)
{
	Node *result=NULL;
	if(!a) return b;
	if(!b) return a;
	if(a->key < b->key) 
	{
		result=a;
		result->down = mergesortedLinkedlist(a->down,b);
	}
	
	else
	{
		result=b;
		result->down=mergesortedLinkedlist(a,b->down);
	}
	return result;
}

Node *flat(struct Node *r)
{
	if(!r || !r->right) return r;

    return mergesortedLinkedlist(r, flat(r->right)); 
}
int main()
{
	Node* root = NULL; 
    push( &root, 30 ); 
    push( &root, 8 ); 
    push( &root, 7 ); 
    push( &root, 5 ); 
  
    push( &( root->right ), 20 ); 
    push( &( root->right ), 10 ); 
  
    push( &( root->right->right ), 50 ); 
    push( &( root->right->right ), 22 ); 
    push( &( root->right->right ), 19 ); 
  
    push( &( root->right->right->right ), 45 ); 
    push( &( root->right->right->right ), 40 ); 
    push( &( root->right->right->right ), 35 ); 
    push( &( root->right->right->right ), 20 ); 	
    
    root=flat(root);
    while(root)
    {
    	cout<<root->key<<"-> ";
    	root= root->down;
	}
	return 0;
}
