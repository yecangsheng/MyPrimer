#ifndef _BLOB_H_
#define _BLOB_H_
#include<memory>
#include<vector>
#include<iostream>
#include<string>
using namespace std;
template<typename T>
class Blob{
public:
    typedef T value_type;
    typedef typename vector<T>::size_type size_type;
    Blob();
    Blob(initializer_list<T> il):data(make_shared<vector<T>>(il)){}
    size_type size()const{return data->size();}
    bool empty()const{return data->empty();}
    void push_back(const T &t){data->push+back(t);}
    void push_back(T &&t){data->push_back(move(t));}
    void pop_back(){
        check(0,"pop of empty vactor");
        data->pop_back();
    }
    T& back(){
        check(0,"back of empty vector");
        return data->back();
    }
    T& operator[](size_type i){
        check(i,"out of rangre");
        return (*data)[i];
    }
    void show(){
        for(auto v:*data)
        {
            cout<<v<<" ";
        }
    }
    ~Blob(){}
private:
    shared_ptr<vector<T>> data;
    void check(size_type i,const string &msg) const;

};
template<typename T>
void Blob<T>:: check(size_type i,const string &msg) const{
    if(i>=data->size())
        throw out_of_range(msg);
}




#endif
