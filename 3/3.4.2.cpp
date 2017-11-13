#include<iostream>
using namespace std;
#include<vector>

int main()
{
	int grade=0;
	vector<int> vec(11,0);
	vector<int>::iterator it=vec.begin();
	while(cin>>grade&&grade<=100)
	{
		it+=int(grade/10);
		//cout<<int(grade/10);
		(*it)++;
		it=vec.begin();
	}
	for(auto a:vec)
	{
		cout<<a<<" ";
	}
	cout<<endl;
	return 0;
}
