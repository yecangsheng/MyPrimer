#include<iostream>
using namespace std;
#include<map>
#include<cstring>
#include<sstream>
#include<fstream>

map<string,string> buildMap(ifstream &mapfile)
{
    map<string,string> trans_map;
    string key;
    string value;
    while(mapfile>>key>>value)
    {
        trans_map[key]=value;
    }
    return trans_map;
}
const string& transform(const string &s,const map<string,string> &m)
{
    if(m.find(s)!=m.end())
    {
        return m.find(s)->second;
    }else{
        return s;
    }
}
void word_change(ifstream &map,ifstream &input)
{
    auto trans_map=buildMap(map);
    string text;
    while(getline(input,text))
    {
        bool firstword=true;
        string word;
        istringstream stream(text);
        while(stream>>word)
        {
            if(firstword)
            {
                firstword=false;
            }else{
                cout<<" ";
            }
            cout<<transform(word,trans_map);
        }
        cout<<endl;
    }

}
int main()
{
    ifstream map("mapfile.txt");
    ifstream input("input.txt");
    ifstream in("in.txt");
    word_change(map,input);
    return 0;


}
