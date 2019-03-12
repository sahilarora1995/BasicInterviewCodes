#include <iostream>
#include<bits/stdc++.h>
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


 void verticaltraversal(Node *root)
 {
 	if(!root) return ;
 	
   map<int, vector<int> > m;
   	int hd =0;
 	
  queue<pair<Node*, int> > q;
    q.push(make_pair(root, hd));
 
 	
 	while(!q.empty())
    {
    	pair<Node*, int> t= q.front();
    	q.pop();
    	hd= t.second;
    	Node * node= t.first;
    	m[hd].push_back(node->key);
    	
    	if(node->left) q.push(make_pair(node->left,hd-1));
    	if(node->right) q.push(make_pair(node->right,hd+1));
	}
	
	//displaying the map now
	map<int, vector<int> > :: iterator it;
	for(it=m.begin();it!=m.end();it++)
	{
		for(int i=0;i<it->second.size();i++)
		{
			cout<<it->second[i]<<"  ";
		
		}
			cout<<endl;
	}
 }

int main()
{

  	 Node *root = newNode(51);
    root->left = newNode(21);
    root->right = newNode(13);
    root->left->left = newNode(14);
    root->left->right = newNode(65);
    root->right->left = newNode(6);
    root->right->right = newNode(67);
    root->right->left->right = newNode(68);
    root->right->right->right = newNode(96);
    root->right->right->left= newNode(10);
    root->right->right->left->right= newNode(161);
    root->right->right->left->right->right= newNode(162);
	verticaltraversal(root);
	
	return 0;
}

