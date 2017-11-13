#include<iostream>
using namespace std;

int i = 42;
int main()
{
	int i = 0;
	int j = i;
	cout<<j<<endl;
	cout<<i<<endl;
	cout<<::i<<endl;

	int x=100,sum=0;
	for(int x=0;x!=10;++x)
	{
		sum+=i;
	}
	cout<<x<<" "<<sum<<endl;


	return 0;
}
