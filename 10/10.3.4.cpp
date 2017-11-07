#include<iostream>
using namespace std;
#include<cstring>
#include<vector>
#include<functional>
#include<algorithm>
using namespace std::placeholders;

bool check_size(string &s,string::size_type sz)
{
    return s.size()<sz;
}

int main()
{
    vector<string> vec={"dfsdf","dfsfsdfsf","sdf","dfsfsfsf","sdf"};
    int j=count_if(vec.begin(),vec.end(),bind(check_size,_1,6));
    cout<<j<<endl;

    string str="aaaaaa";
    vector<int> ivec={4,1,20,7};
    auto i=find_if(ivec.begin(),ivec.end(),bind(check_size,str,_1));
    cout<<*i<<endl;
    return 0;
}
