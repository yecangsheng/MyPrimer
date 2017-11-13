#include<iostream>
using namespace std;

void exchange(int &i,int &j)
{
	int temp=0;
	temp=i;
	i=j;
	j=temp;

}
int main()
{
	int v1=10,v2=20;
	cout<<"before exchange the v1 = "<<v1<<"the v2 = "<<v2<<endl;
	exchange(v1,v2);
	cout<<" after exchange the v1 = "<<v1<<"the v2 = "<<v2<<endl;
	return 0;
}
