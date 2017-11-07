#include<iostream>
using namespace std;
#include<vector>
#include<fstream>
int main()
{
    string infile="1.text";
    string infile2="2.txt";
    ifstream in(infile);
    ifstream in2(infile2);
    vector<string> vec,vec2;
    if(in){
        string buf;
        while(getline(in,buf))
        {
            vec.push_back(buf);
        }
    }else{
        cerr<<"can't open the file: "<<infile<<endl;
    }
    in.close();

    for(auto a:vec){
        cout<<a<<endl;
    }

    if(in2)
    {
        string str;
        while(in2>>str)
        {
            vec2.push_back(str);
        }
    }else{
        cerr<<"can't open the file: "<<infile2<<endl;
    }
    in2.close();

    for(auto a:vec2)
    {
        cout<<a<<endl;
    }
    return 0;
}
