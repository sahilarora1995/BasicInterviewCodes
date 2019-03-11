/* Problem Statement
--------------------
Given a linked list of 0s, 1s and 2s, sort it.

Core Logic:
---------------------
Following steps can be used to sort the given linked list.
1) Traverse the list and count the number of 0s, 1s and 2s.
Let the counts be n1, n2 and n3 respectively.
2) Traverse the list again, fill the first n1 nodes with 0,
then n2 nodes with 1 and finally n3 nodes with 2.

Time Complexity
---------------------
0(n)

Space complexity
----------------------
0(1)

References:
---------------------
https://www.geeksforgeeks.org/sort-a-linked-list-of-0s-1s-or-2s/
https://github.com/mission-peace/interview
http://www.cplusplus.com/

*/
#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
};

void push(struct Node **href,int data)
{
	Node * newnode= (struct Node *)malloc(sizeof(struct Node));
	newnode->data=data;
	newnode->next=(*href);
	(*href)= newnode;
}

void sortLinkedlist(struct Node * root)
{

	int count[3]= {0,0,0};
	Node * temp=root;
	while(root)
	{
		count[root->data]+=1;
		root=root->next;
	}
	
	int i=0;
	while(temp)
	{
		if(count[i]==0) ++i;
		else
		{
			temp->data=i;
			count[i]--;
			temp=temp->next;
		}
	}
	
}

void printLL(struct Node * n)
{
	while(n)
	{
		cout<<n->data<<" ";
		n=n->next;
	}
}
int main()
{
	Node *head =NULL;
	push(&head,0);
	push(&head,2);
	push(&head,1);
	push(&head,2);
	push(&head,1);
	push(&head,0);
	
	sortLinkedlist(head);
	printLL(head);
	
	return 0;
}
