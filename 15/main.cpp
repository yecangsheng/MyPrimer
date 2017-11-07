#include"query.h"
#include"query2.h"

int main()
{
    istream in("in.txt");
    Query result=Query("and")&Query("to");
    auto r=result.eval(in);
    print(cout,r);
    return 0;

}
