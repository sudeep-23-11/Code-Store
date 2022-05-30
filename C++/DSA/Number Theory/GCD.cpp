//GCD
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
    return x;
    else
    return f1(y, x%y);
}
int f2(int x, int y)
{
    if(x==0)
    return y;
    else if(y==0)
    return x;
    else if(x==y)
    return x;
    else if(x>y)
    return f2(x-y, y);
    else
    return f2(x, y-x);
}