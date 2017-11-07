#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include<numeric>
#include<string>
class Sales_data{
public:
    Sales_data();
    Sales_data(string s):_isbn(s){}
    string isbn(){return _isbn;}
private:
    string _isbn;
};
void elimDups(vector<string> &s)
{
    sort(s.begin(),s.end());
    vector<string>::iterator str=unique(s.begin(),s.end());
    s.erase(str,s.end());
}
void biggies(vector<string> &word,string::size_type sz)
{
    elimDups(word);
    stable_sort(word.begin(),word.end(),[](string s1,string s2){return s1.size()<s2.size();});
    auto prt=partition(word.begin(),word.end(),[sz](string s){return s.size()<=sz;});
    for_each(prt,word.end(),[](string s){cout<<s<<" ";});

}
int main()
{
    Sales_data a("abc");
    Sales_data b("sgg");
    Sales_data c("dfsf");
    Sales_data d("ggc");
    Sales_data e("fbc");
    vector<Sales_data> vec={a,b,c,d,e};
    
    
    stable_sort(vec.begin(),vec.end(),[](Sales_data a,Sales_data b){return a.isbn().size()<b.isbn().size();});

    cout<<"vec: "<<endl;

    for_each(vec.begin(),vec.end(),[](Sales_data s){cout<<s.isbn()<<" ";});
    cout<<"----------------------------------"<<endl; 
    vector<string> svec={"afdfe","asf","fss","vreww","aef","ervs","gses"};
    cout<<"svec: "<<endl;
    for_each(svec.begin(),svec.end(),[](string s){cout<<s<<" ";});
    cout<<endl;
    cout<<"svec bigger than 4: "<<endl;
    biggies(svec,4);
    //for_each(svec.begin(),svec.end(),[](string s){cout<<s<<" ";});


    return 0;
}
