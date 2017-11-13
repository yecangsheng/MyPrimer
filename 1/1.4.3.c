#include<iostream>
using namespace std;
int main()
{
	int sum=0,value=0;
	cout<<"input your num,end with ctrl+d"<<endl;
	
	while(cin>>value)//the end of linux,mac:ctrl+d
	//win:ctrl+z
	{
		sum+=value;
	}
	cout<<"the sum of input is : "<<sum<<endl;
}
