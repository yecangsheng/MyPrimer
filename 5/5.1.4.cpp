#include<iostream>
using namespace std;
#include<vector>
#include<cstring>
#include<map>
int main()
{
	vector<string> vec;
//	vector<string>:: iterator it=vec.begin(),it2;
	string max_str;
	string mystr,before_str,str;
	int max=0,repet=0;
	while(cin>>str)
	{
		vec.push_back(str);
	}
	for(auto a:vec)
	{
		cout<<a<<" ";
	}
	cout<<endl;
	for(auto it=vec.begin();it!=vec.end();it++)
	{	
		mystr=*it;		
		auto it2=it+1;
		if(mystr==before_str&&it2!=vec.end())
		{
			repet++;
		}
		else if(mystr==before_str&&it2==vec.end())
			{
				repet++;
				if(max<repet)
				{
					max_str=mystr;
					max=repet;
				}
			}
		else{
			if(max<repet)
			{
				max_str=before_str;
				max=repet;
			}
			repet=0;
			before_str=mystr;
		}
	}
	
	cout<<"the max str is "<<max_str<<" it repet "<<++max<<endl;
	return 0;
}
