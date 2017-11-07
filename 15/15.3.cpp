#include"15.3.h"
#include<vector>
#include<memory>
int main()
{
    Quote q("100",10);
    print_total(cout,q,5);
    bulk_quote a("200",10,10,0.8);
    q.debug();
    a.debug();
    print_total(cout,a,5);
    print_total(cout,a,20);
    cout<<"--------------------------------------"<<endl;

    vector<Quote> Qvec;
    Qvec.push_back(q);
    Qvec.push_back(a);
    for(auto v:Qvec)
    {
        print_total(cout,v,5);
    }
    vector<shared_ptr<Quote>> sQvec;
    sQvec.push_back(make_shared<Quote>(q));
    sQvec.push_back(make_shared<bulk_quote>(a));
    for(auto v:sQvec)
    {
        print_total(cout,*v,20);
       // cout<<v->net_price(20)<<endl;;
        
    }
    cout<<"--------------------------------------"<<endl;
    Basket basket;
    basket.add_item(q);
    basket.add_item(q);
    
    basket.add_item(a);
    basket.add_item(a);
    basket.add_item(a);
    basket.add_item(a);
    basket.add_item(a);
    basket.add_item(a);
    basket.add_item(a);
    basket.add_item(a);
    basket.add_item(a);
    basket.add_item(a);
    basket.add_item(a);
    basket.add_item(a);
    basket.add_item(a);
    basket.total_receipt(cout);
    basket.total_receipt(cout);
    basket.total_receipt(cout);
    basket.total_receipt(cout);
    basket.total_receipt(cout);
    basket.total_receipt(cout);
    basket.total_receipt(cout);
    basket.total_receipt(cout);
    basket.total_receipt(cout);
    basket.total_receipt(cout);
    basket.total_receipt(cout);
    basket.total_receipt(cout);

    return 0;

}
