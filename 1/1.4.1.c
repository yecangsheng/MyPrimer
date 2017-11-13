#include<iostream>
using namespace std;
int main()
{

	int val=50;
	int sum=0;
	while(val<=100)
	{
		sum += val;
		val++;
	}
	cout<<"sum from 50 to 100 is :"<<sum<<endl;
	
	cout<<"input two num"<<endl;
	int a=0,b=0;
	cin>>a>>b;
	int sum2=0;
	while(a<=b)
	{
		sum2+=a;
		a++;
	}
	cout<<"the sum from a to b is : "<<sum2<<endl;


	return 0;



}
