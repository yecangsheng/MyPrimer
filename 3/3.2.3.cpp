#include<iostream>
using namespace std;
#include<cstring>
#include<cctype>
int main()
{
    string s("i am girl,my name is ma,i come from china.");
/*	for(char &c:s)
	{
		c='X';
	}
	cout<<s;
*/
	string r;
	for(auto c:s)
	{
		if(!ispunct(c))
		{
			r+=c;
		}
	}
	cout<<r<<endl;
	return 0;
}
