#include<iostream>
using namespace std;
#include<memory>
#include<cstring>
#include<vector>
class StrBlobPtr;
class StrBlob{
public:
    friend class StrBlobPtr;
    typedef vector<string>::size_type size_type;
    StrBlob():data(make_shared<vector<string>>()){}

    StrBlob(initializer_list<string> il):data(make_shared<vector<string>>(il)){ }
    
    size_type size() const{return data->size();}
    
    bool empty() const{ return data->empty(); }
    
    void push_back(const string &t){data->push_bact(t);}
    
    void pop_back(){
        check(0,"pop_back on empty STRBlob");
        data->pop_back();
    }
    
    string& front(){
        check(0,"front on the empty StrBlob" );
        return data->front();
    }
    
    string& back(){
        check(0,"back on the empty SteBlob");
    }
    StrBlobPtr  begin(){return StrBlobPtr(this*);}
    StrBlobPtr end(){auto ret =StrBlobPtr(*this,data->size());
                     return ret;
                     }
private:
    shared_ptr<vector<string>> data;
    void check(size_type i,const string &msg) const{
        if(i>=data.size())
        throw out_of_range(msg);

    }
};
class StrBlobPtr{
public:
    StrBlobPtr():curr(0){}

    StrBlobPtr(StrBlob &a,size_t sz=0):
        wptr(a.data),curr(sz){}

        string& deref() const {auto p=check(curr,"deereference past end");
        return (*p)[curr];}

        StrBlobPtr& incr(){check(curr,"increment past end of strblobptr");
        ++curr;
        return *this;
        }
private:
    shared_ptr<vector<string>> check(size_t i,const string &msg) const{
        auto ret=wptr.lock();
        if(!ret){
            throw runtime_error("unbound strblobptr");
        }
        if(i>=ret->size())
        {
            throw out_of_range(msg);
        }
        return ret;
    }
    weak_ptr<vector<string>> wptr;
    size_t curr;
};

int main()
{
    ifstream in("1.txt");
    string s;
    StrBlon blob;
    while(getline(in>>s))
    {
        blob.pushback(s);
        }
    for(StrBlobPtr pbeg(blob.begin()),pend(blob.end());pbeg!=pend;pbeg.incr())
    cout<<pbeg.deref()<<endl;
    return 0;
}
