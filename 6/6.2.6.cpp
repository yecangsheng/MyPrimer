#include<iostream>
using namespace std;

initializer_list<int> lst{1,2,3,4,5,6};
int add(initializer_list<int> lst){
	
	int sum=0;
	for(auto beg=lst.begin();beg!=lst.end();++beg)
	{
		sum+=*beg;
	}
	return sum;

}
int main()
{
	cout<<add({9,2,3})<<endl;
	return 0;
}

