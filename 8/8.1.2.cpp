#include<iostream>
using namespace std;
#include<cstring>
#include<sstream>
istream& func(istream &is)
{
    string s;
    while(is>>s)
    {
        cout<<s<<endl;
    }
    is.clear();
    return is;
}
int main()
{
    istringstream in("hellow world!");
    func(in);
    return 0;
}


