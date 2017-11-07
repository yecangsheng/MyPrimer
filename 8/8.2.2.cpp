#include<iostream>
using namespace std;
#include<fstream>
ostream& print(ostream& os,int a)
{
    cout<<a<<endl;
    return os;
}
int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt",ofstream::app);

    if(in){
        int a,b;
        while(in>>a>>b)
        {
            int sum=a+b;
            out<<sum<<endl;
            print(out,sum);
        }

    }else{
        cerr<<"can't open this file!"<<endl;
    }
    return 0;
}
