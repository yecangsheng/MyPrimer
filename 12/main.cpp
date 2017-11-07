#include"query.h"
void runQuery(ifstream &in)
{
    TextQuery tq(in);
    while(true)
    {
        cout<<"enter the word to find or q to quit!"<<endl;
        string s;
        cin>>s;
        if(s=="q")
            break;
        print(cout,tq.query(s))<<endl;
    }
}

int main()
{
    ifstream in("in.txt");
    runQuery(in);
    return 0;
}
