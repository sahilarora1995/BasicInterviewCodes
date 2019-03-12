#include<iostream>
using namespace std;

int maxSumIncreasingsubsequence(int a[],int n)
{
	int maxa[n];
	for(int i=0;i<n;i++)
	maxa[i]=a[i];

	int max=INT_MIN;
	
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[j]<a[i])
			maxa[i]=(maxa[i]>maxa[j]+a[i]? maxa[i]:maxa[j]+a[i]);
			if(maxa[i]>max) max= maxa[i];
		}
	}

	return max;
	
}
int main()
{
	int a[]= {4,6,1,3,8,4,6};
	int n= sizeof(a)/sizeof(a[0]);
	cout<<maxSumIncreasingsubsequence(a,n);
	return 0;
	
}
