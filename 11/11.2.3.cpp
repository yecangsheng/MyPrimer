#include<iostream>
using namespace std;
#include<utility>
#include<cstring>
#include<vector>

int main()
{
    string str;
    int i;
    pair<string,int> mypair;
    vector<pair<string,int>> vec;
    while(cin>>str>>i)
    {
        mypair={str,i};
        vec.push_back(mypair);
    }
    for(auto a:vec){
        cout<<a.first<<"->"<<a.second<<endl;
    }
    return 0;
}
