#include<iostream>
using namespace std;
#include<vector>

int main()
{
	vector<int> v;
	int a;
	while(cin>>a)
	{
		v.push_back(a);
	}
	while(!v.empty())
	{
		cout<<v.back();
		v.pop_back();
	
	}
	return 0;
}
