#include<iostream>
using namespace std;
#include<cstring>
#include<cctype>
int main()
{
	int flag=0;
	string now_s,old_s;
	while(cin>>now_s)
	{
		if(now_s==old_s)
		{
			if(isupper(now_s[0])){
			cout<<"the repeat word is "<<now_s<<endl;
			flag=1;
			break;}else
			continue;
		}else{
			old_s=now_s;
		}

	}
	if(flag=0)
	cout<<"no repeat word!"<<endl;
		

	return 0;
}
