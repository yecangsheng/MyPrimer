#include<iostream>
using namespace std;
#include<map>
#include<vector>


int main()
{
    map<string,vector<string>> families;
    cout<<"input the family name:"<<endl;
    string first;
    while(cin>>first)
    {
        string name;
        if(families.find(first)!=families.end())
        {
            cout<<"it is a old family,please input the child's name:"<<endl;
            cin>>name;
            families[first].push_back(name);
            cout<<"input the family name:"<<endl;
        }else{
            cout<<"it is a new family,please input the chile's names"<<endl;
            cin>>name;
            families[first].push_back(name);    
            cout<<"input the family name:"<<endl;
        }

    }
    for(auto a:families)
    {
        cout<<a.first<<" family has kids: "<<endl;
        for(auto k:a.second)
        {
            cout<<k<<" ";
        }
        cout<<endl;
    }
    return 0;

}
