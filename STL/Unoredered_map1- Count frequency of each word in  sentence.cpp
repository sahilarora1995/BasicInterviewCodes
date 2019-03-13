/*
Problem Statement:
-----------------------
You are given a string and a word your task is that count the number of
the occurrence of the given word in the string and print the number of occurrence of the word.

Core Logic:
--------------------
First, we split the string by spaces in a
Then, take a variable count = 0 and in every true condition we increment the count by 1
Now run a loop at 0 to length of string and check if our string is equal to the word
if condition true then we increment the value of count by 1 and in the end we print the value of count.

Time Complexity
-----------------------
O(n)

References:
----------------------
https://www.geeksforgeeks.org/count-occurrences-of-a-word-in-string/
http://www.cplusplus.com/
https://github.com/mission-peace/interview
*/
#include<bits/stdc++.h>
using namespace std;

printwordfrequency(const char *s)
{
	string words;
	unordered_map<string,int>i;
	stringstream ss(s);
	while(ss>>words)
		i[words]++;
		
	for(auto itr=i.begin();itr!=i.end();itr++)
	  cout<<itr->first<<" "<<itr->second<<endl;
	
	
}
int main()
{
	const char *s="this is a check to check this is a string check";
	printwordfrequency(s);
	return 0;
}
