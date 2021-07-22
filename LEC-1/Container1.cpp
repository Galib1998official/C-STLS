#include<bits/stdc++.h>
#include <string>
using namespace std; //Default like creating a scope name 
					//std and putting all standard function like cout , cin apart from that vector and 
					//other container prperties and method is include there
namespace galib{
	string name ="Galib Hazarika";
	int age = 25;
	int function(int m1 , int m2 , int m3){
		return (m1+m2+m3)/3;
	}
}
namespace fun{
	int val = 10;
	int fun(int val)
	{
		return val*10;
	}
}

struct Arbitary{
	string name;
	int age;
	int id;
	bool isAStudent;
	Arbitary(string name, int age , int id, bool isAStudent)
	{
		this->name = name;
		this->age  = age;
		this->id = id;
		this->isAStudent = isAStudent;
	}
};
struct Node{
	int val;
	Node* next;
	Node(int val)
	{
		this->val = val;
		next = NULL;
	}
};

int main()
{
	double val = 20.00;
	cout<<fun::val<<endl;
	cout<<val<<endl;
	cout<<fun::fun(10)<<endl;
	cout<<galib::name<<endl;
	cout<<galib::age<<endl;
	cout<<galib::function(57,98,67)<<endl;


	//Object 
	Arbitary* o = new Arbitary("Galib" , 23 , 1023 , false);
	cout<<o->id<<endl;
	Node* n = new Node(23);
	cout<<n->val;


}