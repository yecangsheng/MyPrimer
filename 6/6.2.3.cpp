#include<iostream>
using namespace std;
#include<cstring>
#include<cctype>
bool have_upper(const string &s);
void lower(string &s);
int main()
{

	cout<<"please input a string:"<<endl;
	string str;
	cin>>str;
	lower(str);
	return 0;
}

bool have_upper(const string &s)
{
	string::size_type size=0;
	size=s.size();
	bool flag=0;
	for(int i=0;i<size;i++)
	{
		if(isupper(s[i]))
		{
			flag=1;
			break;
		}
	}
	if(flag)
	{
		return flag;
	}else{
		return flag;
	}
}

void lower(string &s)
{
	if(have_upper(s))
	{
		for(auto &a:s)
		{
			a=tolower(a);
			//cout<<a<<endl;
		}
		cout<<"after tolower the string is"<<s<<endl;
	}else{
		cout<<"the string don't have the upper"<<endl;
	}
}
