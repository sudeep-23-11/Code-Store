//General
#include<iostream>
using namespace std;
int a=5;
int main()
{
    int x, y, a;
    bool b, c;
    int i(33);
    float j{66.99};
    cout<<i<<" "<<j<<endl;
    auto ch='X';
    decltype (ch) dh='Y';
    cout<<ch<<" "<<dh<<endl;
    x=(int)2.2;
    y=int(3.3);
    cout<<x<<" "<<y<<endl;
    a=10;
    cout<<::a<<" "<<a<<endl;
    b=true;
    c=false;
    cout<<b<<" "<<c<<endl;
    cout<<boolalpha<<b<<" "<<c<<endl;
}