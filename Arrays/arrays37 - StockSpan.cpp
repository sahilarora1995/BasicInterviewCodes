#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>stock= {100,80,60,70,60,75,85};
    stack<int>s;
    vector<int>span(stock.size(),0);
    for(int i=0;i<stock.size();i++)
    {
        if(s.empty())
        {
                s.push(i);
                span[i]=1;
        }

        else
        {
        while(!s.empty() && stock[s.top()]<=stock[i])
            s.pop();

        span[i]=i-s.top();
        s.push(i);
        }
    }
    for(auto x:span)
        cout<<x<<" ";
    return 0;
}
