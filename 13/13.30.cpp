#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
class HasPtr{
friend void swap(HasPtr&,HasPtr&);
friend bool operator<(const HasPtr&,const HasPtr&);
public:
    HasPtr();
    HasPtr(std::string s,int n){
        auto n_p=new std::string(s);
        delete ps;
        ps=n_p;
        i=n;
    }
    HasPtr(const HasPtr &h):ps(new std::string(*h.ps)),i(h.i){}
    HasPtr& operator=(const HasPtr& h)
    {
        auto new_ps=new std::string(*h.ps);
        delete ps;
        ps=new_ps;
        i=h.i;
        return *this;
    }
    ~HasPtr(){delete ps;
  //  std::cout<<"destory"<<std::endl;
    }
    void display(){std::cout<<*ps<<"-"<<i<<std::endl;}
private:
    std::string *ps;
    int i;

};

inline void swap(HasPtr& a,HasPtr& b)
{
    std::swap(a.ps,b.ps);
    
   
   std::swap(a.i,b.i);
    std:: cout<<"123"<<std::endl;

}
bool operator<(const HasPtr &a,const HasPtr &b)
{
    std::cout<<"ues the <"<<std::endl;
   // return *a.ps<*b.ps;
   return a.i<b.i;
}
int main()
{
    HasPtr h1("anna",1),h2("tom",2),h3("jhon",6),h4("joy",5),h5("sam",9);
    h1.display();
    h2.display();
    if(h1<h2)
    {
        swap(h1,h2);
    }
    h1.display();
    h2.display();
    std::cout<<"-------------------------"<<std::endl;
    std::vector<HasPtr> vec{h5,h1,h3,h4,h2};
    for(auto v:vec)
    {
        v.display();
    }
    std::sort(vec.begin(),vec.end());
    for(auto v:vec)
    {
        v.display();
    }
    
    return 0;
}
