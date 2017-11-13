#include<iostream>
using namespace std;
#include<vector>
#include<string>
int add(int v1,int v2)
{
	return v1+v2;
}

int sub(int v1,int v2)
{
	return v1-v2;
}

int mulit(int v1,int v2)
{
	return v1*v2;
}

int divi(int v1,int v2)
{
	return (v2!=0)?v1/v2:0;
}

int main()
{
	typedef int(*p)(int v1,int v2);
	vector<p> vec={add,sub,mulit,divi};
	for(auto a:vec){
		cout<<a(6,2)<<" "<<endl;
	}
	return 0;
}
