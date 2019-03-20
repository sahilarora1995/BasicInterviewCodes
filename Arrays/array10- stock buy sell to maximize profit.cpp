/*
Problem Statement:
--------------------
Stock Buy Sell to Maximize Profit
The cost of a stock on each day is given in an array, find the max profit that you can make
by buying and selling in those days. For example, if the given array is
{100, 180, 260, 310, 40, 535, 695}, the maximum profit can earned by buying on day 0,
selling on day 3. Again buy on day 4 and sell on day 6. If the given array of prices is
sorted in decreasing order, then profit cannot be earned at all.

Core Logic:
--------------------
1. Find the local minima and store it as starting index. If not exists, return.
2. Find the local maxima. and store it as ending index. If we reach the end, set the end as ending index.
3. Update the solution (Increment count of buy sell pairs)
4. Repeat the above steps if end is not reached

Time Complexity:
--------------------
o(n)

References:
---------------------
https://www.geeksforgeeks.org/stock-buy-sell/
http://www.cplusplus.com/

*/

#include<iostream>
#define ll int
#define debug(x) cout << x <<" ";
#define size(a) sizeof(a)/sizeof(a[0])
using namespace std;


struct stockBuy
{
	ll buy;
	ll sell;
};
void buySellforMaxProfit(ll stockprice[],ll n)
{
	if(n==1) return;
	stockBuy res[n/2+1];
	ll i=0; ll count =0;
	while(i<n-1)
	{
		while((i<n-1) && stockprice[i+1]<= stockprice[i])
		i++;
		if(i==n-1) break;
		res[count].buy= i++;
		while((i<n) && stockprice[i]>= stockprice[i-1])
		i++;
		res[count].sell= i-1;
		count++;
	}
	if(count==0) debug("not  possible")
	else
	{
		for(int i=0;i<count;i++)
		{
		debug(res[i].buy)
		debug(res[i].sell)
	    }
	}
	return;
}

int main()
{
	ios::sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	ll stockPrice[]= {100, 180, 260, 310, 40, 535, 695};
	ll n=size(stockPrice);
	buySellforMaxProfit(stockPrice,n);
	return 0;
}
