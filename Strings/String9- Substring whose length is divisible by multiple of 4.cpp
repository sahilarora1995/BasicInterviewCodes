/* Author: Sahil Arora */

#include<bits/stdc++.h> 
using namespace std; 

void subString(string s, int n) 
{ 
	
	for (int i = 0; i < n; i++) 
		for (int len = 1; len <= n - i; len++)
		{
		
		    string n= s.substr(i, len);
			if(n.length()%4==0) 
			cout << n<<endl; 
		}
} 

int main() 
{ 
	string s = "abcdgigittrorororor"; 
	subString(s,s.length()); 
	return 0; 
} 

