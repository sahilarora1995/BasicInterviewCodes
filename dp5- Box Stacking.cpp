/* Problem Statement: You are given a set of n types of rectangular 3-D boxes, 
where the i^th box has height h(i), width w(i) and depth d(i) (all real numbers). 
You want to create a stack of boxes which is as tall as possible, but you can only
stack a box on top of another box if the dimensions of the 2-D base of the lower 
box are each strictly larger than those of the 2-D base of the higher box. Of course, 
you can rotate a box so that any side functions as its base. It is also allowable to 
use multiple instances of the same type of box. 


References:  https://www.geeksforgeeks.org/box-stacking-problem-dp-22/
             https://github.com/mission-peace/interview
			 http://www.cplusplus.com/reference/cstdlib/qsort/ 
*/

#include<iostream>
#include<stdlib.h>
#include<stdio.h> 
using namespace std;

int min_two_values(int a,int b)
{
	return (a<b? a:b);
}

int max_two_values(int a,int b)
{
	return (a>b? a:b);
}
struct dim
{
	int l,b,h;
};

/* http://www.cplusplus.com/reference/string/string/compare/ */
int compare (const void *a, const void * b) 
{ 
    return ( (*(dim *)b).l * (*(dim *)b).b ) - 
           ( (*(dim *)a).l * (*(dim *)a).b ); 
} 


//Core logic
int stackheight(dim a[], int n)
{
	dim r[3*n];
	int index=0;
	
	// Finding various permutations and intializing them
	for (int i=0;i<n;i++)
	{
		r[index].h= a[i].h;
		r[index].l= max_two_values(a[i].l,a[i].b);
		r[index].b= min_two_values(a[i].l,a[i].b);
		index++;
		
		
		r[index].h= a[i].b;
		r[index].l= max_two_values(a[i].l,a[i].h);
		r[index].b= min_two_values(a[i].l,a[i].h);
		index++;
		
		
		
		r[index].h= a[i].l;
		r[index].l= max_two_values(a[i].h,a[i].b);
		r[index].b= min_two_values(a[i].h,a[i].b);
		index++;
		
		
    }
        // updting the current size
		n=3*n;
		
		//sorting all possibledimensions on the basis of base area, for syntax I referred: http://www.cplusplus.com/reference/cstdlib/qsort/
		qsort(r,n,sizeof(r[0]),compare);
		
		
		int max_height[n];
		//base case
		for(int i=0;i<n;i++) max_height[i]=r[i].h;
		
		//filling the table as it follows optimal substrcutre and recusrive property for Dynamic programming
		for(int i=1;i<n;i++)
		{
			for(int j=0;j<i;j++)
			{
				if(r[i].b <r[j].b && r[i].l <r[j].l && max_height[i] < max_height[j] + r[i].h)
				{
					//updting maximum height 
					max_height[i]=max_height[j] + r[i].h;
				}
			}
		}
   
		
		int max=INT_MIN;
		//searching for maximum height obtained above
		for (int i=0;i<n;i++)
		{
			if(max< max_height[i])
			max= max_height[i];
		}
	return max;
}

//driver code
int main()
{
    dim arr[] = { {1,2,4},{3,2,5} }; 
  int n = sizeof(arr)/sizeof(arr[0]); 
	
	cout<<"Maximum height possible is : "<<stackheight(arr,n);
	return 0;
}
