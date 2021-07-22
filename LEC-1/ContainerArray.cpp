#include<iostream>
#include <array>

using namespace std;

array<int , 5>a;

int main()
{
	array<int , 5>b;
	array<int , 6>c;
	c.fill(10);
	for(int i =0 ; i<5; i++)
	{
		cout<<a.at(i)<<" ";
	}

	for(int i =0 ; i<5; i++)
	{
		cout<<b[i]<<" ";
	}

	for(int i =0 ; i<6; i++)
	{
		cout<<c[i]<<" ";
	}

	cout<<a.front()<<" "<<a.back()<<endl;
}