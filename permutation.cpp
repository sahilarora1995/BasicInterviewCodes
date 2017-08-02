#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
void permute(char *a,int l,int r);
void swap(int *a,int *b);
void swap(char *a,char *b)
{
	char temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void permute(char *a,int l,int r)
{
	if(l==r)
     
	 	puts(a);
	
	else
	{
		for(int i=l;i<=r;i++)
		{
			swap((a+l),(a+i));
			permute(a,l+1,r);
		    swap((a+l),(a+i));
		}
   }

}
int main()
{
	char a[]="ABCD";
	int n=strlen(a);
	permute(a,0,n-1);
	return 0;
}
