#include <iostream>
#include <vector>

using namespace std;
/*Here the size is 10^7
/*but for bool it is 10^8*/
int main(){
	/*So whatever array like int , double string or char will be define here the maximum size is 10^6 */
	/*for bool it is 10^7*/
	int arr[99999]={0};
	//double darr[10000000]={0};

	// for(auto it:arr)
	// {
	// 	cout<<it;
	// 	cout<<" ";
	// }
	// cout<<endl;
	vector<int>v;
	v.push_back(1);
	cout<<v.size()<<endl;
	v.push_back(2);
	cout<<v.size()<<endl;
	v.push_back(3);
	cout<<v.size()<<endl;


	v.clear();
	cout<<v.size()<<endl;


	vector<int>vec(5,9);
	for(auto i:vec)
	{
		cout<<i;
		cout<<" ";
	}
	cout<<endl;
	vec.pop_back();
	vec.push_back(10);
	for(auto i:vec)
	{
		cout<<i;
		cout<<" ";
	}
	cout<<endl;
	vector<int>vec3(vec);
	for(auto i:vec3)
	{
		cout<<i;
		cout<<" ";
	}
	cout<<endl;
	vector<int>vec4(vec3.begin() , vec3.end());
	for(auto i:vec4)
	{
		cout<<i;
		cout<<" ";
	}
	cout<<endl;
	
	//2D Array

	vector<int>v1;
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);


	vector<int>v2;
	v2.push_back(2);
	v2.push_back(4);
	v2.push_back(9);


	vector<int>v3;
	v3.push_back(21);
	v3.push_back(31);
	v3.push_back(41);
	v3.push_back(45);


	vector<vector<int>>final;
	final.push_back(v1);
	final.push_back(v2);
	final.push_back(v3);

	for(int i =0 ;i<final.size() ; i++)
	{
		for(int j=0; j<final[i].size() ; j++)
		{
			cout<<final[i][j];
			cout<<" ";
		}
		cout<<endl;
	}

vector<vector<int>>gen(3,vector<int>(3,5));
for(int i=0 ; i<gen.size() ; i++)
{
	for(int j =0; j<gen[i].size() ; j++)
	{
		cout<<gen[i][j];
		cout<<" ";
	}
	cout<<endl;
}
vector<vector<vector<int>>>myvec(5,vector<vector<int>>(7,vector<int>(8,0)));
for(auto i:myvec)
{
	for(auto j: i)
	{
		for(auto k: j)
		{
			cout<<k;
			cout<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}



	return 0;
}