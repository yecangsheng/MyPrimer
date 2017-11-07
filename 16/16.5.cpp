#include<iostream>
using namespace std;
#include<vector>
#include<list>
#include<string>
template<typename T,typename U> bool Myfind(const T &t1,const T &t2,const U &u)
{
    for(auto t=t1;t!=t2;++t)
    {
        if((*t)==u)
        return true;
    }
    return false;

}
template<typename T > void Myprint(const T &t)
{
    for(auto v:t)
    {
        cout<<v<<" ";
    }
}
template<typename T,unsigned N> T* Mybegin(T (&arr)[N])
{
    return arr;
}
template<typename T,unsigned N> T* Myend(T (&arr)[N])
{
    return arr+N;
}

int main()
{
    cout<<"----------------16.4---------------------"<<endl;
    vector<int> vec={12,54,2,12,4,77,5};
    auto it1=vec.begin(),it2=vec.end();
    list<string> lst={"my","your","her","his"};
    auto lt1=lst.cbegin(),lt2=lst.cend();
    cout<<"77: "<<Myfind(it1,it2,77)<<endl;
    cout<<"het: "<<Myfind(lt1,lt2,"het")<<endl;
    cout<<"my: "<<Myfind(lt1,lt2,"my")<<endl;
    cout<<"----------------16.5--------------------"<<endl;
    int arr1[10]={12,54,2,12,4,77,5,21,21,12};
    char arr2[5]="they";
    Myprint(arr1);
    cout<<endl;
    Myprint(arr2);
    cout<<endl;
    cout<<"----------------16.6--------------------"<<endl;
    int arr3[7]={1,2,3,4,5,6,7};
    for(auto v=Mybegin(arr3);v!=Myend(arr3);++v)
    {
        cout<<*v<<" ";
    }
    return 0;
}
