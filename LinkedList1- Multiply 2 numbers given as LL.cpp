/* Problem Statement
--------------------
Given two numbers represented by linked lists, write a function that
returns the multiplication of these two linked lists.
Core Logic:
---------------------
1) Initialize a variable to zero
2) Start traversing the linked list
3) Add the value of first node to this variable
4) From the second node, multiply the variable by 10
   first and then add the value of the node to this 
   variable.
5) Repeat step 4 until we reach the last node of the list. 

Time Complexity
---------------------
0(n)

Space complexity
----------------------
0(1)

References:
---------------------
https://www.geeksforgeeks.org/multiply-two-numbers-represented-linked-lists/
https://github.com/mission-peace/interview
http://www.cplusplus.com/

*/
#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node * link;
};

void push(Node **href,int data)
{
	Node * new_node= (struct Node *)malloc(sizeof(struct Node));
	new_node->data= data;
	new_node->link=(*href);
	(*href)=new_node;
}

multiply(struct Node*f, struct Node *s)
{
	int n1=0,n2=0;
	while(f|| s)
	{
		if(f)
		{
			n1=n1*10 + (f->data);
			f=f->link;
		}
		
		if(s)
		{
			n2=n2*10 + (s->data);
			s=s->link;
		}
	}
	return (n1*n2);
}
int main()
{
	Node *head1=NULL;
    push(&head1,1);
    push(&head1,1);
    
    Node *head2=NULL;
    push(&head2,1);
    push(&head2,2);
    
    cout<<multiply(head1,head2);
    
	return 0;
}
