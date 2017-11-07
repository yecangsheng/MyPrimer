#include<iostream>  
#include<string>  
#include<vector>  
#include<algorithm>  
#include<numeric>  
using namespace std;  
  
class Sales_data  
{  
public:  
    Sales_data();  
    Sales_data(string s):_isbn(s)//列表初始化格式（：类内变量名（初始化值），）  
    {  
  
    }  
    string isbn()  
    {  
        return _isbn;  
    }  
    string _isbn;  
};  
  
int main(int argc, char**argv)  
{  
    Sales_data a("because");//初始化对象  
    Sales_data b("I");  
    Sales_data c("Like");  
    Sales_data d("your");  
    Sales_data e("beautiful");  
    Sales_data f("eyes");  
  
    vector<Sales_data> vec={a,b,c,d,e,f};
   /* vec1[0] = a;  
    vec1[1] = b;  
    vec1[2] = c;  
    vec1[3] = d;  
    vec1[4] = e;  
    vec1[5] = f;  
*/  
    stable_sort(vec.begin(),vec.end(),[](Sales_data s1, Sales_data s2){return s1.isbn().size() < s2.isbn().size();});//排序  
    cout<<"排序后的vector:";  
    for(auto a:vec)  
    {  
        cout<<a.isbn()<<" ";  
    }  
  

    return 0;  
}  
