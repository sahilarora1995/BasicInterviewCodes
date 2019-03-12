#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack <int> s;
	
	for(int i=0;i<10;i++)
	s.push(i);
	
	cout<<"size of stack is : " <<s.size();
	 
	while(!s.empty())
	{
		cout<<"popped element is :" << s.top()<<endl;
		s.pop();
	}
return 0;
}
