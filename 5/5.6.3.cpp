#include<iostream>
using namespace std;
#include<stdexcept>
int main()
{
	float i=0.0,j=0.0;
	begin:
	while(cin>>i>>j){
    	try{
			if(j==0) throw runtime_error("the second number shoudn't be 0!");
			float r=i/j;
			cout<<"the result of i/j is "<<r<<endl;
	}catch(runtime_error err){
		cout<<err.what()
		<<"\ntry again? enter y or n"<<endl;
		char c;
		cin>>c;
		if(!cin||c=='n'){
		break;}else
		goto begin;


	}
	return 0;

    }
}
