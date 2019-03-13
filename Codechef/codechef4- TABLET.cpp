#include <bits/stdc++.h>
#include <limits.h>
using namespace std;

int main()
{ 
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,k,l,b,p,maxa;
    cin>>t;
    while(t--)
    {
    	maxa=INT_MIN;
    	cin>>n;
    	cin>>k;
    	for(int i=0;i<n;i++)
    	{
    		cin>>l;
    		cin>>b;
    		cin>>p;
    		if(p<=k && maxa<l*b)
    		maxa=l*b;
		}
		if(maxa==INT_MIN)
		cout<<"no tablet"<<endl;
		else
		cout<<maxa<<endl;
		
	}
	
	return 0;
}
