/* 

Author: Sahil Arora
Date: 26-03-2019

Problem Statement:
----------------------
Printing source code of a C program itself.

Core Logic:
----------------------
The location of a C programming file is contained inside a predefined macro __FILE__. For example:
  
#include <stdio.h> 
int main() 
{ 
   // Prints location of C this C code. 
   printf("%s",__FILE__); 
} 
The output of the above program is the location of this C file.
       
Time Complexity
------------------------
o(numberofcharactersinFile).

References:
-----------------------
https://www.geeksforgeeks.org/printing-source-code-c-program/
http://www.cplusplus.com/
*/      
#include<iostream>
#include<algorithm>
#include<cstring>
#include<stdio.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h> 
#define ll int
#define debug(x) cout << x;
#define size(a) sizeof(a)/sizeof(a[0])
#define pii pair<int,int>
#define F first
#define S second
#define WL(i,s) while(i<s.length())
#define MAX INT_MAX
#define CH char
#define FL(i) for(i=0;i<n;i++)

using namespace std;
int main()
{
	ios::sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	FILE *fp;
	CH ch;
	fp=fopen(__FILE__,"r");
	if(!fp) {
	debug("file cant be opened!");}
	else
	{
		do
		{
			ch= fgetc(fp);
			putchar(ch);
		}while(ch!=EOF);
	}
	fclose(fp);
	return 0;
}
