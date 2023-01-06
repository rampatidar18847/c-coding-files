//what is the purpose of using STL in c++ ?
//The Standard Template Library (STL) is a set of C++ template classes to provide common programming data structures
// and functions such as lists, stacks, arrays, etc. //

#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
    
int main()
{
	vector<int> v={2,8,10};
	v.push_back(20);
	v.push_back(30);
	v.insert(v.end(),9);
	
	cout<<"using iterator"<<endl;
	vector<int> ::iterator itr;
	for ( itr = v.begin(); itr!= v.end(); itr++)
	{
		cout<<*itr<<endl;
	}
	
	cout<<"using full loop"<<endl;
	for (int i = 0; i < v.size(); i++)
	{
		cout<<v[i]<<endl;
	}
	
	
		
	
	    cout<<"Using For Each Loop"<<endl;
	for(int x:v)
		cout<<x<<endl;
        //cout<<v.reserve(v.begin() , v.end());
		cout<<"at(2) funtion call : "<<v.at(2)<<endl;
		cout<<"front() and back() function call : "<<v.front()<<" and " <<v.back()<<endl;

	if (v.empty())
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
	
	
		
}
    
