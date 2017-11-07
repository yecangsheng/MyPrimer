#include<iostream>  
#include<fstream>  
#include<sstream>  
#include<string>  
#include<vector>  
#include<forward_list>  
using namespace std;  
  
/*void func(string &s, string &oldVal, string &newVal)  
{  
    int _size = oldVal.size();  
    string::iterator it1 = s.begin();  
    string::iterator it2 = newVal.begin();  
    string::iterator it3 = newVal.end();  
  
     for (it1; it1 <= (s.end()-oldVal.size()+1); ++it1)  
    {  
        //pos可以由两个迭代器相减得到,返回截取到的string  
        if((s.substr(it1-s.begin(),_size) == oldVal))//substr()的作用就是截取string中的一段  
        {  
            it1 = s.erase(it1,it1+_size);//返回的是最后一个被删除的元素之后的位置  
            it1 = s.insert(it1, it2, it3);//VS2010运行出错，但是未找到原因何在，本质上说应该是没有错误的  
            advance(it1,_size);//向前一定大小  
        }  
    }  
}*/
void func(string &s,string &oldVal,string &newVal)
{
    int _size = oldVal.size();  
    string::iterator it1 = s.begin();  
    string::iterator it2 = newVal.begin();  
    string::iterator it3 = newVal.end();  
     for (it1; it1 <= (s.end()-oldVal.size()+1); ++it1) 
     {
	 if((s.substr(it1-s.begin(),_size) == oldVal))//substr()的作用就是截取string中的一段  
	{
		s.replace(it1-s.begin(),_size,newVal);
	}
    }
}
  
int main(int argc, char**argv)  
{  
    string s = "abcdefg";  
    string oldval = "bc";  
    string newval = "asas";  
    func(s,oldval,newval);  
    cout<<s<<endl;  
    return 0;  
}  
