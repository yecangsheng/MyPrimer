#include<iostream>
using namespace std;
#include<cstring>
#include<vector>

class Time{
public:
    Time(string);
	void show(){
		cout<<year<<"-"<<month<<"-"<<day<<endl;
	}
private:
    unsigned year;
    unsigned month;
    unsigned day;

};
Time::Time(string s){
    string number="0123456789/";
    string coma=",";
    int flag=0;
	string _month;
    string::size_type pos,pos1,pos2;
    if((pos=s.find_first_not_of(number))==string::npos)
    {
        flag=1;
    }else if((pos=s.find(coma))!=string::npos)
    {
        flag=2;
    }
    switch(flag)
    {
        case 1://1/1/1990
            pos1=0;
            pos1=s.find_first_of("/",pos1);
            day=stoul(s.substr(0,pos1));
            pos1++;
            pos2=s.find_first_of("/",pos1);
            month=stoul(s.substr(pos1,pos2));
            pos2++;
            year=stoul(s.substr(pos2,s.size()-1));         
        break;
        case 2://january 1,1900
			pos1=0;
			pos1=s.find_first_of(number);
			_month=s.substr(0,pos1);
            if (_month == "January ") _month = 1;  
        	if (_month == "February ") month = 2;  
        	if (_month == "March ") month = 3;  
        	if (_month == "April ") month = 4;  
        	if (_month == "May ") month = 5;  
        	if (_month == "June ") month = 6;  
        	if (_month == "July ") month = 7;  
        	if (_month == "August ") month = 8;  
        	if (_month == "September ") month = 9;  
        	if (_month == "October ") month = 10;  
        	if (_month == "November ") month = 11;  
        	if (_month == "December ") month = 12;
			pos2=s.find_first_of(coma);
			day=stoul(s.substr(pos1,pos2));
			pos2++;
			year=stoul(s.substr(pos2,s.size()-1));
		break;
		case 0://jan 1 1900
			pos1=0;
			pos1=s.find_first_of(number);
			_month=s.substr(0,pos1);
			if (_month == "Jan ") month = 1;  
        	if (_month == "Feb ") month = 2;  
       	    if (_month == "Mar ") month = 3;  
        	if (_month == "Apr ") month = 4;  
        	if (_month == "May ") month = 5;  
        	if (_month == "Jun ") month = 6;  
        	if (_month == "Jul ") month = 7;  
        	if (_month == "Aug ") month = 8;  
        	if (_month == "Sep ") month = 9;  
        	if (_month == "Oct ") month = 10;  
        	if (_month == "Nov ") month = 11;  
        	if (_month == "Dec ") month = 12;	
            pos2=pos1+1;
			pos2=s.find_first_of(number);
			day=stoul(s.substr(pos1,pos2));
			year=stoul(s.substr(pos2,s.size()-1));
			break;

    }

}
int main()
{
    vector<string> vec={"123","2445","1","45"};
    int sum=0;
    for(auto a:vec)
    {
        sum+=stoi(a);

    }
    cout<<sum<<endl;
	Time t1("December 1,2000");
	Time t2("30/12/1580");
	Time t3("Jun 11 22587");
	t1.show();
	t2.show();
	t3.show();
    return 0;
}
