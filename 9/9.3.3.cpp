#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int> vec={1,2,3,4,5,6,7,8,9};
    vector<int>::iterator it1=vec.begin(),it2=it1+5;
    cout<<"delete"<<(*it1)<<"<----->"<<(*it2)<<endl;
    it1=vec.erase(it1,it2);
    cout<<"the reat part is : "<<endl;
    for(auto a:vec)
    {
        cout<<a<<" ";
    }
    cout<<"now the it is: "<<*it1<<endl;
    return 0;
}   
