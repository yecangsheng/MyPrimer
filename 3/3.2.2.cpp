#include<iostream>
using namespace std;
#include<cstring>

int main()
{
	string s1,s2;

/*	while(getline(cin,s1))
	cout<<"s1:"<<s1<<endl;*/

/*	while(cin>>s2)
	{
		cout<<s2<<"  "<<endl;
	}*/
/*	cin>>s1>>s2;
	if(s1==s2){
		cout<<"they are same"<<endl;
	}else{
		cout<<"the bigger one is: "<<(s1>s2?s1:s2)<<endl;
	}
	cin>>s1>>s2;
	if(s1.size()==s2.size()){
		cout<<"their size are same"<<endl;
	}else{
		cout<<"the longer one is : "<<(s1.size()>s2.size()?s1:s2)<<endl;
	}*/
/*	while(cin>>s1)
	{
		s2+=s1;
	}
	cout<<s2<<endl;*/
	while(cin>>s1)
	{
		s2=s2+" "+s1;
	}
	cout<<s2<<endl;
	return 0;
}
