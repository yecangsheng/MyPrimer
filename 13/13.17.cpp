#include<iostream>
using namespace std;

class HasPtr{
public:
    HasPtr(){
    static int val=0;
    num=val++;
    }
    HasPtr(const HasPtr &a){
    num=a.num+3;
    }
    ~HasPtr(){}
//private:
    int num;

};

void show(const HasPtr a)
{
    cout<<a.num<<endl;
}

void show2(const HasPtr &a)
{
    cout<<a.num<<endl;
}

int main()
{
    HasPtr a,b=a,c=b;
  //  A d;
    show2(a);
    show2(b);
    show2(c);
//    show(d);

    return 0;
}
