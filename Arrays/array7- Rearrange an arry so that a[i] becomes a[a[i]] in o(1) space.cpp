
#include<iostream>
#define ll int
#define debug(x) cout << x;
using namespace std;

void modifyArray(int a[],int n)
{
	for(int i=0;i<n;i++)
	a[i] += (a[a[i]]%n)*n;
	
    for(int i=0;i<n;i++)
    debug(a[i]/n);
}

int main()
{
	ios::sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	ll a[]= {4,0,2,1,3};
	ll n=sizeof(a)/sizeof(a[0]);
	modifyArray(a,n);
	return 0;
}
