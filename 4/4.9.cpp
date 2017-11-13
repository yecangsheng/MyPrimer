#include<iostream>
using namespace std;

int main()
{
	int a=0;
	char b='a';
	float c=0.0;
	double d=0.0;
	long long e=0;
	cout<<"the sizeof int is "<<sizeof(a)<<endl;
	cout<<"the sizeof int is "<<sizeof(int)<<endl;
	cout<<"the sizeof char is "<<sizeof(char)<<endl;
	cout<<"the sizeof float is "<<sizeof(float)<<endl;
	cout<<"the sizeof double is "<<sizeof(double)<<endl;
	cout<<"the sizeof long long is "<<sizeof(long long)<<endl;
	cout<<"the sizeof unsigned long is "<<sizeof(unsigned long)<<endl;
	int x[10];
	int *p=x;
	cout<<sizeof(x)/sizeof(*x)<<endl;
	cout<<sizeof(p)/sizeof(*p)<<endl;

	return 0;
}
