#include<iostream>
using namespace std;
int equilibrrium(int a[],int n);

int equilibrrium(int a[],int n)
{
	int sum,j,i,leftsum;
	sum=0,leftsum=0;
	for(j=0;j<n;j++)
	sum+=a[j];
	
	for(i=0;i<n;i++)// possible equilibrium position
	{
		sum-=a[i];   //calculating possible index
		if(leftsum==sum)
		return i;
		
		leftsum+=a[i];//updating leftsum
    }
    
    return -1;
	
}
int main()
{
 int a[]={-7,1,15,2,-4,3,0}	;
 int n=sizeof(a)/sizeof(a[0]);
 int k=equilibrrium(a,n);
 if(k==-1) cout<<"equilibrium index doent exists";
 else
 cout<<k;
 return 0;
}
