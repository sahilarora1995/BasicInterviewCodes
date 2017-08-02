#include<iostream>
using namespace std;
bool triplet_sum(int a[],int n);

bool triplet_sum(int a[],int n)
{
	int temp;
	// for sorting the array.
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
			
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		   }
		}
	}
	
	for(int i=0;i<n-2;i++)
	{
		int l=i+1; int r=n-1;
		while(l<r)
		{
			if(a[i]+a[l]+a[r]==5)   // assume triplet has sum =5 
			{
				cout<<a[i]<<'\n'<<a[l]<<'\n'<<a[r];
				return 1;
			}
			
			else 
			if((a[i]+a[l]+a[r])>5) // if required sum is less than the current sum then we need to decreae the value which can  be done by decreasin  r as array is sorted
			r--;
			
			else
			l++;   //if required sum is more than the current sum then we need to increase the value which can  be done by decreasin  r as array is sorted
			
		}
	}
	
	return 0;
	
	
}
int main()
{
	int a[]={1,2,12,-1,4,5,6};
	int n=6;
	if(triplet_sum(a,n))
    cout<<"\n triplet exists!";
    
    else
    cout<<"triplet doesnt exists!";
	return 0;
	
}
