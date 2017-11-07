#ifndef QUOTE_H
#define QUOTE_H
#include<iostream>
#include<string>
#include<memory>
#include<set>
using namespace std;

class Quote{
    friend double print_total(ostream&,const Quote&,size_t);
public:
    Quote();
    Quote(const string &book,double sales_price):BookNo(book),price(sales_price){
          cout<<"this is quote's constructor"<<endl;
    }
    Quote(const Quote & q) {
          BookNo=q.BookNo;
          price=q.price;
          cout<<"this is quote's copy constructor"<<endl;
      }
    Quote& operator=(const Quote& q){
               BookNo=q.BookNo;
               price=q.price;
          cout<<"this is quote's = "<<endl;
               
         return *this;
     }
    Quote(const Quote&& q) noexcept:BookNo(move(q.BookNo)),price(move(q.price)){
          cout<<"this is quote's move copy constructor"<<endl;
    }
    Quote& operator=(const Quote&& q)noexcept{
                  BookNo=move(q.BookNo);
                  price=move(q.price);
          cout<<"this is quote's move ="<<endl;
              return *this;
      }
    virtual Quote* clone() const & {return new Quote(*this);}
    string isbn() const{ return BookNo;}
    virtual double net_price(size_t n) const{
        return n*price;
    }
    virtual void debug(){
        cout<<"bookno: "<<BookNo<<" price: "<<price<<endl;
    }
    virtual ~Quote(){cout<<"this is Quote's destructor "<<endl;}
private:
    string BookNo;
protected:
    double price;
};

class bulk_quote : public Quote
{
public:
    bulk_quote();
    bulk_quote(const string &s,double p,size_t n,double d):Quote(s,p),min_qty(n),discount(d){
          cout<<"this is bulk_quote's constructor"<<endl;
    }
    bulk_quote(const bulk_quote &bq):Quote(bq),min_qty(bq.min_qty),discount(bq.discount){
          cout<<"this is bulk_quote's copy constructor"<<endl;
    }
	bulk_quote& operator=(const bulk_quote& bq){
            Quote::operator=(bq);
		    min_qty=bq.min_qty;
            discount=bq.discount;
          cout<<"this is bulk_quote's ="<<endl;
        return *this;
    }
    bulk_quote(const bulk_quote&& bq) noexcept:Quote(move(bq)),min_qty(move(bq.min_qty)),discount(move(bq.discount)){
          cout<<"this is bulk_quote's move copy constructor"<<endl;
    }
    bulk_quote& operator=(const bulk_quote&& bq) noexcept{
            Quote::operator=(move(bq));
		    min_qty=move(bq.min_qty);
            discount=move(bq.discount);
          cout<<"this is bulk_quote's move ="<<endl;
        return *this;
    }
    bulk_quote* clone()const &{return new bulk_quote(*this);}
	double net_price(size_t n) const override
    {
        if(n<min_qty)
        return n*price;
        else
        return n*discount*price;

    }
    void debug() override{
        Quote::debug();
        cout<<" the min_qty : "<<min_qty<<" dicount : "<<discount<<endl;
    }
    ~bulk_quote(){cout<<"this is bulk_quote's destructor"<<endl;}
private:
    size_t min_qty=0;
    double discount=0.0;

};
double print_total(ostream& os,const Quote& q,size_t n)
{
    double ret=q.net_price(n);
    os<<"the name of book is"<<q.isbn()<<"sold:"<<n<<"total price is "<<ret<<endl;
    return ret;
}
class Basket{
public:
    void add_item(const Quote &sale)
    {
        items.insert(shared_ptr<Quote>(sale.clone()));
    }
    double total_receipt(ostream&) const;

private:
    static bool compares(const shared_ptr<Quote> &a,const shared_ptr<Quote>& b){
        return a->isbn()<b->isbn();
    }
    multiset<shared_ptr<Quote>,decltype(compares)*> items{compares};
};
double Basket::total_receipt(ostream &os) const
{
    double sum=0.0;
    for(auto iter=items.cbegin();iter!=items.cend();iter=items.upper_bound(*iter))
    {
        sum+=print_total(os,**iter,items.count(*iter));
    }
    os<<"total sale:"<<sum<<endl;
    return sum;
}
#endif
