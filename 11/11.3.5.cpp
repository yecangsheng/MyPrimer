#include<utility>
#include<iostream>    
#include<string>    
#include<map>    
using namespace std;  
  
int main(int argc, char**argv)    
{   
    multimap<string, string> authors={make_pair("joy","a"),make_pair("joy","b"),make_pair("sam","c"),make_pair("dan","d"),make_pair("dan","e"),make_pair("zhang","f"),make_pair("tao","g")};
    while(authors.find("joy")!=authors.end())
    {
        auto p=authors.find("joy");
        authors.erase(p);

    }
    for(auto a:authors)
    {
        cout<<a.first<<"->"<<a.second<<endl;
    }

return 0;
}
