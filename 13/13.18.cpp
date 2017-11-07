#include<iostream>
using namespace std;
class Employee{
public:
    Employee(){
    num=n++;
    }

    Employee(const string s){
    num=n++;
    name=s;
    }
    string name;
    int num;
    static int n;
};
int Employee:: n=0;
int main()
{
    Employee a,b,c;
    Employee d("Anna");

    cout<<a.name<<"-"<<a.num<<endl;
    cout<<b.name<<"-"<<b.num<<endl;
    cout<<c.name<<"-"<<c.num<<endl;
    cout<<d.name<<"-"<<d.num<<endl;
    return 0;
}
