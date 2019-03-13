#include<iostream>
#include<math.h>
using namespace std;

struct minMax
{
	int min;
	int max;
};
struct minMax getMinmax(int a[],int n)
{
	int countp,countn,countzero;
	countp=countn=countzero=0;
	struct minMax p;
	for(int i=0;i<n;i++)
	{
		if(a[i]==0) countzero++;
		else if (a[i]>0) countp++;
		else if (a[i]<0) countn++;
	}
	if(countzero==n){
		p.max=n;
		p.min=1;
		return p;
	}
	else if(countp==n || countn==n)
	{
		p.max=p.min=n;
		return p;
	}
	else if(countp==0 && countzero!=0 && countn!=0)
	{
		p.max= n;
		p.min= 1;
		return p;
	}
	else if(countn==0 && countzero!=0 && countp!=0)
	{
		p.max=n;
		p.min=1;
		return p;
	}
	else if(countzero==0 && countn!=0 && countp!=0)
	{
		if(countp>countn) 
		{
			p.max= countp;
			p.min= countn;
			return p;
		}
		else
		{
			p.max=countn;
			p.min= countp;
			return p;
		}
	}
	else if(countzero!=0 && countp!=0 && countn!=0)
	{
		if(countn==countp)
		{
			p.max= countzero + countp;
			p.min= (countzero<countp)?countzero:countp;
			return p;
		}
		else if(countp>countn)
		{
			p.max= countzero+ countp;
			p.min= countzero;
			return p;
		}
		else if(countn > countp)
		{
			p.max= countzero+countn;
			p.min= countzero;
			return p;
		}
	}
	
}
int main()
{
	long int t,n;
	cin>>t;
	while(t>=1 && t<=20)
	{
		t--;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		struct minMax res;
		res= getMinmax(a,n);
		cout<<abs(res.max)<<" "<<abs(res.min);
		
	}
	return 0;
}
