//Power
#include<iostream>
using namespace std;
int f1(int x, int y);
int f2(int x, int y);
int main()
{
    int a, b;
    cin>>a>>b;
    cout<<f1(a, b)<<" "<<f2(a, b)<<endl;
    return 0;
}
int f1(int x, int y)
{
    if(y==0)
    return 1;
    else if(y%2==0)
    return (f1(x, y/2)*f1(x, y/2));
    else
    return (x*f1(x, y-1));
}
int f2(int x, int y)
{
    int pro, pow;
    pro=x;
    pow=1;
    while(y!=0)
    {
        if(y&1!=0)
        pow*=pro;
        pro*=pro;
        y/=2;
    }
    return pow;
}