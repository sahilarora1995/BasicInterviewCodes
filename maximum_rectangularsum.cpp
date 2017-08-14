#include<iostream>
using namespace std;
void max_sum_subarray(int a[][3]);
int kadane(int *a,int *start,int *finish, int n);
int kadane(int *a,int *start,int *finish, int n)
{
	int sum=0,maxsum=INT_MIN,i;
	*finish=-1;
	int lstart=0;
	
	//scsnninhg from left to right and checking each combination
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
		
		//if total sum is negative make it 0 and update lstart
		if(sum<0)
		{
			sum=0;
			lstart=i+1;
		}
		
	// if current sum is greater than maxsum then upodate	
   else if(sum>maxsum)
   {
   	maxsum=sum;
   	*start=lstart;
   	*finish=i;
   }
   
    }
    //if atleast 1 element is positive
    if(*finish!=-1 ) return maxsum;
    
    //if all emewents are negative then upodate and choose maximum single element
    maxsum=a[0];
    *start=*finish=0;
    
    for(i=1;i<n;i++)
    {
    	if(a[i]>maxsum)
    	{
    		maxsum=a[i];
    		*start=*finish=i;
		}
	}
 return maxsum;
}


void max_sum_subarray(int a[][3])
{
  int t[3];
  int sum,maxsum,start,finish,fleft,fright,ftop,fbottom;
  maxsum=INT_MIN;
  
  
  for(int left=0;left<3;left++)
  {
  	for(int i=0;i<3;i++)
    t[i]=0;
	
	for(int right= left; right<3;right++)
	{
		for(int i=0;i<3;i++)
		t[i]+=a[i][right];
		
		sum=kadane(t,&start,&finish,3);
		if(sum>maxsum)
		{
			maxsum=sum;
			fleft=left;
			fright=right;
			ftop=start;;
			fbottom=finish;
		}
	}  	
  	
  }	
  
  for(int i=ftop;i<fbottom;i++)
  {
  	for(int j=fleft;j<fright;j++)
  	{
  		
	  cout<<a[i][j];
  }
 }
 
}
int main()
{
	int a[3][3]={{1,2,3},{4,6,-8},{9,0,-5}};
	max_sum_subarray(a);
	return 0;
	
}
