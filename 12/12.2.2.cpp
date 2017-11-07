#include<iostream>
using namespace std;
#include<memory>
#include<cstring>


int main()
{
    allocator<string> alloc;
    auto const p=alloc.allocate(10);
    auto q=p;;;;;;;;;;;;
    string s;
    while(cin>>s&&q!=p+1000)
    {
        alloc.construct(q++,s);
    }

   // for(auto j=p;j!=p+10;j++)
    //{
      // cout<<*j<<" ";
    //}
    while(q!=p)
    {
        alloc.destroy(q--);
    }
    alloc.deallocate(p,10);
    return 0;




}
