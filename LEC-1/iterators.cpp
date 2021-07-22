#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	array<int, 5>arr;
	for (int i = 0; i < 5; ++i)
	{
		/* code */
		int e;
		cin>>e;
		arr[i] = e;
	}
	//begin() , end() , rbegin() , rend()
	for(auto it=arr.begin() ; it!=arr.end() ; it++)
	{
		cout<<*it;
		cout<<" ";
	}
	cout<<"\n";
	for(auto it=arr.rbegin() ; it!=arr.rend() ; it++)
	{
		cout<<*it;
		cout<<" ";
	}
	cout<<"\n";
	for(auto it=arr.cbegin() ; it!=arr.cend() ; it++)
	{
		cout<<*it;
		cout<<" ";
	}
	string s  ="Galib";
	for(auto i:s)
	{
		cout<<i;
		cout<<" ";
	}
	return 0;
}