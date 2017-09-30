#include<iostream>
#include<queue>
using namespace std;
int main()
{
	queue <int> s;
	
	for(int i=0;i<10;i++)
	s.push(i);
	
	cout<<"size of queue is : " <<s.size();
	
	while(!s.empty())
	{
		cout<<"popped element is :" << s.front<<endl;
		s.pop();
	}
return 0;
}
