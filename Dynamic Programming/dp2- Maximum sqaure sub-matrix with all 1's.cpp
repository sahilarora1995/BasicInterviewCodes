#include<iostream>
using namespace std;

int min_of_three(int,int,int);
int calculate_length_maxsqaure(bool max[][5]);


int calculate_length_maxsqaure(bool max[4][5])
{
	
int temp[4][5];

//base cases
for(int i=0;i<4;i++) temp[i][0]= max[i][0];
for(int j=0;j<5;j++) temp[0][j]= max[0][j];

int m=INT_MIN;

//core logic
for(int i=1;i<4;i++)
{
	for(int j=1;j<5;j++)
	{
		if(max[i][j]==1)
		temp[i][j]=min_of_three(temp[i][j-1],temp[i-1][j],temp[i-1][j-1])+1;
		else
		temp[i][j]=0;
		
		//calculating the maximum till now
		if(temp[i][j]>m)
		m=temp[i][j];
	}
	
}

}
int min_of_three(int a,int b,int c)
{
	return(a<b? (a<c?a:c):(b<c?b:c));	
}

//Driver program
int main()
{
	bool a[4][5]={{0,0,1,1,1},{1,0,1,1,1},{0,1,1,1,1},{1,0,1,1,1}};
	int dim=calculate_length_maxsqaure(a);
	
	//priting matrix of mx sqaure of all 1's
	for(int i=0;i<dim;i++)
	{
		cout<<endl;
		for(int j=0;j<dim;j++)
		{
			cout<<1;
		}
	}
	
	return 0;
}
