/*
Problem Statement:
-----------------------
Given two Linked Lists, create union and intersection lists that
contain union and intersection of the elements present in the given lists.
Order of elements in output lists doesn’t matter.

Core Logic:
--------------------
Implementation:
1- Start traversing both the lists.
   a) Store the current element of both lists
      with its occurrence in the map.
2- For Union: Store all the elements of the map 
   in the resultant list.
3- For Intersection: Store all the elements only 
   with an occurrence of 2 as 2 denotes that 
   they are present in both the lists.

Time Complexity : O(m + n)
Auxiliary Space : O(m + n)

References:
----------------------
https://www.geeksforgeeks.org/union-intersection-two-linked-lists-set-3-hashing/
http://www.cplusplus.com/
https://github.com/mission-peace/interview
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int key;
	Node *link;
};

void push(struct Node**href,int key)
{
	struct Node* new_node= new Node;
	new_node->key=key;
	new_node->link=(*href);
	(*href)= new_node;
}

void calculate(Node*a,Node*b,unordered_map<int,int>&e)
{
	struct Node*p1=a;
	struct Node *p2=b;
	
	while(p1 || p2)
	{
		if(p1)
		{
			e[p1->key]++;
			p1=p1->link;
		}
		if(p2)
		{
			e[p2->key]++;
			p2=p2->link;
		}
	}
}

Node * unionLL(unordered_map<int,int>e)
{
	struct Node *result=NULL;
	for(auto i=e.begin();i!=e.end();i++)
	push(&result,i->first);
	
	return result;
}

Node * intersectionLL(unordered_map<int,int>e)
{
	struct Node *result=NULL;
	for(auto i=e.begin();i!=e.end();i++)
	{
		if(i->second==2)
	    push(&result,i->first);
    }
	return result;
}

void printLL(struct Node* r)
{
	while(r)
	{
		cout<<r->key<<"->";
		r=r->link;
	}
}
unionLinkedlist(struct Node*a,struct Node*b)
{
	if(!a) printLL(b);
	if(!b) printLL(a);
	
	unordered_map<int,int>e;
	calculate(a,b,e);
	
	Node* intersection=intersectionLL(e);
	Node * Union= unionLL(e);
	
	printLL(intersection);
	cout<<endl;
	printLL(Union);
	
	
}
int main()
{
	struct Node* head1 = NULL; 
    struct Node* head2 = NULL; 
    push(&head1, 1); 
    push(&head1, 2); 
    push(&head1, 3); 
    push(&head1, 4); 
    push(&head1, 5); 
  
    push(&head2, 1); 
    push(&head2, 3); 
    push(&head2, 5); 
    push(&head2, 6); 
	unionLinkedlist(head1,head2);
	
	
	return 0;
}
