/* 
Problem Statement:
--------------------
Given two binary strings that represent value of two integers, find the product of two strings.
For example, if the first bit string is “1100” and second bit string is “1010”, output should 
be 120.
For simplicity, let the length of two strings be same and be n.

Core Logic:
--------------------
Using Divide and Conquer, we can multiply two integers in less time complexity. We divide the given
 numbers in two halves. Let the given numbers be X and Y.

For simplicity let us assume that n is even

X =  Xl*2n/2 + Xr    [Xl and Xr contain leftmost and rightmost n/2 bits of X]
Y =  Yl*2n/2 + Yr    [Yl and Yr contain leftmost and rightmost n/2 bits of Y]
The product XY can be written as following.

XY = (Xl*2n/2 + Xr)(Yl*2n/2 + Yr)
   = 2n XlYl + 2n/2(XlYr + XrYl) + XrYr
If we take a look at the above formula, there are four multiplications of size n/2, so we basically 
divided the problem of size n into four sub-problems of size n/2. But that doesn’t help because solution
of recurrence T(n) = 4T(n/2) + O(n) is O(n^2). The tricky part of this algorithm is to change the middle
two terms to some other form so that only one extra multiplication would be sufficient.
The following is tricky expression for middle two terms.

XlYr + XrYl = (Xl + Xr)(Yl + Yr) - XlYl- XrYr
So the final value of XY becomes

XY = 2n XlYl + 2n/2 * [(Xl + Xr)(Yl + Yr) - XlYl - XrYr] + XrYr
With above trick, the recurrence becomes T(n) = 3T(n/2) + O(n) and solution of this recurrence is O(n1.59).

What if the lengths of input strings are different and are not even? To handle the different length case
we append 0’s in the beginning. To handle odd length, we put floor(n/2) bits in left half and ceil(n/2)
bits in right half. So the expression for XY changes to following.

XY = 22ceil(n/2) XlYl + 2ceil(n/2) * [(Xl + Xr)(Yl + Yr) - XlYl - XrYr] + XrYr
The above algorithm is called Karatsuba algorithm and it can be used for any base.


References:
---------------------

https://www.geeksforgeeks.org/karatsuba-algorithm-for-fast-multiplication-using-divide-and-conquer-algorithm/
https://github.com/mission-peace/interview
http://www.cplusplus.com/
*/

#include<iostream>
using namespace std;

int karatsuba(string a,string b);
int singlebitmultiplication(string a,string b);
int lengthequal(string &a,string &b);
string add(string f, string s);

string add(string first,string second)
{
	 string result;  // To store the sum bits 
  
   
    int length = lengthequal(first, second); 
    int carry = 0;  // Initialize carry 
  
    // Add all bits one by one 
    for (int i = length-1 ; i >= 0 ; i--) 
    { 
        int firstBit = first.at(i) - '0'; 
        int secondBit = second.at(i) - '0'; 
  
        // boolean expression for sum of 3 bits 
        int sum = (firstBit ^ secondBit ^ carry)+'0'; 
  
        result = (char)sum + result; 
  
        // boolean expression for 3-bit addition 
        carry = (firstBit&secondBit) | (secondBit&carry) | (firstBit&carry); 
    } 
  
    // if overflow, then add a leading 1 
    if (carry)  result = '1' + result; 
  
    return result; 
}
int singlebitmultiplication(string a,string b)
{
	return (a[0]-'0')*(b[0]-'0');
}

int lengthequal(string &str1, string &str2) 
{ 
    int len1 = str1.size(); 
    int len2 = str2.size(); 
    if (len1 < len2) 
    { 
        for (int i = 0 ; i < len2 - len1 ; i++) 
            str1 = '0' + str1; 
        return len2; 
    } 
    else if (len1 > len2) 
    { 
        for (int i = 0 ; i < len1 - len2 ; i++) 
            str2 = '0' + str2; 
    } 
    return len1; // If len1 >= len2 
} 
  



int karatsuba(string a,string b)
{
	int n=lengthequal(a,b);

	if(n==0) return 0;
	if(n==1) return singlebitmultiplication(a,b);
	int left=n/2;
	int right= (n-left);
	
   
	string x1= a.substr(0,left);
	string x2= a.substr(left,right);
	
	string y1= b.substr(0,left);
	string y2= b.substr(left,right);
	
	cout<<y1;
	int p1=karatsuba(x1,y1);
	int p2= karatsuba(x2,y2);
	int p3= karatsuba(add(x1,x2), add(y1,y2));
	
	
	return p1*(1<<(2*right)) + (p3 - p1 - p2)*(1<<right) + p2;
 
}

int main()
{
	int a=karatsuba("1100","1010");
	cout<<a;
	return 0;
}
