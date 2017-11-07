#include<iostream>
using namespace std;
#include<vector>

int main()
{
    vector<int> vec;
    cout<<"the size of vec is : "<<vec.size()<<endl;
    cout<<"the capacity of the vec is :"<<vec.capacity()<<endl;
    for(vector<int>::size_type i=0;i<10;i++)
    {
        vec.push_back(i);
    }
    cout<<"the size of vec is : "<<vec.size()<<endl;
    cout<<"the capacity of the vec is :"<<vec.capacity()<<endl;
    vector<int> vec2;
    int a;
    while(cin>>a)
    {
        vec2.push_back(a);
        cout<<"the size of vec is : "<<vec2.size()<<endl;
        cout<<"the capacity of the vec is :"<<vec2.capacity()<<endl;
    }
    return 0;
}
