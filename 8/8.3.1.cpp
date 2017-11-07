#include<iostream>
using namespace std;
#include<sstream>
#include<cstring>
#include<fstream>
#include<vector>
int main()
{
    vector<string> vec;
    ifstream in("in.txt");
   // istringstream istr;
    if(in){
        string str;
        while(in>>str)
        {
            vec.push_back(str);
        }
    }else{
        cerr<<"can't open the file!"<<endl;
    }
  /*  for(auto a:vec){
        istr(a);
    }*/
    for(auto a:vec)
    {
        istringstream istr(a);
     //   istr(a);
        string word;
        istr>>word;
        cout<<word<<endl;
       
        istr.clear();
    }
    return 0;
}   
