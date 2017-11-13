#include<iostream>
using namespace std;
#include<vector>
#include<cstring>

int main()
{
	string s("some string");
	string::iterator it=s.begin();
	for(;it!=s.end()&&!isspace(*it);it++)
	{
		*it=toupper(*it);
	}
	cout<<s<<endl;

	vector<int> vec(10,23);
	vector<int>::iterator iter=vec.begin();
	for(;iter!=vec.end();++iter)
	{
		*iter*=2;
	}
	for(auto a:vec)
	{
		cout<<a<<" ";
	}
	cout<<endl;
	return 0;
}
