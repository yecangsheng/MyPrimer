#include<iostream>
using namespace std:

float myabs(float i);
int main()
{
	float a=0.0;
	cout<<"enter a number x:"<<endl;
	cin>>a;
	cout<<"the |x| is "<<myabs(a)<<endl;

	return 0;
}

float myabs(float i)
{
	if(i<0)
	{
		return -i;
	}else{
		return i;
	}

}
