#include<iostream>
using namespace std;
#include<algorithm>
#include<list>
#include<vector>
int main()
{
   // list<int> lst={10,10,12,554,12,56,10};
    int lst[7]={10,10,12,15,5,5,5};
    list<int> lst2;
    sort(lst,lst+7);
    unique_copy(begin(lst),end(lst),front_inserter(lst2));
    for(auto a:lst2)
    {
        cout<<a<<" ";
    }
    cout<<endl;
    list<int> vec={1,2,3,4,5,6,7,8,9};
    list<int> vec_b,vec_f,vec_i;
    copy(vec.begin(),vec.end(),front_inserter(vec_f));
    for(auto a:vec_f)
    {
        cout<<a<<" ";
    }
    cout<<endl;
    copy(vec.begin(),vec.end(),back_inserter(vec_b));
    for(auto a:vec_b)
    {
        cout<<a<<" ";
    }
    cout<<endl;
    copy(vec.begin(),vec.end(),inserter(vec_i,vec_i.end()));
    for(auto a:vec_i)
    {
        cout<<a<<" ";
    }
    cout<<endl;
    return 0;
}
