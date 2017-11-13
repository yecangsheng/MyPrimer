#include<iostream>
using namespace std;
#include<cstring>
class Sales_data{
	
	friend Sales_data add(const Sales_data&,const Sales_data&);
	friend ostream &print(ostream&,const Sales_data&);
	friend istream &resd(istream&, Sales_data&);

public:
	string isbn() const {return bookNo;}
	Sales_data& combine(const Sales_data &);
	double avg_price() const;	
private:  
	string bookNo;
    unsigned units_sold=0;
    double revenue=0.0;
   };

Sales_data add(const Sales_data&,const Sales_data&);
ostream &print(ostream&,const Sales_data&);
istream &resd(istream&, Sales_data&);

int main()
{
	
	

	return 0;

}

ostream &print(ostream& os,const Sales_data& item)
{
	os<<item.isbn()<<" "<<item.units_sold<<" "<<item.revenue<<" "<<item.avg_price(); 
	return os;
}
istream &read(istream& is, Sales_data& item)
{
	double price=0;
	is>>item.bookNo>>item.units_sold>>price;
	item.revenue=item.units_sold*price;
	return is;
}
