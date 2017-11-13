#include<iostream>
using namespace std;

int foo();
int main()
{
	cout<<"you have 10 times!"<<endl;
	begin:
	cout<<"enter y or n to choose use or not."<<endl;
	char a;
	cin>>a;
	if(a=='y')
	{
		cout<<"you have "<<foo()<<" times"<<endl;
		goto begin;
	}
	

	return 0;
}

int foo()
{
	static int times=10;
	times--;
	return times;

}
