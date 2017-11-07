#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

int main()
{
    vector<int> vec={123,46,123,88,852};
    cout<<"sum: "<<accumulate(vec.cbegin(),vec.cend(),0)<<endl;
    return 0;
}
