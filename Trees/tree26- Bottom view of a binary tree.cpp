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


 void bottom_viewNode (Node*root)
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
		    if(i==(it->second.size()-1))
			cout<<it->second[i]<<"  ";
		
		}
			cout<<endl;
	}
	

 }

int main()
{

  	 Node *root = newNode(20);
    root->left = newNode(8);
    root->right = newNode(22);
    root->left->left = newNode(5);
    root->left->right = newNode(3);
    root->right->left = newNode(4);
    root->right->right = newNode(25);
    root->left->right->left = newNode(10);
    root->left->right->right = newNode(14);
   
bottom_viewNode (root);
	
	return 0;
}
