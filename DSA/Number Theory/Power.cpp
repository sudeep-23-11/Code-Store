//Power
#include<iostream>
using namespace std;
int pow(int x, int y);
int main()
{
    bool c;
    int x, y;
    double z;
    cin>>x>>y;
    c=false;
    if(y<0)
    {
        y*=-1;
        c=true;
    }
    if(c)
    {
        z=1.0/pow(x, y);
        cout<<z<<endl;
    }
    else
    cout<<pow(x, y)<<endl;
    return 0;
}
int pow(int x, int y)
{
    int z;
    if(!y)
    return 1;
    if(y%2 == 1)
    return pow(x, y-1)*x;
    z=pow(x, y/2);
    return z*z;
}