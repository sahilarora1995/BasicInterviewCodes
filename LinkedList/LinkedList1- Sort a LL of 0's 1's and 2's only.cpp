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
