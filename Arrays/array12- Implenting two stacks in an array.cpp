/*
Problem Statement:
----------------------
Create a data structure twoStacks that represents two stacks. Implementation 
of twoStacks should use only one array, i.e., both stacks should use the same array for storing elements. 
Following functions must be supported by twoStacks.
push1(int x) –> pushes x to first stack
push2(int x) –> pushes x to second stack

pop1() –> pops an element from first stack and return the popped element
pop2() –> pops an element from second stack and return the popped element

Implementation of twoStack should be space efficient.

Core Logic:
----------------------
This method efficiently utilizes the available space. It doesn’t cause an overflow
if there is space available in arr[]. The idea is to start two stacks from two extreme 
corners of arr[]. stack1 starts from the leftmost element, the first element in stack1 is 
pushed at index 0. The stack2 starts from the rightmost corner, the first element in stack2 
is pushed at index (n-1). Both stacks grow (or shrink) in opposite direction. To check for 
overflow, all we need to check is for space between top elements of both stacks. 

Time Complexity:
----------------------
O(c).

References:
----------------------
https://www.geeksforgeeks.org/implement-two-stacks-in-an-array/
http://www.cplusplus.com/
*/
#include<iostream>
#include<algorithm>
#include<cstring>
#define ll int
#define debug(x) cout << x <<" ";
#define size(a) sizeof(a)/sizeof(a[0])

using namespace std;

class stackss
{
	int *arr;
	int n,top1,top2;
	public:
		stackss(int n1)
		{
			n=n1;
			arr=new int [n1]; top1=-1;top2=n;
		}
		void push1(int x);
		void push2(int x);
		int pop1();
		int pop2();
		
};

void stackss::push1(int x)
{
 if (top1 < top2 - 1) 
       { 
           top1++; 
           arr[top1] = x; 
       } 
       else
       { 
           debug("Stack Overflow"); 
           exit(1); 
       } 
}

void stackss::push2(int x)
{
	 if (top1 < top2 - 1) 
       { 
           top2--; 
           arr[top2] = x; 
       } 
       else
       { 
           debug("Stack Overflow"); 
           exit(1); 
       } 
}

int stackss::pop1() 
{
 if (top1 >= 0 ) 
       { 
          int x = arr[top1]; 
          top1--; 
          return x; 
       } 
       else
       { 
           debug("Stack UnderFlow"); 
           exit(1); 
       } 
}

int stackss::pop2()
{
	 if (top2 < n) 
       { 
          int x = arr[top2]; 
          top2++; 
          return x; 
       } 
       else
       { 
           debug("Stack UnderFlow"); 
           exit(1); 
       } 	
}

int main()
{
	ios::sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	stackss s(4);
	s.push1(1);
	s.push1(2);
	s.push2(3);
	debug(s.pop1());
	debug(s.pop2());
	return 0;
}
