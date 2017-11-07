#include"blob.h"

int main()
{
    Blob<int> b{1,2,3,45,5};
    Blob<string> s={"my","her","his","thier"};
    b.show();
    cout<<endl;
    s.show();


    return 0;
}
