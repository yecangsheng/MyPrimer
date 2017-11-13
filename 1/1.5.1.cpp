#include<iostream>
using namespace std;
#include"Sales_item.h"

int main()
{
	Sales_item it1,it2;
	cout<<"please input the bookno,units_sold and revenue: "<<endl;
	cin>>it1;
	cout<<"please input the bookno,units_sold and revenue which have a same bookno with the first: "<<endl;
	cin>>it2;
	if(it1.isbn()==it2.isbn())
	{	
		cout<<it1+it2;
		cout<<endl;
	}else{
		cout<<"you didn't input the same bookno!"<<endl;
	}


	return 0;
}
