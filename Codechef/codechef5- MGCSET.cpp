#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t,n,m,d,a;
	cin>>t;
	while(t--)
	{
		d=1;
		cin>>n;
		cin>>m;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			if(a%m==0) d++;
		}
		cout<<pow(2,d)-1;
	}
	return 0;
	
}
