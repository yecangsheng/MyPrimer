#include<iostream>
using namespace std;
#include<fstream>



int main()
{
    string s="asfgistaeiunasbdqq";
    string::size_type pos=0;
    ifstream infile("up.txt");
    ifstream infile2("down.txt");
    string up,down;
    infile>>up;
    infile2>>down;
    string result;
    while((pos=s.find_first_not_of(up,pos))!=string::npos)
    {
        result+=s[pos];
        ++pos;
    }
    cout<<result<<endl;
    pos=0;
    string real_result;
    while((pos=result.find_first_not_of(down,pos))!=string::npos)
    {
        real_result+=result[pos];
        ++pos;
    }
    cout<<"the result : "<<real_result<<endl;
    return 0;
}
