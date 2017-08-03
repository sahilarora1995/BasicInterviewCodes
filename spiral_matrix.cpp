#include<iostream>
using namespace std;
void spiral(int a[][3]);

  /*   --> t 123
             456
       --> b 789<-- r
        
             ^
             l       */

void spiral(int a[][3])
{
	int l,r,dir,t,b;
	l=0, r=2,dir=0,t=0,b=2;
	while(l<=r&&t<=b)
	{
		//for printing upper rows
		if(dir==0)
		{
		
		for(int i=l;i<=r;i++)
			cout<<a[t][i];
			
			t++;
		
	    }

        //printing column from top to bottom	    
	    else if(dir==1)
		{
		
		for(int i=t;i<=b;i++)
		cout<<a[i][r];
		
			r--;
		
	    }
	    //printing rows from right to left
	    else if(dir==2)
		{
		
		for(int i=r;i>=l;i--)
			cout<<a[b][i];
			
			b--;
	    }
	    //printing column from bottom to top 
	    else if(dir==3)
		{
		
		for(int i=b;i>=t;i--)
			cout<<a[i][l];
			
			l++;
	
	    }
    dir=(dir+1)%4;


	}
	
}
int main()
{
      int a[3][3]= { {1,2,3},{4,5,6},{7,8,9}};
      spiral(a);
	return 0;
}

