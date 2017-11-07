#include<iostream>
#include<vector>
using namespace std;
#include<cstring>
#include<algorithm>
#include<list>
int main()
{
    vector<string> vec={"asd","cewq","asdif"};
    vector<int> ivec={1,2,3,4,5,6,7,8,9,10};
    list<int> lst;
    for(auto it=vec.rbegin();it!=vec.rend();++it)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    for(auto it=vec.end();it!=vec.begin();--it)
    {
        cout<<*(it-1)<<" ";
    }
    cout<<endl;
    copy(ivec.rbegin()+3,ivec.rbegin()+7,back_inserter(lst));
    for(auto a:lst)
    {
        cout<<a<<" ";
    }
    cout<<endl;
    return 0;
}
