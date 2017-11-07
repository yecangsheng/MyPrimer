#include<iostream>
using namespace std;
#include<map>
#include<cstring>
#include<cctype>
#include<fstream>
#include<algorithm>
    bool nword(char a){
        return ispunct(a);
    }
int main()
{
   /* map<string,int> times;
    string word;
    while(cin>>word)
    {
        times[word]++;
    }
    for(auto a:times)
    {
        cout<<a.first<<" occurs "<<a.second<<" times "<<endl;
    }
*/
    ifstream in("in.txt");
    map<string,int> words;
    string str;
    while(in>>str)
    {
        for(auto &a:str)
        {
            a=tolower(a);
        }
        auto p=remove_if(str.begin(),str.end(),nword);//put the unmatched element to the match behind.
        cout<<*p;
        str.erase(p,str.end());
        words[str]++;
    }
    for(auto a:words)
    {
        cout<<a.first<<" occurs "<<a.second<<" times "<<endl;
    }

    
    return 0;
}
