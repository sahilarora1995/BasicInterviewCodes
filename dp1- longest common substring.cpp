//DP-1 (Longest common substring)

#include<iostream>
using namespace std;

void longestCommonsubstring(string s1,string s2);

void longestCommonsubstring(string s1,string s2)
{
	int R= s1.length()+1;
	int C= s2.length()+1;
	int lcsub[R][C];
	
	for(int i=0;i<R-1;i++)
	lcsub[0][i]=0;
	
	for(int j=0;j<C-1;j++)
	lcsub[j][0]=0;
	
		for(int i=0;i<R;i++)

	{
		cout<<endl;
		for(int j=0;j<C;j++)
		{
			cout<<lcsub[i][j];
	}
}
	
/*	
	int max= INT_MIN;
	for(int i=1;i<R;i++)
	{
		for(int j=1;j<C;j++)
		{
			if(s1[i]==s2[j])
			lcsub[i][j]=lcsub[i-1][j-1]+1;
			
			else
			lcsub[i][j]=0;
			
			if(lcsub[i][j]>max)
			max=lcsub[i][j];
			
		}
	}
	
		for(int i=0;i<R;i++)

	{
		cout<<endl;
		for(int j=0;j<C;j++)
		{
			cout<<lcsub[i][j];
	}
}
	int f=1;
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			//cout<<lcsub[i][j];
			if(lcsub[i][j]==f)
			{
		//	cout<<s1[i];
			f++;
			if(f==max) break;
			
		    }
		}
    }
	
//	cout<<max+1;
*/	
	
}

int main()
{
    string s1="abcdaf";
    string s2="bcd";
    longestCommonsubstring(s1,s2);	
	
	return 0;
	
}
