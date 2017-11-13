#include<iostream>
using namespace std;
#include<cstring>
int main()
{
	const char a[20]="hellow";
	const char b[20]="world";
	char c[40]={};
	strcpy(c,a);
	strcat(c," ");
	strcat(c,b);
	cout<<c<<endl;
	return 0;
}
