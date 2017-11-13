#include<iostream>
using namespace std;

int bigger(int,int*);
int main()
{
	int v1=10,v2=20;
	int *p=&v2;
	int max=bigger(v1,p);
	cout<<"the bigger one is "<<max<<endl;
	return 0;
}


int bigger(int v,int *p)
{
	return (v>*p)?v:*p;
}
