#include<iostream>
using namespace std;
#include<cassert>
//#define DEBUG
int main()
{
#ifdef NDEBUG
		cout<<"nothing"<<endl;
		return 0;
#endif

	int i=0;
	cin>>i;
	assert(i==1);
	cout<<"hellow world!"<<endl;
	return 0;
}
