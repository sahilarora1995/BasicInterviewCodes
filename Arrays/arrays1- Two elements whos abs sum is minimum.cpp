#include <bits/stdc++.h> 
using namespace std;

void pairsumin(int a[],int n)
{
	int l,r,minl,minr,sum,min_sum;
	l=0,r=n-1,minl=0,minr=n-1;
	min_sum=INT_MAX;
	if(n<2)
	return;
	
	else
	{
		sort(a,a+n);
		while(l<r)
		{
			sum=a[l]+a[r];
			if(abs(sum)<abs(min_sum))
			{
				min_sum=sum;minl=l;minr=r;
			}
			if(sum<0) l++;
			else r--; 	
		}
		cout<<a[minl]<<" "<<a[minr];
	}
}
int main()
{
    int a[]={1,60,-10,70,-80,85};
    int n=sizeof(a)/sizeof(a[0]);
    pairsumin(a,n);
	return 0;
}
