//PowerAndGcd
#include<iostream>
using namespace std;
int pow1(int x, int y);
int pow2(int x, int y);
int gcd1(int x, int y);
int gcd2(int x, int y);
int main()
{
    int a, b, p1, p2, g1, g2;
    cin>>a>>b;
    p1=pow1(a, b);
    p2=pow2(a, b);
    g1=gcd1(a, b);
    g2=gcd2(a, b);
    cout<<p1<<" "<<p2<<" "<<g1<<" "<<g2<<endl;
    return 0;
}
int pow1(int x, int y)
{
    if(y==0)
    return 1;
    else if(y%2==0)
    return (pow1(x, y/2)*pow1(x, y/2));
    else
    return (x*pow1(x, y-1));
}
int pow2(int x, int y)
{
    int pro=x, pow=1;
    while(y!=0)
    {
        if(y&1!=0)
        pow*=pro;
        pro*=pro;
        y/=2;
    }
    return pow;
}
int gcd1(int x, int y)
{
    if(y==0)
    return x;
    else
    return gcd1(y, x%y);
}
int gcd2(int x, int y)
{
    if(x==0)
    return y;
    else if(y==0)
    return x;
    else if(x==y)
    return x;
    else if(x>y)
    return gcd2(x-y, y);
    else
    return gcd2(x, y-x);
}
