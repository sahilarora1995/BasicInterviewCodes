#include<iostream>
#include<string.h>
#include<stdio.h>
#include <bits/stdc++.h> 
#define SIZE 26 
using namespace std;

bool counte(string str)
{
	int u=0;
	int n = str.size();
	int freq[SIZE]={0};
	for (int i = 0; i <= n; i++) 
        freq[str[i] - 'a']=1;
    if(freq['a'-'a']&&freq['e'-'a'] && freq['i'-'a']    && freq['o'-'a'] && freq['u'-'a'])
    return true;
    else
    return false;
}
int concate(string s[],int n)
{
	int count=0;
	bool f[n][5];
	for(int i=0;i<n;i++)
	{
		while(s[i] != NULL)
		{
				if(s[i]=='a') f[i][0]=1;
				else if(s[i]=='e') f[i][1]=1;
				else if(s[i]=='i') f[i][2]=1;
				else if(s[i]=='o') f[i][3]=1;
				else if(s[i]=='u') f[i][4]=1;	
		}
	}
	
	
}
int main()
{
	int n,t,i;
	cin>>t;
	while(t>=1 && t<=1000)
	{
		t--;
		cin>>n;
		string s[n];
		for(i=0;i<n;i++)
		{
		cin>>s[i];
	    }
		int c=concate(s,n);
		cout<<c<<endl;
	}
	return 0;
}
