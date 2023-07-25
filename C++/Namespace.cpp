//Namespace
#include<iostream>
namespace adding
{
    int add(int x, int y)
    {
        int r;
        r=x+y;
        return r;
    }
}
namespace multiplying
{
    int multiply(int x, int y);
}
int multiplying::multiply(int x, int y)
{
    int r;
    r=x*y;
    return r;
}
using namespace std;
using namespace multiplying;
int main()
{
    int a, b, sum, pro;
    cin>>a>>b;
    cout<<adding::add(a, b)<<endl;
    cout<<multiply(a, b)<<endl;
    return 0;
}