#include<iostream>
#include<math.h>
#include<string>


using namespace std;

long long smallest(long long num) 
{ 

    long long freq[10] = {0}; 
  
    while (num) 
    { 
        long long d = num % 10; 
        freq[d]++; 
        num = num / 10; 
    } 
  
    long long result = 0; 
    for (int i = 1 ; i <= 9 ; i++) 
    { 
        if (freq[i]) 
        { 
            result = i; 
            freq[i]--; 
            break; 
        } 
    } 

    for (int i = 0 ; i <= 9 ; i++) 
        while (freq[i]--) 
            result = result * 10 + i; 
  
    return result; 
} 



unsigned concatenate(unsigned x, unsigned y) {
    unsigned pow = 10;
    while(y >= pow)
        pow *= 10;
    return x * pow + y;        
}

string construct(string a, int d)
{
	
	string ab;
	int i=0;
	while(a[i]!=NULL)
	{
	
	if(a[i]>d)
	{
	ab[i]=d;
	i++;
    }
	
	else 
	{
		ab[i]=a[i];
		i++;
	}
	cout<<ab[i];
    }
	return ab;
}
int main()
{
    int n,d,t;
    cin>>t;
    while(t>=1 && t<=100)
    {
     t--;	
     cin>>n;
	 cin>>d;
	 if(d>=1 && d<=9)
	 {
	 	string s = to_string(n);
	 string b=construct(s,d);	
	 cout<<b;
     //long long p=smallest(concatenate(a,d));
  //   cout<<p/10<<endl;
     }
     
    }

	return 0;
}
