#include<iostream>
using namespace std;
#include<new>

#include<memory>
#include<vector>
shared_ptr<vector<int>> input()
{
   shared_ptr<vector<int>> pv(new vector<int>);
    return pv;
}
void trans(shared_ptr<vector<int>> p)
{
    int i;
    while(cin>>i)
    {
        p->push_back(i);
    }
}
void print(shared_ptr<vector<int>> p)
{
    for(auto a:*p)
    {
        cout<<a<<" ";
    }
    cout<<endl;
}
int main()
{
    shared_ptr<vector<int>> m_ptr=input();
    trans(m_ptr);
    print(m_ptr);
    int *p=new int(20);
    cout<<*p<<endl;
    delete p;
    return 0;

}
