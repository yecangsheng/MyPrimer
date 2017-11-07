#include<iostream>
using namespace std;
#include<forward_list>
#include<cstring>
int func(forward_list<string> &li,string a,string b)
{
    forward_list<string>::iterator pr=li.begin();
    forward_list<string>::iterator pr2=li.before_begin();
    while(pr!=li.end())
    {
        if((*pr)==a)
        {
            li.insert_after(pr,b);
            return 0;
        }else{
            pr++;
            pr2++;
        }
       
    }
    if(pr==li.end())
    {
       li.insert_after(pr2,b);
       return 0;
    }

}

int main ()
{
    
    forward_list<string> list={"apple","greap","orange","pear","banana","coconut"};
    func(list,"iyellow","red");
    for(auto a:list)
    {
        cout<<a<<" ";
    }
    return 0;
}
