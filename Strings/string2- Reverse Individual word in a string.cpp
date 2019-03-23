/* 
Problem Statement:
-------------------
Given a string str, we need to print reverse of individual words

Core Logic:
-------------------
We use a stack to push all words before space. As soon as we encounter 
a space, we empty the stack.

Time Complexity:
---------------------
o(n)

References:
---------------------
https://www.geeksforgeeks.org/reverse-individual-words/
http://www.cplusplus.com/
*/


#include<iostream>
#include<algorithm>
#include<cstring>
#include<bits/stdc++.h>
#define ll int
#define debug(x) cout << x;
#define size(a) sizeof(a)/sizeof(a[0])

using namespace std;

void reverseWords(string s)
{
	 stack<char> st; 
     for (int i = 0; i < s.length(); ++i) 
	  { 
        if (s[i] != ' ') 
            st.push(s[i]); 
  
        else 
		{ 
            while (st.empty() == false) { 
                debug(st.top()); 
                st.pop(); 
            } 
            cout << " "; 
        } 
    } 
  
    while (st.empty() == false) { 
        cout << st.top(); 
        st.pop(); 
    } 
}
int main()
{
	ios::sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	string s="world is full of good coders";
	reverseWords(s);
	return 0;
}
