#include<iostream>
using namespace std;
#include<vector>

string make_plural(int i,const string &word,const string &end="s")
{
	return (i>1)?word+end:word;
}
const string& longer(int i,const string &s1,const string &s2)
{
	return (s1>s2)?s1:s2;
}
int main()
{
	cout<<"the word:"<<make_plural(1,"success")<<" "<<make_plural(2,"success","es")<<endl;
	cout<<"the word:"<<make_plural(1,"failure")<<" "<<make_plural(2,"failure")<<endl;
	
	cout<<"the longer between as and asfor is "<<longer(2,"as","asfor")<<endl;
	return 0;
}
