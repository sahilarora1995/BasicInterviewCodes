#include<iostream>
using namespace std;

struct minMax
{
	int min;
	int max;
};
struct minMax getMinmax(int a[],int l, int h)
{
	int mid;
	struct minMax res,lh,rh;
	if(l==h)
	{
		res.max= a[l];
		res.min= a[l];
		return res;
	}
	if(h==l+1)
	{
		if(a[l]>a[h])
		{
			res.max=a[l];
			res.min= a[h];
		}
		else
		{
			res.max=a[h];
			res.min=a[l];
		}
	return res;	
	}
	
		mid= (l+h)/2;
		lh=getMinmax(a,l,mid);
		rh=getMinmax(a,mid+1,h);
		if(lh.min<rh.min) 
		res.min=lh.min;
	    else
		res.min= rh.min;
		
		if(lh.max>rh.max) 
		res.max= lh.max;
        else
		res.max= rh.max;
	return res;	
}
int main()
{
	int a[]= {1,2,3,4,5,6};
    struct minMax result = getMinmax(a,0,5);	
    cout<<result.max<<result.min;
	return 0;
	
}
