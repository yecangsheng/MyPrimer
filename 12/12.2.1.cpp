#include<iostream>
using namespace std;
#include<new>
#include<cstring>

int main()
{
    char *a="hellow";
    char *b="world";
    char *cp=new char[50]();
    strcpy(cp,a);
    strcat(cp,b);
    cout<<cp<<endl;
    string s1="aaa";
    string s2="bbb";
    strcat(cp,(s1+s2).c_str());//translate to char
    cout<<cp<<endl;
    delete [] cp;

    char *d;
    string c;
    char *cp2=new char[10];
    cin>>c;
    strcpy(cp2,c.c_str());
    cout<<c<<endl;
    cin>>d;
    strcat(cp2,d);
    cout<<d<<endl;
    delete [] cp2;
    return 0;
}
