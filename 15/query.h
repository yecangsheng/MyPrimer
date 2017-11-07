#ifndef _QUERY_H
#define _QUERY_H


#include<iostream>
using namespace std;
#include<memory>
#include<vector>
#include<fstream>
#include<sstream>
#include<map>
#include<set>

typedef vector<string>::size_type  line_no;
class QueryResult;
    
class TextQuery{
public :
    TextQuery(ifstream&);
    QueryResult query(const string&) const;
private:
    shared_ptr<vector<string>> file;
    map<string,shared_ptr<set<line_no>>> wm;
};
TextQuery::TextQuery(ifstream& infile):file(new vector<string>)
{
    string text;
    while(getline(infile,text)){
        file->push_back(text);
        line_no n=file->size()-1;
        istringstream line(text);
        string word;
        while(line>>word)
        {
            auto &p=wm[word];
            if(!p){
                p.reset(new set<line_no>);
            }
            p->insert(n);
        }
    }

}

class QueryResult{
friend  ostream& print(ostream&,const QueryResult&);
public:
    QueryResult(string s,shared_ptr<set<line_no>> p,shared_ptr<vector<string>> f): sfind(s),lines(p),file(f){}
private:
    string sfind;
    shared_ptr<set<line_no>> lines;
    shared_ptr<vector<string>> file;
};

QueryResult TextQuery:: query(const string &s) const{
    static shared_ptr<set<line_no>> nodata(new set<line_no>);
    auto loc=wm.find(s);
    if(loc==wm.end())
    {
        return QueryResult(s,nodata,file);
    }else{
        return QueryResult(s,loc->second,file);
    }
   
}

ostream &print(ostream& os,const QueryResult &qr)
{
    os<<qr.sfind<<" occurs "<<qr.lines->size()<<" times "<<endl;
    for(auto num:*qr.lines)
    {
        os<<"\t(line"<<num+1<<")"<<*(qr.file->begin()+num)<<endl;
    }
    return os;

}










#endif
