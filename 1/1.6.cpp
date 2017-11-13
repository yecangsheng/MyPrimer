#include<iostream>
using namespace std;
#include"Sales_item.h"
#include<map>

int main()
{
	map<int,Sales_item> my;
	map<int,Sales_item>::iterator it,it2;
	Sales_item item;
	while(cin>>item){
	for(it=my.begin();it!=my.end();++it)
	{
		if(it->second.isbn()==item.isbn())
		{
			it->second+=item;
			break;
		}
	}
	if(it==my.end()){
		int a=it->first;
		a++;
		my[a]=item;
	}
	
	}
	for(it2=my.begin();it2!=my.end();++it2)
	{
		cout<<it2->first<<"==>>"<<it2->second<<endl;

	}

}
