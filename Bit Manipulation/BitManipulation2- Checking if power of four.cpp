/* Problem Statement:
Given an integer n, find whether it is a power of 4 or not.Returns 1 if it is else 0

Core Logic:
A number n is a power of 4 if following conditions are met.
a) There is only one bit set in the binary representation of n (or n is a power of 2)
b) The count of zero bits before the (only) set bit is even.

For example: 16 (10000) is power of 4 because there is only one bit set and count of 0s before the set bit is 4 which is even.

References:
           https://www.geeksforgeeks.org/find-whether-a-given-number-is-a-power-of-4-or-not/
           https://github.com/mission-peace/interview
		   http://www.cplusplus.com/reference/cstdlib/qsort/ 
*/		   
#include<iostream>
using namespace std;

bool checkifpoweroffour(unsigned int n)
{
	int count =0;
	if(n && !(n&n-1)) //checking if there is only 1 set bit or not
	{
		while(n>1)
		{
			n>>=1; //checking 1 right by 1 position
			count+=1;
		}
      
		return (count%2==0)? 1:0;
    }
	 return 0; 
}
int main()
{
	cout<<"   "<<checkifpoweroffour(256);
	return 0;
}
