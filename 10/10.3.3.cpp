#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<algorithm>




int main()
{
    vector<string> vec={"apple","banana","orange","coconut","watermelon","pear"};
    
    auto times=count_if(vec.begin(),vec.end(),[](string s){return s.size()>6;});
    for(auto a:vec)
    {
        cout<<a<<" ";

    }
    cout<<" have "<<times<<" words longer than 6!"<<endl;

    int a=10;
    auto f=[&a]()->bool{
        if(a==0)
        {
            return true;
        }else{
            a--;
            return false;
        }
    };
    int j=f();
    cout<<j<<endl;
    return 0;
}
