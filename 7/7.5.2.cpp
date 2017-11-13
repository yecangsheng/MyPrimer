#include<iostream>
using namespace std;
#include<cstring>

class A{
public:
	A(string s,int i,int j):name(s),age(i),num(j){cout<<"first"<<endl;}
	A():A("",0,0){cout<<"second"<<endl;}
	A(string s):A(s,0,0){cout<<"third"<<endl;}
	A(istream &is):A(){read(is,*this);
	cout<<"forth"<<endl;
	}
	istream& read(istream &is,A &item)
	{
		is>>item.name>>item.age>>item.num;
		return is;
	}
private:
	string name;
	int age;
	int num;


};
int main()
{
	A a("aa",1,1);
	A b;
	A c("cc");
	A d(cin);
	return 0;
}
