/* 
Problem Statement:
------------------------
Given two numbers ‘num’ and ‘divisor’, find remainder when ‘num’ 
is divided by ‘divisor’. The use of modulo or % operator is not allowed.
#include<iostream>

Core Logic:
-------------------------
Let ith bit from right is set in d. For getting n modulus d, we just need
 to return 0 to i-1 (from right) bits of n as they are and other bits as 0.

For example if n = 6 (00..110) and d = 4(00..100). Last set bit in d is at
position 3 (from right side). So we need to return last two bits of n as they are and other bits as 0, i.e., 00..010.

References:
-------------------------
https://www.geeksforgeeks.org/compute-modulus-division-by-a-power-of-2-number/
http://www.cplusplus.com/
https://github.com/mission-peace/interview

Time Complexity:
--------------------------
O(1)

Space Complexity:
--------------------------
O(1)

*/
#include<iostream>
using namespace std;

int calculateModulus(int n,int d)
{
	return (n&(d-1));
}

//Driver Code
int main()
{
	int n,d;
	cout<<"Enter n :  ";
	cin>>n;
	if(n<0)
	{
	cout<<"Sorry you cant enter negative values!";
	exit(0);
    }
	cout<<"Enter d :   ";
	cin>>d;
	if(d<0)
	{
	cout<<"Sorry you cant enter negative values!";
	exit(0);
    }
	cout<<calculateModulus(n,d);
	return 0;
	
}
