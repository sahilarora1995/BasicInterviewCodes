/*
Problem Statement: 
Write a “C++” function, int checkvoerflow(int result, int a, int b) If there is no overflow,
the function places the resultant = sum a+b in “result” and returns 0. Otherwise it 
returns -1. The solution of casting to long and adding to find detecting the overflow 
is not allowed.

 Core logic: 
If 2 Two's Complement numbers are added, and they both have the same sign (both positive or both negative), then overflow occurs if and only if the result has the opposite sign. Overflow never occurs when adding operands with different signs.

i.e.	Adding two positive numbers must give a positive result
 	Adding two negative numbers must give a negative result
Overflow occurs if

(+A) + (+B) = -C
(-A) + (-B) = +C
Example: Using 4-bit Two's Complement numbers (-8 = x = +7)

 (-7)   1001
+(-6)   1010
------------
(-13) 1 0011 = 3 : Overflow (largest -ve number is -8)

References: https://www.geeksforgeeks.org/check-for-integer-overflow/
            https://github.com/mission-peace/interview
			http://www.cplusplus.com/reference/cstdlib/qsort/ 
			https://www.doc.ic.ac.uk/~eedwards/compsys/arithmetic/
*/			

#include<iostream>
using namespace std;

int checkoverflow(int r,int n1,int n2)
{
	r=n1+n2;
	if(n1 >0 && n2>0 && r<0)
	return -1;
	
	if(n1 <0 && n2<0 && r>0)
	return -1;
	
	return 0;
}
int main()
{
	int r;
	cout<<checkoverflow(r,2147483640,10);
	return 0;
	
}
