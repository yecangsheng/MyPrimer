#include<iostream>
using namespace std;

int main()
{
	int ia[5]={0};
	for(int *p=begin(ia);p!=end(ia);++p)
	{
		cout<<*p<<" ";
	}
	cout<<"first"<<endl;
	for(int i=0;i<5;++i)
	{
		cout<<ia[i]<<" ";
	}
	cout<<"second"<<endl;
	for(int i=0;i<5;++i)
	{
		int *p=ia;
		cout<<*p<<" ";
	}
	cout<<"third"<<endl;
	return 0;
}
