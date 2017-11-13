#include<iostream>
using namespace std;
#include<vector>
#include<cstring>
#include<cctype>
int main()
{
/*	vector<string> vec;
	string str;
	while(cin>>str)
	{
		for(int i=0;i<str.size();i++)
		{
			str[i]=toupper(str[i]);
		}
		vec.push_back(str);
	}
	cout<<endl;
	for(auto a:vec)
	{
		cout<<a<<endl;
	}
*/
	cout<<"input a series of number,end with ctrl + d."<<endl;
	int a;
	vector<int> vec,res,res2;
	while(cin>>a)
	{
		vec.push_back(a);
	}
	for(int i=0;i<vec.size()-1;i++)
	{
		res.push_back(vec[i]+vec[i+1]);
	}
	cout<<endl;
	for(auto b:vec)
	{
		cout<<b<<"  ";
	}
	cout<<endl;
	
	for(auto b:res)
	{
		cout<<b<<"  ";
	}
	cout<<endl;

	int i=0,j=vec.size()-1;
	while(i<j)
	{
		res2.push_back(vec[i]+vec[j]);
		i++;
		j--;
	}
	if(i==j)
	{
		res2.push_back(vec[i]);
	}
	for(auto b:res2)
	{
		cout<<b<<"  ";
	}
	cout<<endl;
	return 0;
}
