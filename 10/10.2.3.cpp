#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
void elimDups(vector<string> &svec)//delete the same word
{
    sort(svec.begin(),svec.end());
    for(auto a:svec)
    {
        cout<<a<<" "; 
    }
    cout<<endl;
    auto unique_end=unique(svec.begin(),svec.end());
    for(auto a:svec)
    {
        cout<<a<<" "; 
    }
    cout<<endl;
    svec.erase(unique_end,svec.end());
    for(auto a:svec)
    {
        cout<<a<<" "; 
    }
}

int main()
{
    string str;
    vector<string> vec;
    while(cin>>str)
    {
        vec.push_back(str);
    }
    elimDups(vec);
    return 0;
}
