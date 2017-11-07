#include<iostream>
#include<fstream>
#include<cstring>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;

void devide(ifstream &infile,ofstream &outfile1,ofstream &outfile2)
{
    vector<int> i_vec;
    istream_iterator<int> iiter(infile),int_eof;
    ostream_iterator<int> oiter1(outfile1," "),oiter2(outfile2,"\n");

    while(iiter!=int_eof)
    {
        i_vec.push_back(*iiter++);
    }
    for(auto a:i_vec)
    {
       cout<<a<<" "; 
        if(a%2)
        {
            *oiter1++=a;
        }else{
            *oiter2++=a;
        }
    }
}
int main()
{
    ifstream in("in.txt");
    ifstream in2("in2.txt");
    ofstream out("out.txt",ofstream::app);
    vector<string> vec;
    istream_iterator<string> in_iter(in),eof;
    while(in_iter!=eof)
    {
        vec.push_back(*in_iter++);
    }
    for(auto a:vec)
    {
        cout<<a<<" ";
    }
    cout<<endl;

    vector<int> ivec;
    istream_iterator<int> in_iter2(in2),int_eof;
    ostream_iterator<int> out_iter(out," ");
    while(in_iter2!=int_eof)
    {
        ivec.push_back(*in_iter2++);
    }
    sort(ivec.begin(),ivec.end());
    copy(ivec.begin(),ivec.end(),out_iter);
    cout<<endl;
    
    ofstream out1("out1.txt"),out2("out2.txt");
    ifstream in3("in3.txt"); 
    devide(in3,out1,out2);

    
    return 0; 
}
