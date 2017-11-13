#include<iostream>
using namespace std;
#include<cstring>
struct Sales_data{
	string bookNo;
	unsigned units_sold=0;
	double revenue=0.0;
};

int main()
{
	Sales_data total;
	if(cin>>total.bookNo>>total.units_sold>>total.revenue)
	{
		Sales_data trans;
		while(cin>>trans.bookNo>>trans.units_sold>>trans.revenue)
		{
			if(total.bookNo==trans.bookNo)
			{
				total.units_sold+=trans.units_sold;
				total.revenue+=trans.revenue;

			}else{
				cout<<total.bookNo<<" "<<total.units_sold<<" "<<total.revenue<<endl;
				total.bookNo=trans.bookNo;
				total.units_sold=trans.units_sold;
				total.revenue=trans.revenue;
			}
		}
		cout<<total.bookNo<<" "<<total.units_sold<<" "<<total.revenue<<endl;
	}else{
		cout<<"no data!"<<endl;
		return -1;

	}

	return 0;
}


