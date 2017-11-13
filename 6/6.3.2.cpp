#include<iostream>
using namespace std;
#include<vector>
void output(vector<int> v,size_t i)
{
	if(i<v.size())
	{
	cout<<v[i]<<endl;
	i++;
	output(v,i);
	}
}

int main()
{
	vector<int> vec={1,2,3,4,5,6};
	output(vec,0);
	return 0;

}
