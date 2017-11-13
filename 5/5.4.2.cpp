#include<iostream>
using namespace std;
#include<vector>
int main()
{
	vector<int> v1={0,3,1,2},v2={0,1,1,2,3,4,5};
	int test=0;
	for(int i=0;i<((v1.size()<v2.size())?v1.size():v2.size());i++)
	{
		if(v1[i]==v2[i])
		test++;
		
	}
	if(test==((v1.size()<v2.size())?v1.size():v2.size()))
	{
		cout<<"yes"<<endl;
	}else{
		cout<<"no"<<endl;
	}
	return 0;
}
