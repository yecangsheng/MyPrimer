#include<iostream>
using namespace std;
#include<cstring>

int main()
{
    string::size_type pos=0;
    string s="ab2c3d7R4E63r";
    string number="0123456789";
   // unsigned pos=0;
    while((pos=s.find_first_of(number,pos))!=string::npos)
    {
        cout<<"in the "<<pos<<" find the character : "<<s[pos]<<endl;
       ++pos;
    }
    pos=0;
    cout<<"-------------------------------"<<endl;
    while((pos=s.find_first_not_of(number,pos))!=string::npos)
    {
        cout<<"in the "<<pos+1<<" find the character : "<<s[pos]<<endl;
         ++pos;
    }
    return 0;
}
