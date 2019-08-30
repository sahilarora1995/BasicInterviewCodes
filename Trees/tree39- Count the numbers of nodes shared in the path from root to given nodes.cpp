/*
Author: Sahil Arora 
*/
#include<iostream>
#include<algorithm>
#include<cstring>
#include<bits/stdc++.h>
#define F false
#define T true
#define ll int
#define debug(x) cout << x<< " ";
#define pii pair<int,int>
#define S second
#define WL(i,s) while(i<s.length())
#define MAX INT_MAX
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
#define FL(a,b) for(ll i=a;i<b;i++)
#define BR cout<<endl;
using namespace std;


vector<ll>path1;
vector<ll> path2;
struct Node
{
	Node * left;
	Node *right;
	int data;
};
Node* newNode(int key) 
{ 
    Node* node = new Node(); 
    node->left = node->right = NULL; 
    node->data = key; 
    return node; 
} 
bool FindPath(Node* root, vector<ll>& path, int key) 
{ 
    if (!root) 
        return F; 
  
    path.push_back(root->data); 
  
    if (root->data == key) 
        return T; 
  
    if (FindPath(root->left, path, key) 
        || FindPath(root->right, path, key)) 
        return T; 
  
    path.pop_back(); 
    return F; 
} 
START
{
	IO1 IO2 IO3;
	Node* root = newNode(20); 
    root->left = newNode(8); 
    root->right = newNode(22); 
    root->left->left = newNode(5); 
    root->left->right = newNode(3); 
    root->right->left = newNode(4); 
    root->right->right = newNode(25); 
    root->left->right->left = newNode(10); 
    root->left->right->right = newNode(14); 
    ll a,b; cin>>a>>b;
    FindPath(root,path1,a);
    FindPath(root,path2,b);
    ll count=0;
    for(ll i=0;i<path1.size() && path2.size();i++)
    {
    	if(path1[i]!= path2[i]) break;
    	else count++;
	}
	debug("Number of nodes in common is:= ");
	debug(count);
	return 0;
}
