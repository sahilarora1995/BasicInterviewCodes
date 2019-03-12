#include<iostream>
#include<map>
using namespace std;
int main()
{
	std::map<int, std::string> n;
	n[1]="temp1";
	n[2]="temp2";
	n[3]="temp3";
    n[4]="temp4";
    
    cout<<n[2]<<endl;
    
    std::map<int, std::string>::iterator it;
    for(it= n.begin(); it != n.end();  it++)
    {
    	cout<<"key value is"<< it->first<< "  ";
    	cout<<"value is    "<< it->second<<endl;
	}
	
	cout<<"size of map :"<< n.size()<<endl;
	
	 cout<<"Whether hash map is empty or not "<< n.empty() ;
	   
    
	return 0;
}

