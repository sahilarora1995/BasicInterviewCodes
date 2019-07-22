/*
Author: Sahil Arora
*/
#include<iostream>
#include<algorithm>
#include<cstring>
#include<bits/stdc++.h>
#define ll int
#define debug(x) cout << x<< " ";
#define pii pair<int,int>
#define F first
#define S second
#define WL(i,s) while(i<s.length())
#define MAX INT_MAX
#define FL(i) for(i=0;i<n;i++)
#define MID(l,h) (l+(h-l))/2
#define NODE struct node*
#define START signed main()
#define STACK stack<node*> 
#define TR temp->right
#define TL temp->left
#define SIZE(a) sizeof(a)/sizeof(a[0])
#define CH char
#define IO1  ios::sync_with_stdio(0);
#define IO2    cin.tie(0);
#define IO3 	cout.tie(0);
using namespace std;

struct Node 
{ 
    int data; 
    struct Node *left, *right; 
}; 
void print(struct Node *root) 
{ 
    if (root != NULL) 
    { 
        print(root->left); 
        printf("%d ",root->data); 
        print(root->right); 
    } 
} 

struct Node* newNode(int data) 
{ 
    struct Node* node = 
       (struct Node*) malloc(sizeof(struct Node)); 
    node->data = data; 
    node->left = node->right = NULL; 
    return node; 
} 

struct Node* prune(Node * root, ll val)
{
	if(!root) return NULL;
	root->left= prune(root->left,val);
	root->right= prune(root->right,val);
	if(root->left==NULL && root->right==NULL)
	{
		if(root->data ==val)
		{
			free(root); return NULL;
		}
	}
	return root;
}
START
{
	IO1 IO2 IO3;
   struct Node* root = newNode(10); 
    root->left = newNode(3); 
    root->right = newNode(10); 
    root->left->left = newNode(3); 
    root->left->right = newNode(1); 
    root->right->right = newNode(3); 
    root->right->right->left = newNode(3); 
    root->right->right->right = newNode(3);
    printf("Tree before truncation\n"); 
    print(root); 
  
    root = prune(root,3); 
  
    printf("\n\nTree after truncation\n"); 
    print(root); 
	return 0;
}
