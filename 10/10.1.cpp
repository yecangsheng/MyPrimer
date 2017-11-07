#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main()
{
    vector<int> ivec={1,12,5,26,186,1,35,1,1,358,1};
    vector<string> svec={"as","foir","as","as","fd","grw","a","as","gfd"};
    cout<<"1 : "<<count(ivec.begin(),ivec.end(),1)<<" times "<<endl;
    cout<<"as : "<<count(svec.begin(),svec.end(),"as")<<" times "<<endl;
    return 0;
}
